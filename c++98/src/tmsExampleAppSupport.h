
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from tmsExampleApp.idl
using RTI Code Generator (rtiddsgen) version 4.0.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef tmsExampleAppSupport_1875817790_h
#define tmsExampleAppSupport_1875817790_h

/* Uses */
#include "tmsExampleApp.h"

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)

class __declspec(dllimport) DDSTypeSupport;
class __declspec(dllimport) DDSDataWriter;
class __declspec(dllimport) DDSDataReader;

#endif

namespace generator_device {
} /* namespace generator_device  */
namespace master_controller {
} /* namespace master_controller  */
namespace tms {
    namespace topic {
    } /* namespace topic  */
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        ControlHardwareUpdateTypeSupport, 
        ControlHardwareUpdate);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(ControlHardwareUpdateDataWriter, ControlHardwareUpdate);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(ControlHardwareUpdateDataReader, ControlHardwareUpdateSeq, ControlHardwareUpdate);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        PowerHardwareUpdateTypeSupport, 
        PowerHardwareUpdate);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(PowerHardwareUpdateDataWriter, PowerHardwareUpdate);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(PowerHardwareUpdateDataReader, PowerHardwareUpdateSeq, PowerHardwareUpdate);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        ClockStateTypeSupport, 
        ClockState);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(ClockStateDataWriter, ClockState);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(ClockStateDataReader, ClockStateSeq, ClockState);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        GroundingCircuitStateTypeSupport, 
        GroundingCircuitState);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(GroundingCircuitStateDataWriter, GroundingCircuitState);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(GroundingCircuitStateDataReader, GroundingCircuitStateSeq, GroundingCircuitState);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        ActiveDiagnosticStateTypeSupport, 
        ActiveDiagnosticState);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(ActiveDiagnosticStateDataWriter, ActiveDiagnosticState);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(ActiveDiagnosticStateDataReader, ActiveDiagnosticStateSeq, ActiveDiagnosticState);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        AuthorizationToEnergizeResultTypeSupport, 
        AuthorizationToEnergizeResult);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(AuthorizationToEnergizeResultDataWriter, AuthorizationToEnergizeResult);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(AuthorizationToEnergizeResultDataReader, AuthorizationToEnergizeResultSeq, AuthorizationToEnergizeResult);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        AuthorizationToEnergizeRequestTypeSupport, 
        AuthorizationToEnergizeRequest);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(AuthorizationToEnergizeRequestDataWriter, AuthorizationToEnergizeRequest);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(AuthorizationToEnergizeRequestDataReader, AuthorizationToEnergizeRequestSeq, AuthorizationToEnergizeRequest);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        AuthorizationToEnergizeReplyTypeSupport, 
        AuthorizationToEnergizeReply);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(AuthorizationToEnergizeReplyDataWriter, AuthorizationToEnergizeReply);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(AuthorizationToEnergizeReplyDataReader, AuthorizationToEnergizeReplySeq, AuthorizationToEnergizeReply);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        IdentityNicknameRequestTypeSupport, 
        IdentityNicknameRequest);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(IdentityNicknameRequestDataWriter, IdentityNicknameRequest);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(IdentityNicknameRequestDataReader, IdentityNicknameRequestSeq, IdentityNicknameRequest);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        DeviceIconTypeSupport, 
        DeviceIcon);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(DeviceIconDataWriter, DeviceIcon);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(DeviceIconDataReader, DeviceIconSeq, DeviceIcon);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        ControlParameterRequestTypeSupport, 
        ControlParameterRequest);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(ControlParameterRequestDataWriter, ControlParameterRequest);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(ControlParameterRequestDataReader, ControlParameterRequestSeq, ControlParameterRequest);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        ControlParameterStateTypeSupport, 
        ControlParameterState);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(ControlParameterStateDataWriter, ControlParameterState);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(ControlParameterStateDataReader, ControlParameterStateSeq, ControlParameterState);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        PowerPortStateTypeSupport, 
        PowerPortState);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(PowerPortStateDataWriter, PowerPortState);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(PowerPortStateDataReader, PowerPortStateSeq, PowerPortState);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        IdentityNicknameStateTypeSupport, 
        IdentityNicknameState);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(IdentityNicknameStateDataWriter, IdentityNicknameState);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(IdentityNicknameStateDataReader, IdentityNicknameStateSeq, IdentityNicknameState);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        GroundingCircuitRequestTypeSupport, 
        GroundingCircuitRequest);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(GroundingCircuitRequestDataWriter, GroundingCircuitRequest);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(GroundingCircuitRequestDataReader, GroundingCircuitRequestSeq, GroundingCircuitRequest);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        HeartbeatTypeSupport, 
        Heartbeat);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(HeartbeatDataWriter, Heartbeat);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(HeartbeatDataReader, HeartbeatSeq, Heartbeat);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        MetricParameterStateTypeSupport, 
        MetricParameterState);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(MetricParameterStateDataWriter, MetricParameterState);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(MetricParameterStateDataReader, MetricParameterStateSeq, MetricParameterState);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        OperatorIntentRequestTypeSupport, 
        OperatorIntentRequest);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(OperatorIntentRequestDataWriter, OperatorIntentRequest);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(OperatorIntentRequestDataReader, OperatorIntentRequestSeq, OperatorIntentRequest);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        OperatorIntentStateTypeSupport, 
        OperatorIntentState);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(OperatorIntentStateDataWriter, OperatorIntentState);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(OperatorIntentStateDataReader, OperatorIntentStateSeq, OperatorIntentState);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        PowerConnectionStateTypeSupport, 
        PowerConnectionState);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(PowerConnectionStateDataWriter, PowerConnectionState);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(PowerConnectionStateDataReader, PowerConnectionStateSeq, PowerConnectionState);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        PowerSwitchRequestTypeSupport, 
        PowerSwitchRequest);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(PowerSwitchRequestDataWriter, PowerSwitchRequest);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(PowerSwitchRequestDataReader, PowerSwitchRequestSeq, PowerSwitchRequest);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        ReplyTypeSupport, 
        Reply);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(ReplyDataWriter, Reply);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(ReplyDataReader, ReplySeq, Reply);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        EnergyStartStopRequestTypeSupport, 
        EnergyStartStopRequest);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(EnergyStartStopRequestDataWriter, EnergyStartStopRequest);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(EnergyStartStopRequestDataReader, EnergyStartStopRequestSeq, EnergyStartStopRequest);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        EnergyStartStopStateTypeSupport, 
        EnergyStartStopState);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(EnergyStartStopStateDataWriter, EnergyStartStopState);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(EnergyStartStopStateDataReader, EnergyStartStopStateSeq, EnergyStartStopState);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        ActiveMicrogridControllerStateTypeSupport, 
        ActiveMicrogridControllerState);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(ActiveMicrogridControllerStateDataWriter, ActiveMicrogridControllerState);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(ActiveMicrogridControllerStateDataReader, ActiveMicrogridControllerStateSeq, ActiveMicrogridControllerState);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    namespace ac {
        /* ========================================================================= */
        /**
        Uses:     T

        Defines:  TTypeSupport, TDataWriter, TDataReader

        Organized using the well-documented "Generics Pattern" for
        implementing generics in C and C++.
        */

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)

        #endif

        DDS_TYPESUPPORT_CPP(
            MeasurementUpdateTypeSupport, 
            MeasurementUpdate);

        #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(MeasurementUpdateDataWriter, MeasurementUpdate);
        #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
        DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(MeasurementUpdateDataReader, MeasurementUpdateSeq, MeasurementUpdate);
        #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        /* ========================================================================= */
        /**
        Uses:     T

        Defines:  TTypeSupport, TDataWriter, TDataReader

        Organized using the well-documented "Generics Pattern" for
        implementing generics in C and C++.
        */

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)

        #endif

        DDS_TYPESUPPORT_CPP(
            LoadSharingRequestTypeSupport, 
            LoadSharingRequest);

        #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(LoadSharingRequestDataWriter, LoadSharingRequest);
        #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
        DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(LoadSharingRequestDataReader, LoadSharingRequestSeq, LoadSharingRequest);
        #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        /* ========================================================================= */
        /**
        Uses:     T

        Defines:  TTypeSupport, TDataWriter, TDataReader

        Organized using the well-documented "Generics Pattern" for
        implementing generics in C and C++.
        */

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)

        #endif

        DDS_TYPESUPPORT_CPP(
            LoadSharingStateTypeSupport, 
            LoadSharingState);

        #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(LoadSharingStateDataWriter, LoadSharingState);
        #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
        DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(LoadSharingStateDataReader, LoadSharingStateSeq, LoadSharingState);
        #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace ac  */
    namespace dc {
        /* ========================================================================= */
        /**
        Uses:     T

        Defines:  TTypeSupport, TDataWriter, TDataReader

        Organized using the well-documented "Generics Pattern" for
        implementing generics in C and C++.
        */

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)

        #endif

        DDS_TYPESUPPORT_CPP(
            MeasurementUpdateTypeSupport, 
            MeasurementUpdate);

        #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(MeasurementUpdateDataWriter, MeasurementUpdate);
        #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
        DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(MeasurementUpdateDataReader, MeasurementUpdateSeq, MeasurementUpdate);
        #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        /* ========================================================================= */
        /**
        Uses:     T

        Defines:  TTypeSupport, TDataWriter, TDataReader

        Organized using the well-documented "Generics Pattern" for
        implementing generics in C and C++.
        */

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)

        #endif

        DDS_TYPESUPPORT_CPP(
            LoadSharingRequestTypeSupport, 
            LoadSharingRequest);

        #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(LoadSharingRequestDataWriter, LoadSharingRequest);
        #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
        DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(LoadSharingRequestDataReader, LoadSharingRequestSeq, LoadSharingRequest);
        #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        /* ========================================================================= */
        /**
        Uses:     T

        Defines:  TTypeSupport, TDataWriter, TDataReader

        Organized using the well-documented "Generics Pattern" for
        implementing generics in C and C++.
        */

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)

        #endif

        DDS_TYPESUPPORT_CPP(
            LoadSharingStateTypeSupport, 
            LoadSharingState);

        #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(LoadSharingStateDataWriter, LoadSharingState);
        #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
        DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(LoadSharingStateDataReader, LoadSharingStateSeq, LoadSharingState);
        #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace dc  */
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        StorageUpdateTypeSupport, 
        StorageUpdate);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(StorageUpdateDataWriter, StorageUpdate);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(StorageUpdateDataReader, StorageUpdateSeq, StorageUpdate);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    /* ========================================================================= */
    /**
    Uses:     T

    Defines:  TTypeSupport, TDataWriter, TDataReader

    Organized using the well-documented "Generics Pattern" for
    implementing generics in C and C++.
    */

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)

    #endif

    DDS_TYPESUPPORT_CPP(
        DeviceInfoTypeSupport, 
        DeviceInfo);

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_CPP(DeviceInfoDataWriter, DeviceInfo);
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    DDS_DATAREADER_W_DATA_CONSISTENCY_CHECK(DeviceInfoDataReader, DeviceInfoSeq, DeviceInfo);
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
} /* namespace tms  */

#endif  /* tmsExampleAppSupport_1875817790_h */

