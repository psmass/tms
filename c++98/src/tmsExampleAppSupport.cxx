
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from tmsExampleApp.idl
using RTI Code Generator (rtiddsgen) version 4.0.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include "tmsExampleAppSupport.h"
#include "tmsExampleAppPlugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
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
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'ControlHardwareUpdate' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   ControlHardwareUpdateTYPENAME

    /* Defines */
    #define TDataWriter ControlHardwareUpdateDataWriter
    #define TData       tms::ControlHardwareUpdate

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   ControlHardwareUpdateTYPENAME

    /* Defines */
    #define TDataReader ControlHardwareUpdateDataReader
    #define TDataSeq    ControlHardwareUpdateSeq
    #define TData       tms::ControlHardwareUpdate

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    ControlHardwareUpdateTYPENAME
    #define TPlugin_new  tms::ControlHardwareUpdatePlugin_new
    #define TPlugin_delete  tms::ControlHardwareUpdatePlugin_delete

    /* Defines */
    #define TTypeSupport ControlHardwareUpdateTypeSupport
    #define TData        tms::ControlHardwareUpdate
    #define TDataReader  ControlHardwareUpdateDataReader
    #define TDataWriter  ControlHardwareUpdateDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'PowerHardwareUpdate' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   PowerHardwareUpdateTYPENAME

    /* Defines */
    #define TDataWriter PowerHardwareUpdateDataWriter
    #define TData       tms::PowerHardwareUpdate

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   PowerHardwareUpdateTYPENAME

    /* Defines */
    #define TDataReader PowerHardwareUpdateDataReader
    #define TDataSeq    PowerHardwareUpdateSeq
    #define TData       tms::PowerHardwareUpdate

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    PowerHardwareUpdateTYPENAME
    #define TPlugin_new  tms::PowerHardwareUpdatePlugin_new
    #define TPlugin_delete  tms::PowerHardwareUpdatePlugin_delete

    /* Defines */
    #define TTypeSupport PowerHardwareUpdateTypeSupport
    #define TData        tms::PowerHardwareUpdate
    #define TDataReader  PowerHardwareUpdateDataReader
    #define TDataWriter  PowerHardwareUpdateDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'ClockState' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   ClockStateTYPENAME

    /* Defines */
    #define TDataWriter ClockStateDataWriter
    #define TData       tms::ClockState

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   ClockStateTYPENAME

    /* Defines */
    #define TDataReader ClockStateDataReader
    #define TDataSeq    ClockStateSeq
    #define TData       tms::ClockState

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    ClockStateTYPENAME
    #define TPlugin_new  tms::ClockStatePlugin_new
    #define TPlugin_delete  tms::ClockStatePlugin_delete

    /* Defines */
    #define TTypeSupport ClockStateTypeSupport
    #define TData        tms::ClockState
    #define TDataReader  ClockStateDataReader
    #define TDataWriter  ClockStateDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'GroundingCircuitState' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   GroundingCircuitStateTYPENAME

    /* Defines */
    #define TDataWriter GroundingCircuitStateDataWriter
    #define TData       tms::GroundingCircuitState

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   GroundingCircuitStateTYPENAME

    /* Defines */
    #define TDataReader GroundingCircuitStateDataReader
    #define TDataSeq    GroundingCircuitStateSeq
    #define TData       tms::GroundingCircuitState

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    GroundingCircuitStateTYPENAME
    #define TPlugin_new  tms::GroundingCircuitStatePlugin_new
    #define TPlugin_delete  tms::GroundingCircuitStatePlugin_delete

    /* Defines */
    #define TTypeSupport GroundingCircuitStateTypeSupport
    #define TData        tms::GroundingCircuitState
    #define TDataReader  GroundingCircuitStateDataReader
    #define TDataWriter  GroundingCircuitStateDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'ActiveDiagnosticState' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   ActiveDiagnosticStateTYPENAME

    /* Defines */
    #define TDataWriter ActiveDiagnosticStateDataWriter
    #define TData       tms::ActiveDiagnosticState

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   ActiveDiagnosticStateTYPENAME

    /* Defines */
    #define TDataReader ActiveDiagnosticStateDataReader
    #define TDataSeq    ActiveDiagnosticStateSeq
    #define TData       tms::ActiveDiagnosticState

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    ActiveDiagnosticStateTYPENAME
    #define TPlugin_new  tms::ActiveDiagnosticStatePlugin_new
    #define TPlugin_delete  tms::ActiveDiagnosticStatePlugin_delete

    /* Defines */
    #define TTypeSupport ActiveDiagnosticStateTypeSupport
    #define TData        tms::ActiveDiagnosticState
    #define TDataReader  ActiveDiagnosticStateDataReader
    #define TDataWriter  ActiveDiagnosticStateDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'AuthorizationToEnergizeResult' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   AuthorizationToEnergizeResultTYPENAME

    /* Defines */
    #define TDataWriter AuthorizationToEnergizeResultDataWriter
    #define TData       tms::AuthorizationToEnergizeResult

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   AuthorizationToEnergizeResultTYPENAME

    /* Defines */
    #define TDataReader AuthorizationToEnergizeResultDataReader
    #define TDataSeq    AuthorizationToEnergizeResultSeq
    #define TData       tms::AuthorizationToEnergizeResult

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    AuthorizationToEnergizeResultTYPENAME
    #define TPlugin_new  tms::AuthorizationToEnergizeResultPlugin_new
    #define TPlugin_delete  tms::AuthorizationToEnergizeResultPlugin_delete

    /* Defines */
    #define TTypeSupport AuthorizationToEnergizeResultTypeSupport
    #define TData        tms::AuthorizationToEnergizeResult
    #define TDataReader  AuthorizationToEnergizeResultDataReader
    #define TDataWriter  AuthorizationToEnergizeResultDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'AuthorizationToEnergizeRequest' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   AuthorizationToEnergizeRequestTYPENAME

    /* Defines */
    #define TDataWriter AuthorizationToEnergizeRequestDataWriter
    #define TData       tms::AuthorizationToEnergizeRequest

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   AuthorizationToEnergizeRequestTYPENAME

    /* Defines */
    #define TDataReader AuthorizationToEnergizeRequestDataReader
    #define TDataSeq    AuthorizationToEnergizeRequestSeq
    #define TData       tms::AuthorizationToEnergizeRequest

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    AuthorizationToEnergizeRequestTYPENAME
    #define TPlugin_new  tms::AuthorizationToEnergizeRequestPlugin_new
    #define TPlugin_delete  tms::AuthorizationToEnergizeRequestPlugin_delete

    /* Defines */
    #define TTypeSupport AuthorizationToEnergizeRequestTypeSupport
    #define TData        tms::AuthorizationToEnergizeRequest
    #define TDataReader  AuthorizationToEnergizeRequestDataReader
    #define TDataWriter  AuthorizationToEnergizeRequestDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'AuthorizationToEnergizeReply' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   AuthorizationToEnergizeReplyTYPENAME

    /* Defines */
    #define TDataWriter AuthorizationToEnergizeReplyDataWriter
    #define TData       tms::AuthorizationToEnergizeReply

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   AuthorizationToEnergizeReplyTYPENAME

    /* Defines */
    #define TDataReader AuthorizationToEnergizeReplyDataReader
    #define TDataSeq    AuthorizationToEnergizeReplySeq
    #define TData       tms::AuthorizationToEnergizeReply

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    AuthorizationToEnergizeReplyTYPENAME
    #define TPlugin_new  tms::AuthorizationToEnergizeReplyPlugin_new
    #define TPlugin_delete  tms::AuthorizationToEnergizeReplyPlugin_delete

    /* Defines */
    #define TTypeSupport AuthorizationToEnergizeReplyTypeSupport
    #define TData        tms::AuthorizationToEnergizeReply
    #define TDataReader  AuthorizationToEnergizeReplyDataReader
    #define TDataWriter  AuthorizationToEnergizeReplyDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'IdentityNicknameRequest' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   IdentityNicknameRequestTYPENAME

    /* Defines */
    #define TDataWriter IdentityNicknameRequestDataWriter
    #define TData       tms::IdentityNicknameRequest

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   IdentityNicknameRequestTYPENAME

    /* Defines */
    #define TDataReader IdentityNicknameRequestDataReader
    #define TDataSeq    IdentityNicknameRequestSeq
    #define TData       tms::IdentityNicknameRequest

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    IdentityNicknameRequestTYPENAME
    #define TPlugin_new  tms::IdentityNicknameRequestPlugin_new
    #define TPlugin_delete  tms::IdentityNicknameRequestPlugin_delete

    /* Defines */
    #define TTypeSupport IdentityNicknameRequestTypeSupport
    #define TData        tms::IdentityNicknameRequest
    #define TDataReader  IdentityNicknameRequestDataReader
    #define TDataWriter  IdentityNicknameRequestDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'DeviceIcon' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   DeviceIconTYPENAME

    /* Defines */
    #define TDataWriter DeviceIconDataWriter
    #define TData       tms::DeviceIcon

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   DeviceIconTYPENAME

    /* Defines */
    #define TDataReader DeviceIconDataReader
    #define TDataSeq    DeviceIconSeq
    #define TData       tms::DeviceIcon

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    DeviceIconTYPENAME
    #define TPlugin_new  tms::DeviceIconPlugin_new
    #define TPlugin_delete  tms::DeviceIconPlugin_delete

    /* Defines */
    #define TTypeSupport DeviceIconTypeSupport
    #define TData        tms::DeviceIcon
    #define TDataReader  DeviceIconDataReader
    #define TDataWriter  DeviceIconDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'ControlParameterRequest' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   ControlParameterRequestTYPENAME

    /* Defines */
    #define TDataWriter ControlParameterRequestDataWriter
    #define TData       tms::ControlParameterRequest

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   ControlParameterRequestTYPENAME

    /* Defines */
    #define TDataReader ControlParameterRequestDataReader
    #define TDataSeq    ControlParameterRequestSeq
    #define TData       tms::ControlParameterRequest

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    ControlParameterRequestTYPENAME
    #define TPlugin_new  tms::ControlParameterRequestPlugin_new
    #define TPlugin_delete  tms::ControlParameterRequestPlugin_delete

    /* Defines */
    #define TTypeSupport ControlParameterRequestTypeSupport
    #define TData        tms::ControlParameterRequest
    #define TDataReader  ControlParameterRequestDataReader
    #define TDataWriter  ControlParameterRequestDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'ControlParameterState' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   ControlParameterStateTYPENAME

    /* Defines */
    #define TDataWriter ControlParameterStateDataWriter
    #define TData       tms::ControlParameterState

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   ControlParameterStateTYPENAME

    /* Defines */
    #define TDataReader ControlParameterStateDataReader
    #define TDataSeq    ControlParameterStateSeq
    #define TData       tms::ControlParameterState

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    ControlParameterStateTYPENAME
    #define TPlugin_new  tms::ControlParameterStatePlugin_new
    #define TPlugin_delete  tms::ControlParameterStatePlugin_delete

    /* Defines */
    #define TTypeSupport ControlParameterStateTypeSupport
    #define TData        tms::ControlParameterState
    #define TDataReader  ControlParameterStateDataReader
    #define TDataWriter  ControlParameterStateDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'PowerPortState' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   PowerPortStateTYPENAME

    /* Defines */
    #define TDataWriter PowerPortStateDataWriter
    #define TData       tms::PowerPortState

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   PowerPortStateTYPENAME

    /* Defines */
    #define TDataReader PowerPortStateDataReader
    #define TDataSeq    PowerPortStateSeq
    #define TData       tms::PowerPortState

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    PowerPortStateTYPENAME
    #define TPlugin_new  tms::PowerPortStatePlugin_new
    #define TPlugin_delete  tms::PowerPortStatePlugin_delete

    /* Defines */
    #define TTypeSupport PowerPortStateTypeSupport
    #define TData        tms::PowerPortState
    #define TDataReader  PowerPortStateDataReader
    #define TDataWriter  PowerPortStateDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'IdentityNicknameState' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   IdentityNicknameStateTYPENAME

    /* Defines */
    #define TDataWriter IdentityNicknameStateDataWriter
    #define TData       tms::IdentityNicknameState

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   IdentityNicknameStateTYPENAME

    /* Defines */
    #define TDataReader IdentityNicknameStateDataReader
    #define TDataSeq    IdentityNicknameStateSeq
    #define TData       tms::IdentityNicknameState

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    IdentityNicknameStateTYPENAME
    #define TPlugin_new  tms::IdentityNicknameStatePlugin_new
    #define TPlugin_delete  tms::IdentityNicknameStatePlugin_delete

    /* Defines */
    #define TTypeSupport IdentityNicknameStateTypeSupport
    #define TData        tms::IdentityNicknameState
    #define TDataReader  IdentityNicknameStateDataReader
    #define TDataWriter  IdentityNicknameStateDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'GroundingCircuitRequest' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   GroundingCircuitRequestTYPENAME

    /* Defines */
    #define TDataWriter GroundingCircuitRequestDataWriter
    #define TData       tms::GroundingCircuitRequest

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   GroundingCircuitRequestTYPENAME

    /* Defines */
    #define TDataReader GroundingCircuitRequestDataReader
    #define TDataSeq    GroundingCircuitRequestSeq
    #define TData       tms::GroundingCircuitRequest

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    GroundingCircuitRequestTYPENAME
    #define TPlugin_new  tms::GroundingCircuitRequestPlugin_new
    #define TPlugin_delete  tms::GroundingCircuitRequestPlugin_delete

    /* Defines */
    #define TTypeSupport GroundingCircuitRequestTypeSupport
    #define TData        tms::GroundingCircuitRequest
    #define TDataReader  GroundingCircuitRequestDataReader
    #define TDataWriter  GroundingCircuitRequestDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'Heartbeat' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   HeartbeatTYPENAME

    /* Defines */
    #define TDataWriter HeartbeatDataWriter
    #define TData       tms::Heartbeat

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   HeartbeatTYPENAME

    /* Defines */
    #define TDataReader HeartbeatDataReader
    #define TDataSeq    HeartbeatSeq
    #define TData       tms::Heartbeat

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    HeartbeatTYPENAME
    #define TPlugin_new  tms::HeartbeatPlugin_new
    #define TPlugin_delete  tms::HeartbeatPlugin_delete

    /* Defines */
    #define TTypeSupport HeartbeatTypeSupport
    #define TData        tms::Heartbeat
    #define TDataReader  HeartbeatDataReader
    #define TDataWriter  HeartbeatDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'MetricParameterState' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   MetricParameterStateTYPENAME

    /* Defines */
    #define TDataWriter MetricParameterStateDataWriter
    #define TData       tms::MetricParameterState

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   MetricParameterStateTYPENAME

    /* Defines */
    #define TDataReader MetricParameterStateDataReader
    #define TDataSeq    MetricParameterStateSeq
    #define TData       tms::MetricParameterState

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    MetricParameterStateTYPENAME
    #define TPlugin_new  tms::MetricParameterStatePlugin_new
    #define TPlugin_delete  tms::MetricParameterStatePlugin_delete

    /* Defines */
    #define TTypeSupport MetricParameterStateTypeSupport
    #define TData        tms::MetricParameterState
    #define TDataReader  MetricParameterStateDataReader
    #define TDataWriter  MetricParameterStateDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'OperatorIntentRequest' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   OperatorIntentRequestTYPENAME

    /* Defines */
    #define TDataWriter OperatorIntentRequestDataWriter
    #define TData       tms::OperatorIntentRequest

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   OperatorIntentRequestTYPENAME

    /* Defines */
    #define TDataReader OperatorIntentRequestDataReader
    #define TDataSeq    OperatorIntentRequestSeq
    #define TData       tms::OperatorIntentRequest

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    OperatorIntentRequestTYPENAME
    #define TPlugin_new  tms::OperatorIntentRequestPlugin_new
    #define TPlugin_delete  tms::OperatorIntentRequestPlugin_delete

    /* Defines */
    #define TTypeSupport OperatorIntentRequestTypeSupport
    #define TData        tms::OperatorIntentRequest
    #define TDataReader  OperatorIntentRequestDataReader
    #define TDataWriter  OperatorIntentRequestDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'OperatorIntentState' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   OperatorIntentStateTYPENAME

    /* Defines */
    #define TDataWriter OperatorIntentStateDataWriter
    #define TData       tms::OperatorIntentState

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   OperatorIntentStateTYPENAME

    /* Defines */
    #define TDataReader OperatorIntentStateDataReader
    #define TDataSeq    OperatorIntentStateSeq
    #define TData       tms::OperatorIntentState

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    OperatorIntentStateTYPENAME
    #define TPlugin_new  tms::OperatorIntentStatePlugin_new
    #define TPlugin_delete  tms::OperatorIntentStatePlugin_delete

    /* Defines */
    #define TTypeSupport OperatorIntentStateTypeSupport
    #define TData        tms::OperatorIntentState
    #define TDataReader  OperatorIntentStateDataReader
    #define TDataWriter  OperatorIntentStateDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'PowerConnectionState' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   PowerConnectionStateTYPENAME

    /* Defines */
    #define TDataWriter PowerConnectionStateDataWriter
    #define TData       tms::PowerConnectionState

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   PowerConnectionStateTYPENAME

    /* Defines */
    #define TDataReader PowerConnectionStateDataReader
    #define TDataSeq    PowerConnectionStateSeq
    #define TData       tms::PowerConnectionState

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    PowerConnectionStateTYPENAME
    #define TPlugin_new  tms::PowerConnectionStatePlugin_new
    #define TPlugin_delete  tms::PowerConnectionStatePlugin_delete

    /* Defines */
    #define TTypeSupport PowerConnectionStateTypeSupport
    #define TData        tms::PowerConnectionState
    #define TDataReader  PowerConnectionStateDataReader
    #define TDataWriter  PowerConnectionStateDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'PowerSwitchRequest' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   PowerSwitchRequestTYPENAME

    /* Defines */
    #define TDataWriter PowerSwitchRequestDataWriter
    #define TData       tms::PowerSwitchRequest

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   PowerSwitchRequestTYPENAME

    /* Defines */
    #define TDataReader PowerSwitchRequestDataReader
    #define TDataSeq    PowerSwitchRequestSeq
    #define TData       tms::PowerSwitchRequest

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    PowerSwitchRequestTYPENAME
    #define TPlugin_new  tms::PowerSwitchRequestPlugin_new
    #define TPlugin_delete  tms::PowerSwitchRequestPlugin_delete

    /* Defines */
    #define TTypeSupport PowerSwitchRequestTypeSupport
    #define TData        tms::PowerSwitchRequest
    #define TDataReader  PowerSwitchRequestDataReader
    #define TDataWriter  PowerSwitchRequestDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'Reply' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   ReplyTYPENAME

    /* Defines */
    #define TDataWriter ReplyDataWriter
    #define TData       tms::Reply

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   ReplyTYPENAME

    /* Defines */
    #define TDataReader ReplyDataReader
    #define TDataSeq    ReplySeq
    #define TData       tms::Reply

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    ReplyTYPENAME
    #define TPlugin_new  tms::ReplyPlugin_new
    #define TPlugin_delete  tms::ReplyPlugin_delete

    /* Defines */
    #define TTypeSupport ReplyTypeSupport
    #define TData        tms::Reply
    #define TDataReader  ReplyDataReader
    #define TDataWriter  ReplyDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'EnergyStartStopRequest' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   EnergyStartStopRequestTYPENAME

    /* Defines */
    #define TDataWriter EnergyStartStopRequestDataWriter
    #define TData       tms::EnergyStartStopRequest

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   EnergyStartStopRequestTYPENAME

    /* Defines */
    #define TDataReader EnergyStartStopRequestDataReader
    #define TDataSeq    EnergyStartStopRequestSeq
    #define TData       tms::EnergyStartStopRequest

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    EnergyStartStopRequestTYPENAME
    #define TPlugin_new  tms::EnergyStartStopRequestPlugin_new
    #define TPlugin_delete  tms::EnergyStartStopRequestPlugin_delete

    /* Defines */
    #define TTypeSupport EnergyStartStopRequestTypeSupport
    #define TData        tms::EnergyStartStopRequest
    #define TDataReader  EnergyStartStopRequestDataReader
    #define TDataWriter  EnergyStartStopRequestDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'EnergyStartStopState' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   EnergyStartStopStateTYPENAME

    /* Defines */
    #define TDataWriter EnergyStartStopStateDataWriter
    #define TData       tms::EnergyStartStopState

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   EnergyStartStopStateTYPENAME

    /* Defines */
    #define TDataReader EnergyStartStopStateDataReader
    #define TDataSeq    EnergyStartStopStateSeq
    #define TData       tms::EnergyStartStopState

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    EnergyStartStopStateTYPENAME
    #define TPlugin_new  tms::EnergyStartStopStatePlugin_new
    #define TPlugin_delete  tms::EnergyStartStopStatePlugin_delete

    /* Defines */
    #define TTypeSupport EnergyStartStopStateTypeSupport
    #define TData        tms::EnergyStartStopState
    #define TDataReader  EnergyStartStopStateDataReader
    #define TDataWriter  EnergyStartStopStateDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'ActiveMicrogridControllerState' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   ActiveMicrogridControllerStateTYPENAME

    /* Defines */
    #define TDataWriter ActiveMicrogridControllerStateDataWriter
    #define TData       tms::ActiveMicrogridControllerState

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   ActiveMicrogridControllerStateTYPENAME

    /* Defines */
    #define TDataReader ActiveMicrogridControllerStateDataReader
    #define TDataSeq    ActiveMicrogridControllerStateSeq
    #define TData       tms::ActiveMicrogridControllerState

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    ActiveMicrogridControllerStateTYPENAME
    #define TPlugin_new  tms::ActiveMicrogridControllerStatePlugin_new
    #define TPlugin_delete  tms::ActiveMicrogridControllerStatePlugin_delete

    /* Defines */
    #define TTypeSupport ActiveMicrogridControllerStateTypeSupport
    #define TData        tms::ActiveMicrogridControllerState
    #define TDataReader  ActiveMicrogridControllerStateDataReader
    #define TDataWriter  ActiveMicrogridControllerStateDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    namespace ac {

        /* ========================================================================= */
        /**
        <<IMPLEMENTATION>>

        Defines:   TData,
        TDataWriter,
        TDataReader,
        TTypeSupport

        Configure and implement 'MeasurementUpdate' support classes.

        Note: Only the #defined classes get defined
        */

        /* ----------------------------------------------------------------- */
        /* DDSDataWriter
        */

        /**
        <<IMPLEMENTATION >>

        Defines:   TDataWriter, TData
        */

        /* Requires */
        #define TTYPENAME   MeasurementUpdateTYPENAME

        /* Defines */
        #define TDataWriter MeasurementUpdateDataWriter
        #define TData       tms::ac::MeasurementUpdate

        #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
        #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

        #undef TDataWriter
        #undef TData

        #undef TTYPENAME

        /* ----------------------------------------------------------------- */
        /* DDSDataReader
        */

        /**
        <<IMPLEMENTATION >>

        Defines:   TDataReader, TDataSeq, TData
        */

        /* Requires */
        #define TTYPENAME   MeasurementUpdateTYPENAME

        /* Defines */
        #define TDataReader MeasurementUpdateDataReader
        #define TDataSeq    MeasurementUpdateSeq
        #define TData       tms::ac::MeasurementUpdate

        #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
        #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
        #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

        #undef TDataReader
        #undef TDataSeq
        #undef TData

        #undef TTYPENAME

        /* ----------------------------------------------------------------- */
        /* TypeSupport

        <<IMPLEMENTATION >>

        Requires:  TTYPENAME,
        TPlugin_new
        TPlugin_delete
        Defines:   TTypeSupport, TData, TDataReader, TDataWriter
        */

        /* Requires */
        #define TTYPENAME    MeasurementUpdateTYPENAME
        #define TPlugin_new  tms::ac::MeasurementUpdatePlugin_new
        #define TPlugin_delete  tms::ac::MeasurementUpdatePlugin_delete

        /* Defines */
        #define TTypeSupport MeasurementUpdateTypeSupport
        #define TData        tms::ac::MeasurementUpdate
        #define TDataReader  MeasurementUpdateDataReader
        #define TDataWriter  MeasurementUpdateDataWriter
        #define TGENERATE_SER_CODE
        #ifndef NDDS_STANDALONE_TYPE
        #define TGENERATE_TYPECODE
        #endif

        #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

        #undef TTypeSupport
        #undef TData
        #undef TDataReader
        #undef TDataWriter
        #ifndef NDDS_STANDALONE_TYPE
        #undef TGENERATE_TYPECODE
        #endif
        #undef TGENERATE_SER_CODE
        #undef TTYPENAME
        #undef TPlugin_new
        #undef TPlugin_delete

        /* ========================================================================= */
        /**
        <<IMPLEMENTATION>>

        Defines:   TData,
        TDataWriter,
        TDataReader,
        TTypeSupport

        Configure and implement 'LoadSharingRequest' support classes.

        Note: Only the #defined classes get defined
        */

        /* ----------------------------------------------------------------- */
        /* DDSDataWriter
        */

        /**
        <<IMPLEMENTATION >>

        Defines:   TDataWriter, TData
        */

        /* Requires */
        #define TTYPENAME   LoadSharingRequestTYPENAME

        /* Defines */
        #define TDataWriter LoadSharingRequestDataWriter
        #define TData       tms::ac::LoadSharingRequest

        #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
        #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

        #undef TDataWriter
        #undef TData

        #undef TTYPENAME

        /* ----------------------------------------------------------------- */
        /* DDSDataReader
        */

        /**
        <<IMPLEMENTATION >>

        Defines:   TDataReader, TDataSeq, TData
        */

        /* Requires */
        #define TTYPENAME   LoadSharingRequestTYPENAME

        /* Defines */
        #define TDataReader LoadSharingRequestDataReader
        #define TDataSeq    LoadSharingRequestSeq
        #define TData       tms::ac::LoadSharingRequest

        #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
        #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
        #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

        #undef TDataReader
        #undef TDataSeq
        #undef TData

        #undef TTYPENAME

        /* ----------------------------------------------------------------- */
        /* TypeSupport

        <<IMPLEMENTATION >>

        Requires:  TTYPENAME,
        TPlugin_new
        TPlugin_delete
        Defines:   TTypeSupport, TData, TDataReader, TDataWriter
        */

        /* Requires */
        #define TTYPENAME    LoadSharingRequestTYPENAME
        #define TPlugin_new  tms::ac::LoadSharingRequestPlugin_new
        #define TPlugin_delete  tms::ac::LoadSharingRequestPlugin_delete

        /* Defines */
        #define TTypeSupport LoadSharingRequestTypeSupport
        #define TData        tms::ac::LoadSharingRequest
        #define TDataReader  LoadSharingRequestDataReader
        #define TDataWriter  LoadSharingRequestDataWriter
        #define TGENERATE_SER_CODE
        #ifndef NDDS_STANDALONE_TYPE
        #define TGENERATE_TYPECODE
        #endif

        #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

        #undef TTypeSupport
        #undef TData
        #undef TDataReader
        #undef TDataWriter
        #ifndef NDDS_STANDALONE_TYPE
        #undef TGENERATE_TYPECODE
        #endif
        #undef TGENERATE_SER_CODE
        #undef TTYPENAME
        #undef TPlugin_new
        #undef TPlugin_delete

        /* ========================================================================= */
        /**
        <<IMPLEMENTATION>>

        Defines:   TData,
        TDataWriter,
        TDataReader,
        TTypeSupport

        Configure and implement 'LoadSharingState' support classes.

        Note: Only the #defined classes get defined
        */

        /* ----------------------------------------------------------------- */
        /* DDSDataWriter
        */

        /**
        <<IMPLEMENTATION >>

        Defines:   TDataWriter, TData
        */

        /* Requires */
        #define TTYPENAME   LoadSharingStateTYPENAME

        /* Defines */
        #define TDataWriter LoadSharingStateDataWriter
        #define TData       tms::ac::LoadSharingState

        #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
        #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

        #undef TDataWriter
        #undef TData

        #undef TTYPENAME

        /* ----------------------------------------------------------------- */
        /* DDSDataReader
        */

        /**
        <<IMPLEMENTATION >>

        Defines:   TDataReader, TDataSeq, TData
        */

        /* Requires */
        #define TTYPENAME   LoadSharingStateTYPENAME

        /* Defines */
        #define TDataReader LoadSharingStateDataReader
        #define TDataSeq    LoadSharingStateSeq
        #define TData       tms::ac::LoadSharingState

        #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
        #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
        #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

        #undef TDataReader
        #undef TDataSeq
        #undef TData

        #undef TTYPENAME

        /* ----------------------------------------------------------------- */
        /* TypeSupport

        <<IMPLEMENTATION >>

        Requires:  TTYPENAME,
        TPlugin_new
        TPlugin_delete
        Defines:   TTypeSupport, TData, TDataReader, TDataWriter
        */

        /* Requires */
        #define TTYPENAME    LoadSharingStateTYPENAME
        #define TPlugin_new  tms::ac::LoadSharingStatePlugin_new
        #define TPlugin_delete  tms::ac::LoadSharingStatePlugin_delete

        /* Defines */
        #define TTypeSupport LoadSharingStateTypeSupport
        #define TData        tms::ac::LoadSharingState
        #define TDataReader  LoadSharingStateDataReader
        #define TDataWriter  LoadSharingStateDataWriter
        #define TGENERATE_SER_CODE
        #ifndef NDDS_STANDALONE_TYPE
        #define TGENERATE_TYPECODE
        #endif

        #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

        #undef TTypeSupport
        #undef TData
        #undef TDataReader
        #undef TDataWriter
        #ifndef NDDS_STANDALONE_TYPE
        #undef TGENERATE_TYPECODE
        #endif
        #undef TGENERATE_SER_CODE
        #undef TTYPENAME
        #undef TPlugin_new
        #undef TPlugin_delete

    } /* namespace ac  */
    namespace dc {

        /* ========================================================================= */
        /**
        <<IMPLEMENTATION>>

        Defines:   TData,
        TDataWriter,
        TDataReader,
        TTypeSupport

        Configure and implement 'MeasurementUpdate' support classes.

        Note: Only the #defined classes get defined
        */

        /* ----------------------------------------------------------------- */
        /* DDSDataWriter
        */

        /**
        <<IMPLEMENTATION >>

        Defines:   TDataWriter, TData
        */

        /* Requires */
        #define TTYPENAME   MeasurementUpdateTYPENAME

        /* Defines */
        #define TDataWriter MeasurementUpdateDataWriter
        #define TData       tms::dc::MeasurementUpdate

        #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
        #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

        #undef TDataWriter
        #undef TData

        #undef TTYPENAME

        /* ----------------------------------------------------------------- */
        /* DDSDataReader
        */

        /**
        <<IMPLEMENTATION >>

        Defines:   TDataReader, TDataSeq, TData
        */

        /* Requires */
        #define TTYPENAME   MeasurementUpdateTYPENAME

        /* Defines */
        #define TDataReader MeasurementUpdateDataReader
        #define TDataSeq    MeasurementUpdateSeq
        #define TData       tms::dc::MeasurementUpdate

        #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
        #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
        #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

        #undef TDataReader
        #undef TDataSeq
        #undef TData

        #undef TTYPENAME

        /* ----------------------------------------------------------------- */
        /* TypeSupport

        <<IMPLEMENTATION >>

        Requires:  TTYPENAME,
        TPlugin_new
        TPlugin_delete
        Defines:   TTypeSupport, TData, TDataReader, TDataWriter
        */

        /* Requires */
        #define TTYPENAME    MeasurementUpdateTYPENAME
        #define TPlugin_new  tms::dc::MeasurementUpdatePlugin_new
        #define TPlugin_delete  tms::dc::MeasurementUpdatePlugin_delete

        /* Defines */
        #define TTypeSupport MeasurementUpdateTypeSupport
        #define TData        tms::dc::MeasurementUpdate
        #define TDataReader  MeasurementUpdateDataReader
        #define TDataWriter  MeasurementUpdateDataWriter
        #define TGENERATE_SER_CODE
        #ifndef NDDS_STANDALONE_TYPE
        #define TGENERATE_TYPECODE
        #endif

        #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

        #undef TTypeSupport
        #undef TData
        #undef TDataReader
        #undef TDataWriter
        #ifndef NDDS_STANDALONE_TYPE
        #undef TGENERATE_TYPECODE
        #endif
        #undef TGENERATE_SER_CODE
        #undef TTYPENAME
        #undef TPlugin_new
        #undef TPlugin_delete

        /* ========================================================================= */
        /**
        <<IMPLEMENTATION>>

        Defines:   TData,
        TDataWriter,
        TDataReader,
        TTypeSupport

        Configure and implement 'LoadSharingRequest' support classes.

        Note: Only the #defined classes get defined
        */

        /* ----------------------------------------------------------------- */
        /* DDSDataWriter
        */

        /**
        <<IMPLEMENTATION >>

        Defines:   TDataWriter, TData
        */

        /* Requires */
        #define TTYPENAME   LoadSharingRequestTYPENAME

        /* Defines */
        #define TDataWriter LoadSharingRequestDataWriter
        #define TData       tms::dc::LoadSharingRequest

        #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
        #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

        #undef TDataWriter
        #undef TData

        #undef TTYPENAME

        /* ----------------------------------------------------------------- */
        /* DDSDataReader
        */

        /**
        <<IMPLEMENTATION >>

        Defines:   TDataReader, TDataSeq, TData
        */

        /* Requires */
        #define TTYPENAME   LoadSharingRequestTYPENAME

        /* Defines */
        #define TDataReader LoadSharingRequestDataReader
        #define TDataSeq    LoadSharingRequestSeq
        #define TData       tms::dc::LoadSharingRequest

        #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
        #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
        #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

        #undef TDataReader
        #undef TDataSeq
        #undef TData

        #undef TTYPENAME

        /* ----------------------------------------------------------------- */
        /* TypeSupport

        <<IMPLEMENTATION >>

        Requires:  TTYPENAME,
        TPlugin_new
        TPlugin_delete
        Defines:   TTypeSupport, TData, TDataReader, TDataWriter
        */

        /* Requires */
        #define TTYPENAME    LoadSharingRequestTYPENAME
        #define TPlugin_new  tms::dc::LoadSharingRequestPlugin_new
        #define TPlugin_delete  tms::dc::LoadSharingRequestPlugin_delete

        /* Defines */
        #define TTypeSupport LoadSharingRequestTypeSupport
        #define TData        tms::dc::LoadSharingRequest
        #define TDataReader  LoadSharingRequestDataReader
        #define TDataWriter  LoadSharingRequestDataWriter
        #define TGENERATE_SER_CODE
        #ifndef NDDS_STANDALONE_TYPE
        #define TGENERATE_TYPECODE
        #endif

        #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

        #undef TTypeSupport
        #undef TData
        #undef TDataReader
        #undef TDataWriter
        #ifndef NDDS_STANDALONE_TYPE
        #undef TGENERATE_TYPECODE
        #endif
        #undef TGENERATE_SER_CODE
        #undef TTYPENAME
        #undef TPlugin_new
        #undef TPlugin_delete

        /* ========================================================================= */
        /**
        <<IMPLEMENTATION>>

        Defines:   TData,
        TDataWriter,
        TDataReader,
        TTypeSupport

        Configure and implement 'LoadSharingState' support classes.

        Note: Only the #defined classes get defined
        */

        /* ----------------------------------------------------------------- */
        /* DDSDataWriter
        */

        /**
        <<IMPLEMENTATION >>

        Defines:   TDataWriter, TData
        */

        /* Requires */
        #define TTYPENAME   LoadSharingStateTYPENAME

        /* Defines */
        #define TDataWriter LoadSharingStateDataWriter
        #define TData       tms::dc::LoadSharingState

        #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
        #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
        #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

        #undef TDataWriter
        #undef TData

        #undef TTYPENAME

        /* ----------------------------------------------------------------- */
        /* DDSDataReader
        */

        /**
        <<IMPLEMENTATION >>

        Defines:   TDataReader, TDataSeq, TData
        */

        /* Requires */
        #define TTYPENAME   LoadSharingStateTYPENAME

        /* Defines */
        #define TDataReader LoadSharingStateDataReader
        #define TDataSeq    LoadSharingStateSeq
        #define TData       tms::dc::LoadSharingState

        #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
        #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
        #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

        #undef TDataReader
        #undef TDataSeq
        #undef TData

        #undef TTYPENAME

        /* ----------------------------------------------------------------- */
        /* TypeSupport

        <<IMPLEMENTATION >>

        Requires:  TTYPENAME,
        TPlugin_new
        TPlugin_delete
        Defines:   TTypeSupport, TData, TDataReader, TDataWriter
        */

        /* Requires */
        #define TTYPENAME    LoadSharingStateTYPENAME
        #define TPlugin_new  tms::dc::LoadSharingStatePlugin_new
        #define TPlugin_delete  tms::dc::LoadSharingStatePlugin_delete

        /* Defines */
        #define TTypeSupport LoadSharingStateTypeSupport
        #define TData        tms::dc::LoadSharingState
        #define TDataReader  LoadSharingStateDataReader
        #define TDataWriter  LoadSharingStateDataWriter
        #define TGENERATE_SER_CODE
        #ifndef NDDS_STANDALONE_TYPE
        #define TGENERATE_TYPECODE
        #endif

        #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

        #undef TTypeSupport
        #undef TData
        #undef TDataReader
        #undef TDataWriter
        #ifndef NDDS_STANDALONE_TYPE
        #undef TGENERATE_TYPECODE
        #endif
        #undef TGENERATE_SER_CODE
        #undef TTYPENAME
        #undef TPlugin_new
        #undef TPlugin_delete

    } /* namespace dc  */

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'StorageUpdate' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   StorageUpdateTYPENAME

    /* Defines */
    #define TDataWriter StorageUpdateDataWriter
    #define TData       tms::StorageUpdate

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   StorageUpdateTYPENAME

    /* Defines */
    #define TDataReader StorageUpdateDataReader
    #define TDataSeq    StorageUpdateSeq
    #define TData       tms::StorageUpdate

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    StorageUpdateTYPENAME
    #define TPlugin_new  tms::StorageUpdatePlugin_new
    #define TPlugin_delete  tms::StorageUpdatePlugin_delete

    /* Defines */
    #define TTypeSupport StorageUpdateTypeSupport
    #define TData        tms::StorageUpdate
    #define TDataReader  StorageUpdateDataReader
    #define TDataWriter  StorageUpdateDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

    /* ========================================================================= */
    /**
    <<IMPLEMENTATION>>

    Defines:   TData,
    TDataWriter,
    TDataReader,
    TTypeSupport

    Configure and implement 'DeviceInfo' support classes.

    Note: Only the #defined classes get defined
    */

    /* ----------------------------------------------------------------- */
    /* DDSDataWriter
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataWriter, TData
    */

    /* Requires */
    #define TTYPENAME   DeviceInfoTYPENAME

    /* Defines */
    #define TDataWriter DeviceInfoDataWriter
    #define TData       tms::DeviceInfo

    #define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
    #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
    #undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

    #undef TDataWriter
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* DDSDataReader
    */

    /**
    <<IMPLEMENTATION >>

    Defines:   TDataReader, TDataSeq, TData
    */

    /* Requires */
    #define TTYPENAME   DeviceInfoTYPENAME

    /* Defines */
    #define TDataReader DeviceInfoDataReader
    #define TDataSeq    DeviceInfoSeq
    #define TData       tms::DeviceInfo

    #define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
    #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
    #undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

    #undef TDataReader
    #undef TDataSeq
    #undef TData

    #undef TTYPENAME

    /* ----------------------------------------------------------------- */
    /* TypeSupport

    <<IMPLEMENTATION >>

    Requires:  TTYPENAME,
    TPlugin_new
    TPlugin_delete
    Defines:   TTypeSupport, TData, TDataReader, TDataWriter
    */

    /* Requires */
    #define TTYPENAME    DeviceInfoTYPENAME
    #define TPlugin_new  tms::DeviceInfoPlugin_new
    #define TPlugin_delete  tms::DeviceInfoPlugin_delete

    /* Defines */
    #define TTypeSupport DeviceInfoTypeSupport
    #define TData        tms::DeviceInfo
    #define TDataReader  DeviceInfoDataReader
    #define TDataWriter  DeviceInfoDataWriter
    #define TGENERATE_SER_CODE
    #ifndef NDDS_STANDALONE_TYPE
    #define TGENERATE_TYPECODE
    #endif

    #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

    #undef TTypeSupport
    #undef TData
    #undef TDataReader
    #undef TDataWriter
    #ifndef NDDS_STANDALONE_TYPE
    #undef TGENERATE_TYPECODE
    #endif
    #undef TGENERATE_SER_CODE
    #undef TTYPENAME
    #undef TPlugin_new
    #undef TPlugin_delete

} /* namespace tms  */

