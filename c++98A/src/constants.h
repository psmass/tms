/*
 * (c) Copyright, Real-Time Innovations, 2022.  All rights reserved.
 * RTI grants Licensee a license to use, modify, compile, and create derivative
 * works of the software solely for use with RTI Connext DDS. Licensee may
 * redistribute copies of the software provided that all such copies are subject
 * to this license. The software is provided "as is", with no warranty of any
 * type, including any warranty for fitness for any purpose. RTI is under no
 * obligation to maintain or support the software. RTI shall not be liable for
 * any incidental or consequential damages arising out of the use or inability
 * to use the software.
 *
 * This file contains common manually defined constants.
 * 
 */

#ifndef CONSTANTS_H
#define CONSTANTS_H
/*
const char* QOS_URL = "../model_distroA/tmsExampleApp.xml";

const DDS_Char * DEVICE1_ID = "DGen1234";
const DDS_Char *  CONTROLLER1_ID =  "MC0001";
*/
#define HEARTBEAT_PERIOD {1, 0}

typedef enum ControllerState {
		      MC_INIT = 0, // send DI and start HB
		      MC_DISCOVERY,
		      MC_FOUND_NEW_DEVICE, 
		      MC_WAIT_CMD_IDLE,
		      MC_POWER_UP_AUTH,
		      MC_ENERGIZE,
		      MC_SHUT_DOWN,
		      MC_ERROR // received an out of order request
} ControllerState;

typedef enum DeviceState {
		  D_INIT = 0, // send DI and start HB
		  D_DISCOVERY,
		  D_FOUND_NEW_CONTROLLER,
		  D_WAIT_CMD_IDLE,
		  D_POWER_UP_AUTH,
		  D_ENERGIZE,
		  D_SHUT_DOWN,
		  D_ERROR // received an out of order request
} DeviceState;

#endif // CONSTANTS_H
