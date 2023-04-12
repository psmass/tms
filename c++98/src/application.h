/*
 * (c) Copyright, Real-Time Innovations, 2020.  All rights reserved.
 * RTI grants Licensee a license to use, modify, compile, and create derivative
 * works of the software solely for use with RTI Connext DDS. Licensee may
 * redistribute copies of the software provided that all such copies are subject
 * to this license. The software is provided "as is", with no warranty of any
 * type, including any warranty for fitness for any purpose. RTI is under no
 * obligation to maintain or support the software. RTI shall not be liable for
 * any incidental or consequential damages arising out of the use or inability
 * to use the software.
 */

#ifndef APPLICATION_H
#define APPLICATION_H

#include <iostream>
#include <csignal>
#include <climits>

namespace application {
    // Catch control-C and tell application to shut down
    bool shutdown_requested = false;

    inline void stop_handler(int)
    {
        shutdown_requested = true;
        std::cout << "preparing to shut down..." << std::endl;
    }

    inline void setup_signal_handlers()
    {
        signal(SIGINT, stop_handler);
        signal(SIGTERM, stop_handler);
    }

    enum ParseReturn { PARSE_RETURN_OK, PARSE_RETURN_FAILURE, PARSE_RETURN_EXIT };

    struct ApplicationArguments {
        ParseReturn parse_result;
        unsigned int domain_id;
        unsigned int init_id;
        unsigned int sample_count;
        std::string collector_peer;
        int observability_domain_id;
        std::string application_name;
        NDDS_Config_LogVerbosity verbosity;
        std::string participant_profile;
    };

    inline void set_verbosity(
        ApplicationArguments& arguments,
        int verbosity)
    {
        switch (verbosity) {
            case 0:
            arguments.verbosity = NDDS_CONFIG_LOG_VERBOSITY_SILENT;
            break;
            case 1:
            arguments.verbosity = NDDS_CONFIG_LOG_VERBOSITY_ERROR;
            break;
            case 2:
            arguments.verbosity = NDDS_CONFIG_LOG_VERBOSITY_WARNING;
            break;
            case 3:
            arguments.verbosity = NDDS_CONFIG_LOG_VERBOSITY_STATUS_ALL;
            break;
            default:
            arguments.verbosity = NDDS_CONFIG_LOG_VERBOSITY_ERROR;
            break;
        }
    }

    inline bool set_env(const char *name, const char *value) {
        #if defined(RTI_VXWORKS) || defined(RTI_INTY) || defined(RTI_QNX) || defined(_WIN32)
        std::string envVar = name;
        envVar += "=";
        envVar += value;
          #if defined(_WIN32)
        return _putenv(const_cast<char*>(envVar.c_str())) == 0;
          #elif defined(RTI_QNX)
        return putenv(strdup(const_cast<char*>(envVar.c_str()))) == 0;
          #else
        return putenv(const_cast<char*>(envVar.c_str())) == 0;
          #endif
        #else
        return setenv(name, value, 1) == 0;
        #endif
    }

    // Parses application arguments for example.  Returns whether to exit.
    inline void parse_arguments(
        ApplicationArguments& arguments,
        int argc,
        char *argv[],
        bool controller)
    {
        int arg_processing = 1;
        int verbosity;
        bool show_usage = false;
        arguments.domain_id = 0;
        arguments.sample_count = INT_MAX;
	arguments.init_id = 0;
        arguments.verbosity = NDDS_CONFIG_LOG_VERBOSITY_ERROR;
        arguments.collector_peer = ""; // default no collector
        arguments.observability_domain_id = 2;
        arguments.parse_result = PARSE_RETURN_OK;
        arguments.application_name = "";
	arguments.participant_profile = "LargeTopicParticipantQoS"; // default no observability

        while (arg_processing < argc) {
            if ((argc > arg_processing + 1)
                    && (strcmp(argv[arg_processing], "-n") == 0
                            || strcmp(argv[arg_processing],
                                       "--application-name")
                                    == 0)) {
                arguments.application_name = argv[arg_processing + 1];
                arg_processing += 2;
            } else if (
                    (argc > arg_processing + 1)
                    && (strcmp(argv[arg_processing], "-d") == 0
                            || strcmp(argv[arg_processing], "--domain") == 0)) {
                arguments.domain_id =
                        (unsigned int) atoi(argv[arg_processing + 1]);
                arg_processing += 2;
            } else if (
                    (argc > arg_processing + 1)
                    && (strcmp(argv[arg_processing], "-c") == 0
                            || strcmp(argv[arg_processing], "--collector-peer")
                                    == 0)) {
                arguments.collector_peer = argv[arg_processing + 1];
                arg_processing += 2;
		if (arguments.collector_peer == "udpv4_lan") {
		  arguments.collector_peer = "udpv4://localhost";
                  arguments.participant_profile = "Participant_Profile_With_Observability_Over_LAN";
		} else if (arguments.collector_peer.c_str() == "udpv4_wan") {
		  arguments.participant_profile = "Participant_Profile_With_Observability_Over_WAN";
                } else { // default no Observabilty
                arguments.participant_profile = "LargeTopicParticipantQoS";
		}
            } else if (
                    (argc > arg_processing + 1)
                    && (strcmp(argv[arg_processing], "-o") == 0
                            || strcmp(argv[arg_processing],
                                       "--observability-domain")
                                    == 0)) {
                arguments.observability_domain_id =
                        atoi(argv[arg_processing + 1]);
                arg_processing += 2;
            } else if (
                    (argc > arg_processing + 1)
                    && (strcmp(argv[arg_processing], "-v") == 0
                            || strcmp(argv[arg_processing], "--verbosity")
                                    == 0)) {
                verbosity = atoi(argv[arg_processing + 1]);
                set_verbosity(arguments, verbosity);
                arg_processing += 2;
            } else if (
                    strcmp(argv[arg_processing], "-h") == 0
                    || strcmp(argv[arg_processing], "--help") == 0) {
                std::cout << "Example application." << std::endl;
                show_usage = true;
                arguments.parse_result = PARSE_RETURN_EXIT;
                break;
            } else {
                std::cout << "Bad parameter." << std::endl;
                show_usage = true;
                arguments.parse_result = PARSE_RETURN_FAILURE;
                break;
            }
        }

        if (arguments.application_name == "") {
            if (controller) {
	      arguments.application_name = "Controller_"
		+ (std::string)CONTROLLER1_ID;
            } else {
	      arguments.application_name = "Device_"
		+  (std::string)DEVICE1_ID;
            }
        }

        if (show_usage) {
            if (controller) {
                std::cout << "Usage:\n"\
                "    -n, --application-name     <str>   Application name\n"
                "                                       Default:\n" 
		"                                       Controller_<init_id>\n";
            } else {
                std::cout << "Usage:\n"\
                "    -n, --application-name     <str>   Application name\n"
                "                                       Default:\n" 
		"                                       Device_<init_id\n";
	    }
	    std::cout << \
                "    -d, --domain               <int>   Application domain ID\n"
                "                                       Default: 0\n"
                "    -o, --observability-domain <int>   Domain for sending telemetry\n"
                "                                       data\n"
                "                                       Default: 2\n"
                "    -c, --collector-peer       <str>   Collector Service peer\n"
	        "                                       udpv4_wan\n"
	        "                                       udpv4_lan (//localhost)\n"
                "                                       Default: (no Observabilty)"
                "    -v, --verbosity            <int>   How much debugging output to show\n"
                "                                       Range: 0-3\n"
                "                                       Default: 1"
                << std::endl;
        } else {
	  std::cout << "Running with parameters:\n" 
                    << "\tApplication Resource Name: " << "/applications/" << arguments.application_name << std::endl
                    << "\tDomain ID: " << arguments.domain_id << std::endl
                    << "\tInit ID: " << arguments.init_id << std::endl
                    << "\tObservability Domain: " << arguments.observability_domain_id << std::endl
                    << "\tCollector Peer: " << arguments.collector_peer << std::endl
	            << "\tUseing Participant Library: " << arguments.participant_profile << std::endl
                    << "\tVerbosity: " << verbosity << std::endl;
	}
    }

  
} // namespace application

#endif // APPLICATION_H
