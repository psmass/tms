
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from tmsExampleApp.idl
# using RTI Code Generator (rtiddsgen) version 4.0.0.
# The rtiddsgen tool is part of the RTI Connext DDS distribution.
# For more information, type 'rtiddsgen -help' at a command shell
# or consult the Code Generator User's Manual.

from dataclasses import field
from typing import Union, Sequence, Optional
import rti.idl as idl
from enum import IntEnum


generator_device = idl.get_module("generator_device")

generator_device_DEVICE1 = "TMSParticipantLib::GeneratorDevice1"

generator_device.DEVICE1 = generator_device_DEVICE1

generator_device_DEVICE_INFO_WRITER = "GD_Publisher::DeviceInfoWriter"

generator_device.DEVICE_INFO_WRITER = generator_device_DEVICE_INFO_WRITER

generator_device_HEARTBEAT_WRITER = "GD_Publisher::HeartbeatWriter"

generator_device.HEARTBEAT_WRITER = generator_device_HEARTBEAT_WRITER

generator_device_AMC_STATE_WRITER = "GD_Publisher::ActiveMicrogridControllerStateWriter"

generator_device.AMC_STATE_WRITER = generator_device_AMC_STATE_WRITER

generator_device_ATE_REQUEST_WRITER = "GD_Publisher::AuthorizationToEnergizeRequestWriter"

generator_device.ATE_REQUEST_WRITER = generator_device_ATE_REQUEST_WRITER

generator_device_ATE_RESULT_WRITER = "GD_Publisher::AuthorizationToEnergizeResultWriter"

generator_device.ATE_RESULT_WRITER = generator_device_ATE_RESULT_WRITER

generator_device_ESS_STATE_WRITER = "GD_Publisher::EnergyStartStopStateWriter"

generator_device.ESS_STATE_WRITER = generator_device_ESS_STATE_WRITER

generator_device_REPLY_WRITER = "GD_Publisher::ReplyWriter"

generator_device.REPLY_WRITER = generator_device_REPLY_WRITER

generator_device_DEVICE_INFO_READER = "GD_Subscriber::DeviceInfoReader"

generator_device.DEVICE_INFO_READER = generator_device_DEVICE_INFO_READER

generator_device_HEARTBEAT_READER = "GD_Subscriber::HeartbeatReader"

generator_device.HEARTBEAT_READER = generator_device_HEARTBEAT_READER

generator_device_ATE_REPLY_READER = "GD_Subscriber::AuthorizationToEnergizeReplyReader"

generator_device.ATE_REPLY_READER = generator_device_ATE_REPLY_READER

generator_device_ESS_REQUEST_READER = "GD_Subscriber::EnergyStartStopRequestReader"

generator_device.ESS_REQUEST_READER = generator_device_ESS_REQUEST_READER

master_controller = idl.get_module("master_controller")

master_controller_MASTER_CONTROLLER1 = "TMSParticipantLib::MasterController1"

master_controller.MASTER_CONTROLLER1 = master_controller_MASTER_CONTROLLER1

master_controller_DEVICE_INFO_WRITER = "MC_Publisher::DeviceInfoWriter"

master_controller.DEVICE_INFO_WRITER = master_controller_DEVICE_INFO_WRITER

master_controller_HEARTBEAT_WRITER = "MC_Publisher::HeartbeatWriter"

master_controller.HEARTBEAT_WRITER = master_controller_HEARTBEAT_WRITER

master_controller_ATE_REPLY_WRITER = "MC_Publisher::AuthorizationToEnergizeReplyWriter"

master_controller.ATE_REPLY_WRITER = master_controller_ATE_REPLY_WRITER

master_controller_ESS_REQUEST_WRITER = "MC_Publisher::EnergyStartStopRequestWriter"

master_controller.ESS_REQUEST_WRITER = master_controller_ESS_REQUEST_WRITER

master_controller_DEVICE_INFO_READER = "MC_Subscriber::DeviceInfoReader"

master_controller.DEVICE_INFO_READER = master_controller_DEVICE_INFO_READER

master_controller_HEARTBEAT_READER = "MC_Subscriber::HeartbeatReader"

master_controller.HEARTBEAT_READER = master_controller_HEARTBEAT_READER

master_controller_AMC_STATE_READER = "MC_Subscriber::ActiveMicrogridControllerStateReader"

master_controller.AMC_STATE_READER = master_controller_AMC_STATE_READER

master_controller_ATE_REQUEST_READER = "GD_Subscriber::AuthorizationToEnergizeRequestReader"

master_controller.ATE_REQUEST_READER = master_controller_ATE_REQUEST_READER

master_controller_ATE_RESULT_READER = "GD_Subscriber::AuthorizationToEnergizeResultReader"

master_controller.ATE_RESULT_READER = master_controller_ATE_RESULT_READER

master_controller_ESS_STATE_READER = "GD_Subscriber::EnergyStartStopStateReader"

master_controller.ESS_STATE_READER = master_controller_ESS_STATE_READER

master_controller_REPLY_READER = "GD_Subscriber::ReplyReader"

master_controller.REPLY_READER = master_controller_REPLY_READER

tms = idl.get_module("tms")

tms_topic = idl.get_module("tms_topic")

tms.topic = tms_topic

tms_topic_TOPIC_HEARTBEAT = "Heartbeat"

tms.topic.TOPIC_HEARTBEAT = tms_topic_TOPIC_HEARTBEAT

tms_topic_TOPIC_DEVICE_INFO = "DeviceInfo"

tms.topic.TOPIC_DEVICE_INFO = tms_topic_TOPIC_DEVICE_INFO

tms_topic_TOPIC_DEVICE_ICON = "DeviceIcon"

tms.topic.TOPIC_DEVICE_ICON = tms_topic_TOPIC_DEVICE_ICON

tms_topic_TOPIC_IDENTITY_NICKNAME_STATE = "IdentityNicknameState"

tms.topic.TOPIC_IDENTITY_NICKNAME_STATE = tms_topic_TOPIC_IDENTITY_NICKNAME_STATE

tms_topic_TOPIC_IDENTITY_NICKNAME_REQUEST = "IdentityNicknameRequest"

tms.topic.TOPIC_IDENTITY_NICKNAME_REQUEST = tms_topic_TOPIC_IDENTITY_NICKNAME_REQUEST

tms_topic_TOPIC_OPERATOR_POWER_CONNECTION_STATE = "OperatorPowerConnectionState"

tms.topic.TOPIC_OPERATOR_POWER_CONNECTION_STATE = tms_topic_TOPIC_OPERATOR_POWER_CONNECTION_STATE

tms_topic_TOPIC_DISCOVERED_POWER_CONNECTION_STATE = "DiscoveredPowerConnectionState"

tms.topic.TOPIC_DISCOVERED_POWER_CONNECTION_STATE = tms_topic_TOPIC_DISCOVERED_POWER_CONNECTION_STATE

tms_topic_TOPIC_MICROGRID_POWER_CONNECTION_STATE = "MicrogridPowerConnectionState"

tms.topic.TOPIC_MICROGRID_POWER_CONNECTION_STATE = tms_topic_TOPIC_MICROGRID_POWER_CONNECTION_STATE

tms_topic_TOPIC_ACTIVE_DIAGNOSTIC_STATE = "ActiveDiagnosticState"

tms.topic.TOPIC_ACTIVE_DIAGNOSTIC_STATE = tms_topic_TOPIC_ACTIVE_DIAGNOSTIC_STATE

tms_topic_TOPIC_CLOCK_STATE = "ClockState"

tms.topic.TOPIC_CLOCK_STATE = tms_topic_TOPIC_CLOCK_STATE

tms_topic_TOPIC_ACTIVE_MICROGRID_CONTROLLER_STATE = "ActiveMicrogridControllerState"

tms.topic.TOPIC_ACTIVE_MICROGRID_CONTROLLER_STATE = tms_topic_TOPIC_ACTIVE_MICROGRID_CONTROLLER_STATE

tms_topic_TOPIC_AC_MEASUREMENT_UPDATE = "AcMeasurementUpdate"

tms.topic.TOPIC_AC_MEASUREMENT_UPDATE = tms_topic_TOPIC_AC_MEASUREMENT_UPDATE

tms_topic_TOPIC_POWER_PORT_STATE = "PowerPortState"

tms.topic.TOPIC_POWER_PORT_STATE = tms_topic_TOPIC_POWER_PORT_STATE

tms_topic_TOPIC_POWER_SWITCH_REQUEST = "PowerSwitchRequest"

tms.topic.TOPIC_POWER_SWITCH_REQUEST = tms_topic_TOPIC_POWER_SWITCH_REQUEST

tms_topic_TOPIC_ENERGY_START_STOP_STATE = "EnergyStartStopState"

tms.topic.TOPIC_ENERGY_START_STOP_STATE = tms_topic_TOPIC_ENERGY_START_STOP_STATE

tms_topic_TOPIC_ENERGY_START_STOP_REQUEST = "EnergyStartStopRequest"

tms.topic.TOPIC_ENERGY_START_STOP_REQUEST = tms_topic_TOPIC_ENERGY_START_STOP_REQUEST

tms_topic_TOPIC_AC_LOAD_SHARING_STATE = "AcLoadSharingState"

tms.topic.TOPIC_AC_LOAD_SHARING_STATE = tms_topic_TOPIC_AC_LOAD_SHARING_STATE

tms_topic_TOPIC_AC_LOAD_SHARING_REQUEST = "AcLoadSharingRequest"

tms.topic.TOPIC_AC_LOAD_SHARING_REQUEST = tms_topic_TOPIC_AC_LOAD_SHARING_REQUEST

tms_topic_TOPIC_CONTROL_HARDWARE_UPDATE = "ControlHardwareUpdate"

tms.topic.TOPIC_CONTROL_HARDWARE_UPDATE = tms_topic_TOPIC_CONTROL_HARDWARE_UPDATE

tms_topic_TOPIC_POWER_HARDWARE_UPDATE = "PowerHardwareUpdate"

tms.topic.TOPIC_POWER_HARDWARE_UPDATE = tms_topic_TOPIC_POWER_HARDWARE_UPDATE

tms_topic_TOPIC_STORAGE_UPDATE = "StorageUpdate"

tms.topic.TOPIC_STORAGE_UPDATE = tms_topic_TOPIC_STORAGE_UPDATE

tms_topic_TOPIC_REPLY = "Reply"

tms.topic.TOPIC_REPLY = tms_topic_TOPIC_REPLY

tms_topic_TOPIC_CONTROL_PARAMETER_STATE = "ControlParameterState"

tms.topic.TOPIC_CONTROL_PARAMETER_STATE = tms_topic_TOPIC_CONTROL_PARAMETER_STATE

tms_topic_TOPIC_CONTROL_PARAMETER_REQUEST = "ControlParameterRequest"

tms.topic.TOPIC_CONTROL_PARAMETER_REQUEST = tms_topic_TOPIC_CONTROL_PARAMETER_REQUEST

tms_topic_TOPIC_METRIC_PARAMETER_STATE = "MetricParameterState"

tms.topic.TOPIC_METRIC_PARAMETER_STATE = tms_topic_TOPIC_METRIC_PARAMETER_STATE

tms_topic_TOPIC_AUTHORIZATION_TO_ENERGIZE_REPLY = "AuthorizationToEnergizeReply"

tms.topic.TOPIC_AUTHORIZATION_TO_ENERGIZE_REPLY = tms_topic_TOPIC_AUTHORIZATION_TO_ENERGIZE_REPLY

tms_topic_TOPIC_AUTHORIZATION_TO_ENERGIZE_REQUEST = "AuthorizationToEnergizeRequest"

tms.topic.TOPIC_AUTHORIZATION_TO_ENERGIZE_REQUEST = tms_topic_TOPIC_AUTHORIZATION_TO_ENERGIZE_REQUEST

tms_topic_TOPIC_AUTHORIZATION_TO_ENERGIZE_RESULT = "AuthorizationToEnergizeResult"

tms.topic.TOPIC_AUTHORIZATION_TO_ENERGIZE_RESULT = tms_topic_TOPIC_AUTHORIZATION_TO_ENERGIZE_RESULT

tms_topic_TOPIC_OPERATOR_INTENT_STATE = "OperatorIntentState"

tms.topic.TOPIC_OPERATOR_INTENT_STATE = tms_topic_TOPIC_OPERATOR_INTENT_STATE

tms_topic_TOPIC_OPERATOR_INTENT_REQUEST = "OperatorIntentRequest"

tms.topic.TOPIC_OPERATOR_INTENT_REQUEST = tms_topic_TOPIC_OPERATOR_INTENT_REQUEST

tms_topic_TOPIC_DEVICE_GROUNDING_STATE = "GroundingCircuitState"

tms.topic.TOPIC_DEVICE_GROUNDING_STATE = tms_topic_TOPIC_DEVICE_GROUNDING_STATE

tms_topic_TOPIC_GROUNDING_CIRCUIT_REQUEST = "GroundingCircuitRequest"

tms.topic.TOPIC_GROUNDING_CIRCUIT_REQUEST = tms_topic_TOPIC_GROUNDING_CIRCUIT_REQUEST

tms_topic_TOPIC_DC_MEASUREMENT_UPDATE = "DcMeasurementUpdate"

tms.topic.TOPIC_DC_MEASUREMENT_UPDATE = tms_topic_TOPIC_DC_MEASUREMENT_UPDATE

tms_topic_TOPIC_DC_LOAD_SHARING_REQUEST = "DcLoadSharingRequest"

tms.topic.TOPIC_DC_LOAD_SHARING_REQUEST = tms_topic_TOPIC_DC_LOAD_SHARING_REQUEST

tms_topic_TOPIC_AC_SUMMARY_MEASUREMENT_UPDATE = "AcSummaryMeasurementUpdate"

tms.topic.TOPIC_AC_SUMMARY_MEASUREMENT_UPDATE = tms_topic_TOPIC_AC_SUMMARY_MEASUREMENT_UPDATE

tms_topic_TOPIC_DC_LOAD_SHARING_STATE = "DcLoadSharingState"

tms.topic.TOPIC_DC_LOAD_SHARING_STATE = tms_topic_TOPIC_DC_LOAD_SHARING_STATE

tms_topic_TOPIC_DC_SUMMARY_MEASUREMENT_UPDATE = "GeneratorDeviceDcSummaryMeasurementUpdate"

tms.topic.TOPIC_DC_SUMMARY_MEASUREMENT_UPDATE = tms_topic_TOPIC_DC_SUMMARY_MEASUREMENT_UPDATE

tms_TMS_VERSION = "1.0.1"

tms.TMS_VERSION = tms_TMS_VERSION

tms_TopicName_MINLEN = 1

tms.TopicName_MINLEN = tms_TopicName_MINLEN

tms_TopicName_MAXLEN = 64

tms.TopicName_MAXLEN = tms_TopicName_MAXLEN

tms_TopicName = str

tms.TopicName = tms_TopicName

tms_TopicList_MINLEN = 0

tms.TopicList_MINLEN = tms_TopicList_MINLEN

tms_TopicList_MAXLEN = 64

tms.TopicList_MAXLEN = tms_TopicList_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.TopicList_MAXLEN), idl.element_annotations([idl.bound(tms.TopicName_MAXLEN)]),]
)
class tms_TopicList:
    value: Sequence[str] = field(default_factory = list)

tms.TopicList = tms_TopicList

@idl.enum
class tms_CableSenseStatus(IntEnum):
    CS_UNKNOWN = 0
    CS_DISCONNECTED = 1
    CS_CONNECTED = 2

tms.CableSenseStatus = tms_CableSenseStatus

@idl.enum
class tms_CircuitContinuity(IntEnum):
    CC_UNKNOWN = 0
    CC_OPEN = 1
    CC_CLOSED = 2
    CC_INCONSISTENT = 3

tms.CircuitContinuity = tms_CircuitContinuity

@idl.enum
class tms_ClockMonotonicPersistenceType(IntEnum):
    CMPT_UNKNOWN = 0
    CMPT_RESET = 1
    CMPT_ACCUMULATE = 2
    CMPT_OTHER = 3

tms.ClockMonotonicPersistenceType = tms_ClockMonotonicPersistenceType

@idl.enum
class tms_DesiredCircuitContinuity(IntEnum):
    DCC_UNKNOWN = 0
    DCC_OPEN = 1
    DCC_CLOSED = 2
    DCC_SYNC_CLOSED = 3
    DCC_CLOSED_INTERNAL = 4
    DCC_NO_CHANGE = 5

tms.DesiredCircuitContinuity = tms_DesiredCircuitContinuity

@idl.enum
class tms_DeviceRole(IntEnum):
    ROLE_UNKNOWN = 0
    ROLE_MICROGRID_CONTROLLER = 1
    ROLE_SOURCE = 2
    ROLE_LOAD = 3
    ROLE_STORAGE = 4
    ROLE_DISTRIBUTION = 5
    ROLE_MICROGRID_DASHBOARD = 6
    ROLE_CONVERSION = 7
    ROLE_MONITOR = 8

tms.DeviceRole = tms_DeviceRole

@idl.enum
class tms_DtcSeverity(IntEnum):
    SEV_UNKNOWN = 0
    SEV_1_CLEAR = 1
    SEV_2_INFORMATIVE = 2
    SEV_3_PREVENTATIVE = 3
    SEV_4_DEGRADED = 4
    SEV_5_WARNING = 5
    SEV_6_MINOR = 6
    SEV_7_MAJOR = 7
    SEV_8_CRITICAL = 8
    SEV_9_FATAL = 9
    SEV_10_HUMAN_SAFETY = 10

tms.DtcSeverity = tms_DtcSeverity

@idl.enum
class tms_EnergyStartStopLevel(IntEnum):
    ESSL_UNKNOWN = 0
    ESSL_ANY = 1
    ESSL_OFF = 2
    ESSL_WARM = 3
    ESSL_IDLE = 4
    ESSL_READY = 5
    ESSL_READY_SYNCED = 6
    ESSL_OPERATIONAL = 7

tms.EnergyStartStopLevel = tms_EnergyStartStopLevel

tms_EnergyStartStopLevelSequence_MINLEN = 0

tms.EnergyStartStopLevelSequence_MINLEN = tms_EnergyStartStopLevelSequence_MINLEN

tms_EnergyStartStopLevelSequence_MAXLEN = 8

tms.EnergyStartStopLevelSequence_MAXLEN = tms_EnergyStartStopLevelSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.EnergyStartStopLevelSequence_MAXLEN),]
)
class tms_EnergyStartStopLevelSequence:
    value: Sequence[tms.EnergyStartStopLevel] = field(default_factory = list)

tms.EnergyStartStopLevelSequence = tms_EnergyStartStopLevelSequence

@idl.enum
class tms_GroundFaultDetection(IntEnum):
    GFD_UNKNOWN = 0
    GFD_NOT_APPLICABLE = 1
    GFD_NONE = 2
    GFD_ANY = 3
    GFD_A = 4
    GFD_B = 5
    GFD_C = 6
    GFD_DCPOS = 7
    GFD_DCNEG = 8

tms.GroundFaultDetection = tms_GroundFaultDetection

@idl.enum
class tms_GroundingDesignType(IntEnum):
    GROUNDING_UNKNOWN = 0
    GROUNDING_UNGROUNDED = 1
    GROUNDING_SOLID = 2
    GROUNDING_HIGH_RESISTANCE = 3
    GROUNDING_LOW_RESISTANCE = 4
    GROUNDING_REACTANCE = 5

tms.GroundingDesignType = tms_GroundingDesignType

@idl.enum
class tms_OperatingMode(IntEnum):
    OPM_UNKNOWN = 0
    OPM_NORMAL = 1
    OPM_EMERGENCY = 2
    OPM_SILENT_WATCH = 3

tms.OperatingMode = tms_OperatingMode

@idl.enum
class tms_OperatorPriorityType(IntEnum):
    OPT_UNKNOWN = 0
    OPT_NEVER_OPERATE = 1
    OPT_ALWAYS_OPERATE = 2
    OPT_NUMERIC_RANK = 3

tms.OperatorPriorityType = tms_OperatorPriorityType

@idl.enum
class tms_OperatorIntentType(IntEnum):
    OIT_UNKNOWN = 0
    OIT_DEFAULT_INTENT = 1
    OIT_OPERATOR_DEFINED = 2

tms.OperatorIntentType = tms_OperatorIntentType

@idl.enum
class tms_PowerConnectionDetectionType(IntEnum):
    PCDT_UNKNOWN = 0
    PCDT_OPERATOR = 1
    PCDT_CABLE_ID = 2
    PCDT_PROBE = 3
    PCDT_CORRELATION = 4
    PCDT_COMMUNICATIONS = 5
    PCDT_HISTORY = 6

tms.PowerConnectionDetectionType = tms_PowerConnectionDetectionType

@idl.enum
class tms_ReplyCode(IntEnum):
    REPLY_UNKNOWN = 0
    REPLY_OK = 1
    REPLY_BAD_REQUEST = 2
    REPLY_METHOD_NOT_ALLOWED = 3
    REPLY_CONFLICT = 4
    REPLY_GONE = 5
    REPLY_PRECONDITION_FAILED = 6
    REPLY_INTERNAL_SERVER_ERROR = 7
    REPLY_NOT_IMPLEMENTED = 8
    REPLY_SERVICE_UNAVAILABLE = 9
    REPLY_PENDING_AUTHORIZATION = 10
    REPLY_NOT_MASTER = 11

tms.ReplyCode = tms_ReplyCode

@idl.enum
class tms_CircuitWiring(IntEnum):
    WIRING_UNKNOWN = 0
    WIRING_AC_SINGLE = 1
    WIRING_AC_SPLIT = 2
    WIRING_AC_3WYE = 3
    WIRING_AC_3DELTA = 4
    WIRING_DC = 5
    WIRING_DC_3WIRE = 6

tms.CircuitWiring = tms_CircuitWiring

@idl.enum
class tms_PowerConnectorPolarity(IntEnum):
    POLARITY_UNKNOWN = 0
    POLARITY_PIN = 1
    POLARITY_SOCKET = 2
    POLARITY_UNIVERSAL = 3

tms.PowerConnectorPolarity = tms_PowerConnectorPolarity

@idl.enum
class tms_PowerConnectorType(IntEnum):
    CONNECTOR_UNKNOWN = 0
    CONNECTOR_TERMINAL_BLOCK = 1
    CONNECTOR_MILSTD = 2
    CONNECTOR_NEMA5 = 3
    CONNECTOR_CAMLOCK = 4
    CONNECTOR_POWERLOCK = 5
    CONNECTOR_IEC60309 = 6
    CONNECTOR_J1772 = 7
    CONNECTOR_POWERLOK = 8
    CONNECTOR_MILSTD1651 = 9
    CONNECTOR_MILDTL22992 = 10
    CONNECTOR_MILDTL53126 = 11
    CONNECTOR_OTHER = 12
    CONNECTOR_METER = 13
    CONNECTOR_BUS = 14

tms.PowerConnectorType = tms_PowerConnectorType

@idl.enum
class tms_PowerPortDirectionality(IntEnum):
    PPD_UNKNOWN = 0
    PPD_NONE = 1
    PPD_IN = 2
    PPD_OUT = 3
    PPD_IN_OUT = 4

tms.PowerPortDirectionality = tms_PowerPortDirectionality

@idl.enum
class tms_PowerConnectorFeature(IntEnum):
    PCF_UNKNOWN = 0
    PCF_CABLE_SENSE = 1
    PCF_CABLE_ID_READER = 2
    PCF_CABLE_MEASUREMENT = 3
    PCF_COMMUNICATION = 4
    PCF_TOPOLOGY_DISCOVERY = 5

tms.PowerConnectorFeature = tms_PowerConnectorFeature

@idl.enum
class tms_PowerSwitchFeature(IntEnum):
    PSF_UNKNOWN = 0
    PSF_MANUAL_OPEN = 1
    PSF_MANUAL_CLOSE = 2
    PSF_AUTO_OPEN = 3
    PSF_AUTO_CLOSE = 4
    PSF_REQUEST_OPEN = 5
    PSF_REQUEST_CLOSE = 6
    PSF_LOCK = 7
    PSF_RECLOSER = 8
    PSF_BREAKER = 9
    PSF_GFI = 10
    PSF_ARC_FLASH = 11
    PSF_SYNCHRONIZER = 12
    PSF_SURGE = 13
    PSF_SWITCH_CONDITIONS = 14

tms.PowerSwitchFeature = tms_PowerSwitchFeature

@idl.enum
class tms_PowerSwitchReason(IntEnum):
    PSR_UNKNOWN = 0
    PSR_STARTUP = 1
    PSR_MANUAL = 2
    PSR_AUTO = 3
    PSR_REQUEST = 4
    PSR_OPERATOR_LOGIN = 5
    PSR_AUTO_PROTECTION = 6
    PSR_AUTO_LOAD_SHED = 7
    PSR_AUTO_VOLTAGE_LOSS = 8
    PSR_AUTO_COMMS_LOSS = 9
    PSR_MALFUNCTION = 10

tms.PowerSwitchReason = tms_PowerSwitchReason

@idl.enum
class tms_SourceFeature(IntEnum):
    SRCF_UNKNOWN = 0
    SRCF_GENSET = 1
    SRCF_FUEL_CELL = 2
    SRCF_SOLAR = 3
    SRCF_WIND = 4
    SRCF_VEHICLE = 5

tms.SourceFeature = tms_SourceFeature

@idl.enum
class tms_LoadFeature(IntEnum):
    LOADF_UNKNOWN = 0
    LOADF_DEMAND_RESPONSE = 1
    LOADF_CHANGE_NOTIFICATION = 2
    LOADF_SOFT_START = 3

tms.LoadFeature = tms_LoadFeature

@idl.enum
class tms_DistributionFeature(IntEnum):
    DISTF_UNKNOWN = 0
    DISTF_CLAMP_METER = 1
    DISTF_TAP_METER = 2
    DISTF_PCC = 3
    DISTF_FEEDER = 4
    DISTF_DISTRIBUTION = 5

tms.DistributionFeature = tms_DistributionFeature

@idl.enum
class tms_ConversionFeature(IntEnum):
    CONVF_UNKNOWN = 0
    CONVF_ACTIVE = 1
    CONVF_PASSIVE = 2

tms.ConversionFeature = tms_ConversionFeature

@idl.enum
class tms_MicrogridDashboardFeature(IntEnum):
    MDF_UNKNOWN = 0
    MDF_DISPLAY = 1
    MDF_CONTROL = 2

tms.MicrogridDashboardFeature = tms_MicrogridDashboardFeature

@idl.enum
class tms_MicrogridControllerFeature(IntEnum):
    MCF_UNKNOWN = 0
    MCF_FIXED = 1
    MCF_GENERAL = 2

tms.MicrogridControllerFeature = tms_MicrogridControllerFeature

@idl.enum
class tms_StorageFeature(IntEnum):
    STORF_UNKNOWN = 0
    STORF_GRID = 1
    STORF_SUBCYCLE_UPS = 2
    STORF_CHARGING = 3
    STORF_VEHICLE = 4

tms.StorageFeature = tms_StorageFeature

@idl.enum
class tms_ConfigId(IntEnum):
    CONFIG_UNKNOWN = 0
    CONFIG_DEFAULTS = 1
    CONFIG_ACTIVE = 2
    CONFIG_ON_REBOOT = 3
    CONFIG_ON_COMMS_LOSS = 4

tms.ConfigId = tms_ConfigId

@idl.enum
class tms_FailureModeIndicator(IntEnum):
    FMI_UNKNOWN = 0
    FMI_HIGH_MOST_SEVERE_HIGH = 1
    FMI_HIGH_MOST_SEVERE_LOW = 2
    FMI_DATA_ERRATIC = 3
    FMI_VOLTAGE_HIGH = 4
    FMI_VOLTAGE_LOW = 5
    FMI_CURRENT_LOW = 6
    FMI_CURRENT_HIGH = 7
    FMI_NOT_RESPONDING = 8
    FMI_ABNORMAL_FREQUENCY = 9
    FMI_ABNORMAL_UPDATE_RATE = 10
    FMI_ABNORMAL_RATE_OF_CHARGE = 11
    FMI_FAILURE_CODE_NOT_IDENTIFIABLE = 12
    FMI_BAD_INTELLIGENT_DEVICE = 13
    FMI_OUT_OF_CALIBRATION = 14
    FMI_SPECIAL_INSTRUCTIONS = 15
    FMI_HIGH_LEAST_SEVERE = 16
    FMI_HIGH_MODERATELY_SEVERE = 17
    FMI_LOW_LEAST_SEVERE = 18
    FMI_LOW_MODERATELY_SEVERE = 19
    FMI_RECEIVED_DATA_ERROR = 20
    FMI_DATA_DRIFTED_HIGH = 21
    FMI_DATA_DRIFTED_LOW = 22
    FMI_CONDITION_EXISTS = 23

tms.FailureModeIndicator = tms_FailureModeIndicator

tms_PowerPortNumber = idl.int32

tms.PowerPortNumber = tms_PowerPortNumber

tms_MAX_PORTS = 64

tms.MAX_PORTS = tms_MAX_PORTS

tms_INVALID_PORT_NUMBER = -1

tms.INVALID_PORT_NUMBER = tms_INVALID_PORT_NUMBER

tms_Identity_MINLEN = 1

tms.Identity_MINLEN = tms_Identity_MINLEN

tms_Identity_MAXLEN = 32

tms.Identity_MAXLEN = tms_Identity_MAXLEN

tms_Identity = str

tms.Identity = tms_Identity

tms_IdentitySequence_MINLEN = 0

tms.IdentitySequence_MINLEN = tms_IdentitySequence_MINLEN

tms_IdentitySequence_MAXLEN = tms.MAX_PORTS

tms.IdentitySequence_MAXLEN = tms_IdentitySequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.IdentitySequence_MAXLEN), idl.element_annotations([idl.bound(tms.Identity_MAXLEN)]),]
)
class tms_IdentitySequence:
    value: Sequence[str] = field(default_factory = list)

tms.IdentitySequence = tms_IdentitySequence

tms_GlobalTradeItemNumber_LEN = 14

tms.GlobalTradeItemNumber_LEN = tms_GlobalTradeItemNumber_LEN

@idl.alias(
    annotations = [idl.array([tms.GlobalTradeItemNumber_LEN]),]
)
class tms_GlobalTradeItemNumber:
    value: Sequence[idl.char] = field(default_factory = idl.array_factory(idl.char, [tms.GlobalTradeItemNumber_LEN]))

tms.GlobalTradeItemNumber = tms_GlobalTradeItemNumber

tms_GroundingCircuitNumber = idl.int32

tms.GroundingCircuitNumber = tms_GroundingCircuitNumber

tms_MAX_GROUNDING_CIRCUITS = 8

tms.MAX_GROUNDING_CIRCUITS = tms_MAX_GROUNDING_CIRCUITS

tms_INVALID_GROUNDING_CIRCUIT_NUMBER = -1

tms.INVALID_GROUNDING_CIRCUIT_NUMBER = tms_INVALID_GROUNDING_CIRCUIT_NUMBER

tms_NatoStockNumber_LEN = 13

tms.NatoStockNumber_LEN = tms_NatoStockNumber_LEN

@idl.alias(
    annotations = [idl.array([tms.NatoStockNumber_LEN]),]
)
class tms_NatoStockNumber:
    value: Sequence[idl.char] = field(default_factory = idl.array_factory(idl.char, [tms.NatoStockNumber_LEN]))

tms.NatoStockNumber = tms_NatoStockNumber

tms_String16_MINLEN = 0

tms.String16_MINLEN = tms_String16_MINLEN

tms_String16_MAXLEN = 16

tms.String16_MAXLEN = tms_String16_MAXLEN

tms_String16 = str

tms.String16 = tms_String16

tms_String32_MINLEN = 0

tms.String32_MINLEN = tms_String32_MINLEN

tms_String32_MAXLEN = 32

tms.String32_MAXLEN = tms_String32_MAXLEN

tms_String32 = str

tms.String32 = tms_String32

tms_String1_32_MINLEN = 1

tms.String1_32_MINLEN = tms_String1_32_MINLEN

tms_String1_32_MAXLEN = 32

tms.String1_32_MAXLEN = tms_String1_32_MAXLEN

tms_String1_32 = str

tms.String1_32 = tms_String1_32

tms_SuspectParameterNumber = idl.uint32

tms.SuspectParameterNumber = tms_SuspectParameterNumber

tms_TapNumber = idl.int32

tms.TapNumber = tms_TapNumber

tms_MAX_TAPS = 64

tms.MAX_TAPS = tms_MAX_TAPS

tms_PowerPortNumberSequence_MINLEN = 0

tms.PowerPortNumberSequence_MINLEN = tms_PowerPortNumberSequence_MINLEN

tms_PowerPortNumberSequence_MAXLEN = tms.MAX_PORTS

tms.PowerPortNumberSequence_MAXLEN = tms_PowerPortNumberSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.PowerPortNumberSequence_MAXLEN),]
)
class tms_PowerPortNumberSequence:
    value: Sequence[idl.int32] = field(default_factory = idl.array_factory(idl.int32))

tms.PowerPortNumberSequence = tms_PowerPortNumberSequence

tms_ConversionFeatureSequence_MINLEN = 0

tms.ConversionFeatureSequence_MINLEN = tms_ConversionFeatureSequence_MINLEN

tms_ConversionFeatureSequence_MAXLEN = 3

tms.ConversionFeatureSequence_MAXLEN = tms_ConversionFeatureSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.ConversionFeatureSequence_MAXLEN),]
)
class tms_ConversionFeatureSequence:
    value: Sequence[tms.ConversionFeature] = field(default_factory = list)

tms.ConversionFeatureSequence = tms_ConversionFeatureSequence

tms_OctetSequence_MINLEN = 1

tms.OctetSequence_MINLEN = tms_OctetSequence_MINLEN

tms_OctetSequence_MAXLEN = 32768

tms.OctetSequence_MAXLEN = tms_OctetSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.OctetSequence_MAXLEN),]
)
class tms_OctetSequence:
    value: Sequence[idl.int8] = field(default_factory = idl.array_factory(idl.int8))

tms.OctetSequence = tms_OctetSequence

tms_DistributionFeatureSequence_MINLEN = 0

tms.DistributionFeatureSequence_MINLEN = tms_DistributionFeatureSequence_MINLEN

tms_DistributionFeatureSequence_MAXLEN = 6

tms.DistributionFeatureSequence_MAXLEN = tms_DistributionFeatureSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.DistributionFeatureSequence_MAXLEN),]
)
class tms_DistributionFeatureSequence:
    value: Sequence[tms.DistributionFeature] = field(default_factory = list)

tms.DistributionFeatureSequence = tms_DistributionFeatureSequence

tms_PowerConnectorFeatureSequence_MINLEN = 0

tms.PowerConnectorFeatureSequence_MINLEN = tms_PowerConnectorFeatureSequence_MINLEN

tms_PowerConnectorFeatureSequence_MAXLEN = 6

tms.PowerConnectorFeatureSequence_MAXLEN = tms_PowerConnectorFeatureSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.PowerConnectorFeatureSequence_MAXLEN),]
)
class tms_PowerConnectorFeatureSequence:
    value: Sequence[tms.PowerConnectorFeature] = field(default_factory = list)

tms.PowerConnectorFeatureSequence = tms_PowerConnectorFeatureSequence

tms_PowerSwitchFeatureSequence_MINLEN = 0

tms.PowerSwitchFeatureSequence_MINLEN = tms_PowerSwitchFeatureSequence_MINLEN

tms_PowerSwitchFeatureSequence_MAXLEN = 15

tms.PowerSwitchFeatureSequence_MAXLEN = tms_PowerSwitchFeatureSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.PowerSwitchFeatureSequence_MAXLEN),]
)
class tms_PowerSwitchFeatureSequence:
    value: Sequence[tms.PowerSwitchFeature] = field(default_factory = list)

tms.PowerSwitchFeatureSequence = tms_PowerSwitchFeatureSequence

tms_LoadFeatureSequence_MINLEN = 0

tms.LoadFeatureSequence_MINLEN = tms_LoadFeatureSequence_MINLEN

tms_LoadFeatureSequence_MAXLEN = 4

tms.LoadFeatureSequence_MAXLEN = tms_LoadFeatureSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.LoadFeatureSequence_MAXLEN),]
)
class tms_LoadFeatureSequence:
    value: Sequence[tms.LoadFeature] = field(default_factory = list)

tms.LoadFeatureSequence = tms_LoadFeatureSequence

tms_MicrogridControllerFeatureSequence_MINLEN = 1

tms.MicrogridControllerFeatureSequence_MINLEN = tms_MicrogridControllerFeatureSequence_MINLEN

tms_MicrogridControllerFeatureSequence_MAXLEN = 3

tms.MicrogridControllerFeatureSequence_MAXLEN = tms_MicrogridControllerFeatureSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.MicrogridControllerFeatureSequence_MAXLEN),]
)
class tms_MicrogridControllerFeatureSequence:
    value: Sequence[tms.MicrogridControllerFeature] = field(default_factory = list)

tms.MicrogridControllerFeatureSequence = tms_MicrogridControllerFeatureSequence

tms_MicrogridDashboardFeatureSequence_MINLEN = 1

tms.MicrogridDashboardFeatureSequence_MINLEN = tms_MicrogridDashboardFeatureSequence_MINLEN

tms_MicrogridDashboardFeatureSequence_MAXLEN = 3

tms.MicrogridDashboardFeatureSequence_MAXLEN = tms_MicrogridDashboardFeatureSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.MicrogridDashboardFeatureSequence_MAXLEN),]
)
class tms_MicrogridDashboardFeatureSequence:
    value: Sequence[tms.MicrogridDashboardFeature] = field(default_factory = list)

tms.MicrogridDashboardFeatureSequence = tms_MicrogridDashboardFeatureSequence

tms_EnumLabelSequence_MINLEN = 0

tms.EnumLabelSequence_MINLEN = tms_EnumLabelSequence_MINLEN

tms_EnumLabelSequence_MAXLEN = 128

tms.EnumLabelSequence_MAXLEN = tms_EnumLabelSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.EnumLabelSequence_MAXLEN), idl.element_annotations([idl.bound(tms.String1_32_MAXLEN)]),]
)
class tms_EnumLabelSequence:
    value: Sequence[str] = field(default_factory = list)

tms.EnumLabelSequence = tms_EnumLabelSequence

tms_SourceFeatureSequence_MINLEN = 0

tms.SourceFeatureSequence_MINLEN = tms_SourceFeatureSequence_MINLEN

tms_SourceFeatureSequence_MAXLEN = 6

tms.SourceFeatureSequence_MAXLEN = tms_SourceFeatureSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.SourceFeatureSequence_MAXLEN),]
)
class tms_SourceFeatureSequence:
    value: Sequence[tms.SourceFeature] = field(default_factory = list)

tms.SourceFeatureSequence = tms_SourceFeatureSequence

tms_StorageFeatureSequence_MINLEN = 0

tms.StorageFeatureSequence_MINLEN = tms_StorageFeatureSequence_MINLEN

tms_StorageFeatureSequence_MAXLEN = 5

tms.StorageFeatureSequence_MAXLEN = tms_StorageFeatureSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.StorageFeatureSequence_MAXLEN),]
)
class tms_StorageFeatureSequence:
    value: Sequence[tms.StorageFeature] = field(default_factory = list)

tms.StorageFeatureSequence = tms_StorageFeatureSequence

tms_ThermalLoadSequence_MINLEN = 0

tms.ThermalLoadSequence_MINLEN = tms_ThermalLoadSequence_MINLEN

tms_ThermalLoadSequence_MAXLEN = 5

tms.ThermalLoadSequence_MAXLEN = tms_ThermalLoadSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.ThermalLoadSequence_MAXLEN),]
)
class tms_ThermalLoadSequence:
    value: Sequence[idl.float32] = field(default_factory = idl.array_factory(idl.float32))

tms.ThermalLoadSequence = tms_ThermalLoadSequence

tms_ThermalZoneSequence_MINLEN = 0

tms.ThermalZoneSequence_MINLEN = tms_ThermalZoneSequence_MINLEN

tms_ThermalZoneSequence_MAXLEN = 5

tms.ThermalZoneSequence_MAXLEN = tms_ThermalZoneSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.ThermalZoneSequence_MAXLEN), idl.element_annotations([idl.bound(tms.String1_32_MAXLEN)]),]
)
class tms_ThermalZoneSequence:
    value: Sequence[str] = field(default_factory = list)

tms.ThermalZoneSequence = tms_ThermalZoneSequence

@idl.struct
class tms_Point2D:
    x: idl.float32 = 0.0
    y: idl.float32 = 0.0

tms.Point2D = tms_Point2D

tms_Point2DSequence_MINLEN = 0

tms.Point2DSequence_MINLEN = tms_Point2DSequence_MINLEN

tms_Point2DSequence_MAXLEN = 21

tms.Point2DSequence_MAXLEN = tms_Point2DSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.Point2DSequence_MAXLEN),]
)
class tms_Point2DSequence:
    value: Sequence[tms.Point2D] = field(default_factory = list)

tms.Point2DSequence = tms_Point2DSequence

@idl.struct
class tms_Curve2D:
    points: tms.Point2DSequence = field(default_factory = tms.Point2DSequence)

tms.Curve2D = tms_Curve2D

@idl.struct
class tms_ControlCurve:
    minimum: tms.Curve2D = field(default_factory = tms.Curve2D)
    nominal: tms.Curve2D = field(default_factory = tms.Curve2D)
    maximum: tms.Curve2D = field(default_factory = tms.Curve2D)

tms.ControlCurve = tms_ControlCurve

@idl.struct(
    member_annotations = {
        'requestingDeviceId': [idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_GridRequest:
    requestingDeviceId: str = ""

tms.GridRequest = tms_GridRequest

@idl.struct
class tms_ClockMonotonic:
    seconds: idl.uint32 = 0
    nanoseconds: idl.uint32 = 0

tms.ClockMonotonic = tms_ClockMonotonic

@idl.struct
class tms_ThermalInfo:
    thermalZone: tms.ThermalZoneSequence = field(default_factory = tms.ThermalZoneSequence)

tms.ThermalInfo = tms_ThermalInfo

@idl.struct
class tms_ThermalState:
    thermalLoad: tms.ThermalLoadSequence = field(default_factory = tms.ThermalLoadSequence)

tms.ThermalState = tms_ThermalState

@idl.struct
class tms_SynchronousMachineCoefficients:
    statorResistancePerPhase: idl.float32 = 0.0
    statorLeakageReactance: idl.float32 = 0.0
    zeroSequenceReactance: idl.float32 = 0.0
    negativeSequenceReactance: idl.float32 = 0.0
    zeroSequenceResistance: idl.float32 = 0.0
    negativeSequenceResistance: idl.float32 = 0.0
    directAxisSynchronousReactance: idl.float32 = 0.0
    directAxisTransientReactance: idl.float32 = 0.0
    directAxisSubtransientReactance: idl.float32 = 0.0
    quadratureAxisSynchronousReactance: idl.float32 = 0.0
    quadratureAxisTransientReactance: idl.float32 = 0.0
    quadratureAxisSubtransientReactance: idl.float32 = 0.0
    directAxisTransientShortCircuitTimeConstant: idl.float32 = 0.0
    directAxisSubtransientShortCircuitTimeConstant: idl.float32 = 0.0
    directAxisTransientOpenCircuitTimeConstant: idl.float32 = 0.0
    directAxisSubtransientOpenCircuitTimeConstant: idl.float32 = 0.0
    quadratureAxisTransientShortCircuitTimeConstant: idl.float32 = 0.0
    quadratureAxisSubtransientShortCircuitTimeConstant: idl.float32 = 0.0
    quadratureAxisTransientOpenCircuitTimeConstant: idl.float32 = 0.0
    quadratureAxisSubtransientOpenCircuitTimeConstant: idl.float32 = 0.0

tms.SynchronousMachineCoefficients = tms_SynchronousMachineCoefficients

@idl.struct
class tms_PowerElectronicsInfo:
    minTemperature: idl.float32 = 0.0
    maxTemperature: idl.float32 = 0.0

tms.PowerElectronicsInfo = tms_PowerElectronicsInfo

@idl.struct
class tms_PowerElectronicsState:
    temperature: idl.float32 = 0.0

tms.PowerElectronicsState = tms_PowerElectronicsState

tms_StorageCellNumber = idl.uint16

tms.StorageCellNumber = tms_StorageCellNumber

tms_ONLY_CELL = 0

tms.ONLY_CELL = tms_ONLY_CELL

tms_MAXLEN_storageCells = 50

tms.MAXLEN_storageCells = tms_MAXLEN_storageCells

@idl.struct
class tms_StorageCellState:
    cellNumber: idl.uint16 = 0
    cycleCounter: idl.float32 = 0.0
    stateOfCharge: idl.float32 = 0.0
    temperature: idl.float32 = 0.0
    voltage: idl.float32 = 0.0

tms.StorageCellState = tms_StorageCellState

tms_StorageCellStateSequence_MINLEN = 0

tms.StorageCellStateSequence_MINLEN = tms_StorageCellStateSequence_MINLEN

tms_StorageCellStateSequence_MAXLEN = tms.MAXLEN_storageCells

tms.StorageCellStateSequence_MAXLEN = tms_StorageCellStateSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.StorageCellStateSequence_MAXLEN),]
)
class tms_StorageCellStateSequence:
    value: Sequence[tms.StorageCellState] = field(default_factory = list)

tms.StorageCellStateSequence = tms_StorageCellStateSequence

@idl.struct
class tms_EnergyStorageState:
    minTemperature: idl.float32 = 0.0
    averageTemperature: idl.float32 = 0.0
    maxTemperature: idl.float32 = 0.0
    runTime: idl.float32 = 0.0
    storageCells: tms.StorageCellStateSequence = field(default_factory = tms.StorageCellStateSequence)

tms.EnergyStorageState = tms_EnergyStorageState

@idl.struct
class tms_EnergyStorageInfo:
    highStateOfCharge: idl.float32 = 0.0
    lowStateOfCharge: idl.float32 = 0.0
    minTemperature: idl.float32 = 0.0
    nomTemperature: idl.float32 = 0.0
    maxTemperature: idl.float32 = 0.0

tms.EnergyStorageInfo = tms_EnergyStorageInfo

@idl.struct
class tms_GeneratorInfo:
    minFieldCurrent: idl.float32 = 0.0
    maxFieldCurrent: idl.float32 = 0.0
    maxStatorTemperature: idl.float32 = 0.0

tms.GeneratorInfo = tms_GeneratorInfo

@idl.struct
class tms_GeneratorState:
    fieldCurrent: idl.float32 = 0.0
    statorTemperature: idl.float32 = 0.0

tms.GeneratorState = tms_GeneratorState

@idl.struct
class tms_EngineInfo:
    minOilPressure: idl.float32 = 0.0
    maxOilPressure: idl.float32 = 0.0
    minCoolantTemperature: idl.float32 = 0.0
    maxCoolantTemperature: idl.float32 = 0.0
    minEngineSpeed: idl.float32 = 0.0
    maxEngineSpeed: idl.float32 = 0.0
    minWetStackPreventionLoad: idl.float32 = 0.0
    minWetStackMitigationLoad: idl.float32 = 0.0

tms.EngineInfo = tms_EngineInfo

@idl.enum
class tms_EngineOperatingState(IntEnum):
    EOS_UNKNOWN = 0
    EOS_STOPPED = 1
    EOS_HEATING = 2
    EOS_STARTING = 3
    EOS_IDLING = 4
    EOS_WARMUP = 5
    EOS_RUNNING = 6
    EOS_COOLDOWN = 7
    EOS_STOPPING = 8
    EOS_DISABLED = 9

tms.EngineOperatingState = tms_EngineOperatingState

@idl.struct
class tms_EngineState:
    operatingState: tms.EngineOperatingState = tms.EngineOperatingState.EOS_UNKNOWN
    oilPressure: idl.float32 = 0.0
    coolantTemperature: idl.float32 = 0.0
    speed: idl.float32 = 0.0
    wetStack: Optional[idl.float32] = None
    engineRuntime: idl.float32 = 0.0
    fuelConsumptionRate: Optional[idl.float32] = None

tms.EngineState = tms_EngineState

@idl.struct
class tms_FuelInfo:
    maxFuelLevel: idl.float32 = 0.0
    lowFuelLevelCutoff: idl.float32 = 0.0

tms.FuelInfo = tms_FuelInfo

@idl.struct
class tms_FuelState:
    fuelLevel: idl.float32 = 0.0
    fuelPumpRunning: bool = False

tms.FuelState = tms_FuelState

@idl.struct
class tms_LoadStepResponse:
    loadStepLowRealPower: idl.float32 = 0.0
    loadStepHighRealPower: idl.float32 = 0.0
    loadStepLowReactivePower: idl.float32 = 0.0
    loadStepHighReactivePower: idl.float32 = 0.0
    loadAcceptanceFrequency: tms.Curve2D = field(default_factory = tms.Curve2D)
    loadAcceptanceVoltage: tms.Curve2D = field(default_factory = tms.Curve2D)
    loadAcceptanceRealPower: tms.Curve2D = field(default_factory = tms.Curve2D)
    loadAcceptanceReactivePower: tms.Curve2D = field(default_factory = tms.Curve2D)
    loadRejectionFrequency: tms.Curve2D = field(default_factory = tms.Curve2D)
    loadRejectionVoltage: tms.Curve2D = field(default_factory = tms.Curve2D)
    loadRejectionRealPower: tms.Curve2D = field(default_factory = tms.Curve2D)
    loadRejectionReactivePower: tms.Curve2D = field(default_factory = tms.Curve2D)

tms.LoadStepResponse = tms_LoadStepResponse

tms_LoadStepResponseSequence_MINLEN = 0

tms.LoadStepResponseSequence_MINLEN = tms_LoadStepResponseSequence_MINLEN

tms_LoadStepResponseSequence_MAXLEN = 16

tms.LoadStepResponseSequence_MAXLEN = tms_LoadStepResponseSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.LoadStepResponseSequence_MAXLEN),]
)
class tms_LoadStepResponseSequence:
    value: Sequence[tms.LoadStepResponse] = field(default_factory = list)

tms.LoadStepResponseSequence = tms_LoadStepResponseSequence

@idl.struct
class tms_LoadSharingInfo:
    portNumber: idl.int32 = 0
    supportsDroop: bool = False
    supportsMultiSegmentDroop: bool = False
    supportsConstantPower: bool = False
    minRealPower: idl.float32 = 0.0
    maxRealPower: idl.float32 = 0.0
    maxOverloadRealPower: Optional[tms.Curve2D] = None
    minReactivePower: idl.float32 = 0.0
    maxReactivePower: idl.float32 = 0.0
    maxApparentPower: idl.float32 = 0.0
    powerFactor: idl.float32 = 0.0
    loadResponse: Optional[tms.LoadStepResponseSequence] = None

tms.LoadSharingInfo = tms_LoadSharingInfo

tms_LoadSharingInfoSequence_MINLEN = 1

tms.LoadSharingInfoSequence_MINLEN = tms_LoadSharingInfoSequence_MINLEN

tms_LoadSharingInfoSequence_MAXLEN = tms.MAX_PORTS

tms.LoadSharingInfoSequence_MAXLEN = tms_LoadSharingInfoSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.LoadSharingInfoSequence_MAXLEN),]
)
class tms_LoadSharingInfoSequence:
    value: Sequence[tms.LoadSharingInfo] = field(default_factory = list)

tms.LoadSharingInfoSequence = tms_LoadSharingInfoSequence

@idl.struct
class tms_StorageInfo:
    features: tms.StorageFeatureSequence = field(default_factory = tms.StorageFeatureSequence)
    maxChargeEnergy: idl.float32 = 0.0
    loadSharing: tms.LoadSharingInfo = field(default_factory = tms.LoadSharingInfo)
    supportedEnergyStartStopLevels: tms.EnergyStartStopLevelSequence = field(default_factory = tms.EnergyStartStopLevelSequence)

tms.StorageInfo = tms_StorageInfo

@idl.struct
class tms_ControlHardwareInfo:
    hasRealtimeClock: bool = False
    minTemperature: idl.float32 = 0.0
    maxTemperature: idl.float32 = 0.0
    numNetworkPorts: idl.uint16 = 0

tms.ControlHardwareInfo = tms_ControlHardwareInfo

@idl.struct(
    member_annotations = {
        'deviceId': [idl.key, idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_ControlHardwareUpdate:
    deviceId: str = ""
    timestamp: tms.ClockMonotonic = field(default_factory = tms.ClockMonotonic)
    processorUsage: idl.float32 = 0.0
    memoryUsage: idl.float32 = 0.0
    networkUsage: idl.float32 = 0.0
    storageUsage: idl.float32 = 0.0
    temperature: idl.float32 = 0.0

tms.ControlHardwareUpdate = tms_ControlHardwareUpdate

@idl.struct
class tms_PowerHardwareInfo:
    engine: Optional[tms.EngineInfo] = None
    fuel: Optional[tms.FuelInfo] = None
    generator: Optional[tms.GeneratorInfo] = None
    energyStorage: Optional[tms.EnergyStorageInfo] = None
    powerElectronics: Optional[tms.PowerElectronicsInfo] = None
    thermal: Optional[tms.ThermalInfo] = None
    synchronousMachineModel: Optional[tms.SynchronousMachineCoefficients] = None

tms.PowerHardwareInfo = tms_PowerHardwareInfo

@idl.struct(
    member_annotations = {
        'deviceId': [idl.key, idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_PowerHardwareUpdate:
    deviceId: str = ""
    timestamp: tms.ClockMonotonic = field(default_factory = tms.ClockMonotonic)
    engine: Optional[tms.EngineState] = None
    fuel: Optional[tms.FuelState] = None
    generator: Optional[tms.GeneratorState] = None
    energyStorage: Optional[tms.EnergyStorageState] = None
    powerElectronics: Optional[tms.PowerElectronicsState] = None
    thermal: Optional[tms.ThermalState] = None

tms.PowerHardwareUpdate = tms_PowerHardwareUpdate

@idl.struct(
    member_annotations = {
        'hint': [idl.bound(tms.String32_MAXLEN)],
    }
)
class tms_DiagnosticTroubleCode:
    portNumber: Optional[idl.int32] = None
    suspectParameter: idl.uint32 = 0
    failureMode: tms.FailureModeIndicator = tms.FailureModeIndicator.FMI_UNKNOWN
    occurrenceCount: idl.uint32 = 0
    timeRaised: tms.ClockMonotonic = field(default_factory = tms.ClockMonotonic)
    severity: tms.DtcSeverity = tms.DtcSeverity.SEV_UNKNOWN
    estimateTime: Optional[tms.ClockMonotonic] = None
    estimateSeverity: Optional[tms.DtcSeverity] = None
    hint: str = ""

tms.DiagnosticTroubleCode = tms_DiagnosticTroubleCode

tms_DiagnosticTroubleCodeSequence_MINLEN = 0

tms.DiagnosticTroubleCodeSequence_MINLEN = tms_DiagnosticTroubleCodeSequence_MINLEN

tms_DiagnosticTroubleCodeSequence_MAXLEN = 64

tms.DiagnosticTroubleCodeSequence_MAXLEN = tms_DiagnosticTroubleCodeSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.DiagnosticTroubleCodeSequence_MAXLEN),]
)
class tms_DiagnosticTroubleCodeSequence:
    value: Sequence[tms.DiagnosticTroubleCode] = field(default_factory = list)

tms.DiagnosticTroubleCodeSequence = tms_DiagnosticTroubleCodeSequence

@idl.struct
class tms_ClockRealtime:
    epoch: idl.uint16 = 0
    seconds: idl.uint32 = 0
    nanoseconds: idl.uint32 = 0

tms.ClockRealtime = tms_ClockRealtime

@idl.enum
class tms_ClockSource(IntEnum):
    CLOCK_UNKNOWN = 0
    CLOCK_ATOMIC = 1
    CLOCK_GPS = 2
    CLOCK_RADIO = 3
    CLOCK_PTP = 4
    CLOCK_NTP = 5
    CLOCK_HAND = 6
    CLOCK_OTHER = 7
    CLOCK_INTERNAL = 8

tms.ClockSource = tms_ClockSource

@idl.struct(
    member_annotations = {
        'deviceId': [idl.key, idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_ClockState:
    deviceId: str = ""
    monotonic: tms.ClockMonotonic = field(default_factory = tms.ClockMonotonic)
    monotonicPersistence: tms.ClockMonotonicPersistenceType = tms.ClockMonotonicPersistenceType.CMPT_UNKNOWN
    realtime: tms.ClockRealtime = field(default_factory = tms.ClockRealtime)
    realtimeSource: tms.ClockSource = tms.ClockSource.CLOCK_UNKNOWN
    realtimeSetTime: tms.ClockRealtime = field(default_factory = tms.ClockRealtime)

tms.ClockState = tms_ClockState

tms_RequestSequence = idl.uint64

tms.RequestSequence = tms_RequestSequence

@idl.struct(
    member_annotations = {
        'requestingDeviceId': [idl.bound(tms.Identity_MAXLEN)],
        'targetDeviceId': [idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_DeviceConfigRequest:
    requestingDeviceId: str = ""
    targetDeviceId: str = ""
    config: tms.ConfigId = tms.ConfigId.CONFIG_UNKNOWN

tms.DeviceConfigRequest = tms_DeviceConfigRequest

@idl.struct(
    member_annotations = {
        'requestingDeviceId': [idl.bound(tms.Identity_MAXLEN)],
        'targetDeviceId': [idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_DeviceRequest:
    requestingDeviceId: str = ""
    targetDeviceId: str = ""

tms.DeviceRequest = tms_DeviceRequest

@idl.struct(
    member_annotations = {
        'deviceId': [idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_PowerPortId:
    deviceId: str = ""
    portNumber: idl.int32 = 0

tms.PowerPortId = tms_PowerPortId

@idl.struct
class tms_PowerConnectorInfo:
    features: tms.PowerConnectorFeatureSequence = field(default_factory = tms.PowerConnectorFeatureSequence)
    physicalType: tms.PowerConnectorType = tms.PowerConnectorType.CONNECTOR_UNKNOWN
    polarity: tms.PowerConnectorPolarity = tms.PowerConnectorPolarity.POLARITY_UNKNOWN

tms.PowerConnectorInfo = tms_PowerConnectorInfo

@idl.struct
class tms_PowerSwitchInfo:
    features: tms.PowerSwitchFeatureSequence = field(default_factory = tms.PowerSwitchFeatureSequence)
    interruptAmperage: idl.float32 = 0.0

tms.PowerSwitchInfo = tms_PowerSwitchInfo

@idl.struct
class tms_PowerPortInfo:
    portNumber: idl.int32 = 0
    wiring: tms.CircuitWiring = tms.CircuitWiring.WIRING_UNKNOWN
    directionality: tms.PowerPortDirectionality = tms.PowerPortDirectionality.PPD_UNKNOWN
    hasSwitch: bool = False
    hasExternalMeter: bool = False
    hasInternalMeter: bool = False
    hasSummaryMeasurementUpdate: bool = False
    minAmperage: idl.float32 = 0.0
    maxAmperage: idl.float32 = 0.0
    shortCircuitAmperage: idl.float32 = 0.0
    minVoltage: idl.float32 = 0.0
    maxVoltage: idl.float32 = 0.0
    minFrequency: Optional[idl.float32] = None
    maxFrequency: Optional[idl.float32] = None
    connectorInfo: tms.PowerConnectorInfo = field(default_factory = tms.PowerConnectorInfo)
    switchInfo: Optional[tms.PowerSwitchInfo] = None

tms.PowerPortInfo = tms_PowerPortInfo

tms_PowerPortInfoSequence_MINLEN = 0

tms.PowerPortInfoSequence_MINLEN = tms_PowerPortInfoSequence_MINLEN

tms_PowerPortInfoSequence_MAXLEN = tms.MAX_PORTS

tms.PowerPortInfoSequence_MAXLEN = tms_PowerPortInfoSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.PowerPortInfoSequence_MAXLEN),]
)
class tms_PowerPortInfoSequence:
    value: Sequence[tms.PowerPortInfo] = field(default_factory = list)

tms.PowerPortInfoSequence = tms_PowerPortInfoSequence

@idl.enum
class tms_PowerSwitchTransitionCode(IntEnum):
    PSTC_UNKNOWN = 0
    PSTC_NONE = 1
    PSTC_IN_PROGRESS = 2
    PSTC_PENDING_SYNC = 3
    PSTC_PENDING_SWITCH_CONDITIONS = 4
    PSTC_PENDING_INTERLOCK = 5
    PSTC_COMPLETE = 6
    PSTC_MANUAL_OVERRIDE = 7
    PSTC_AUTO_OVERRIDE = 8
    PSTC_AUTO_LOCK = 9
    PSTC_MALFUNCTION = 10

tms.PowerSwitchTransitionCode = tms_PowerSwitchTransitionCode

@idl.struct(
    member_annotations = {
        'presentContinuityActor': [idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_PowerSwitchStatus:
    presentContinuity: tms.CircuitContinuity = tms.CircuitContinuity.CC_UNKNOWN
    futureContinuity: tms.CircuitContinuity = tms.CircuitContinuity.CC_UNKNOWN
    requestLock: bool = False
    presentContinuityReason: tms.PowerSwitchReason = tms.PowerSwitchReason.PSR_UNKNOWN
    presentContinuityActor: Optional[str] = None
    futureContinuityReason: tms.PowerSwitchTransitionCode = tms.PowerSwitchTransitionCode.PSTC_UNKNOWN

tms.PowerSwitchStatus = tms_PowerSwitchStatus

@idl.struct
class tms_GroundingCircuitStatus:
    groundNumber: idl.int32 = 0
    control: Optional[tms.PowerSwitchStatus] = None
    pulse: Optional[tms.PowerSwitchStatus] = None
    faultDetection: tms.GroundFaultDetection = tms.GroundFaultDetection.GFD_UNKNOWN

tms.GroundingCircuitStatus = tms_GroundingCircuitStatus

tms_GroundingCircuitStateSequence_MINLEN = 0

tms.GroundingCircuitStateSequence_MINLEN = tms_GroundingCircuitStateSequence_MINLEN

tms_GroundingCircuitStateSequence_MAXLEN = tms.MAX_GROUNDING_CIRCUITS

tms.GroundingCircuitStateSequence_MAXLEN = tms_GroundingCircuitStateSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.GroundingCircuitStateSequence_MAXLEN),]
)
class tms_GroundingCircuitStateSequence:
    value: Sequence[tms.GroundingCircuitStatus] = field(default_factory = list)

tms.GroundingCircuitStateSequence = tms_GroundingCircuitStateSequence

@idl.struct(
    member_annotations = {
        'deviceId': [idl.key, idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_GroundingCircuitState:
    deviceId: str = ""
    grounds: tms.GroundingCircuitStateSequence = field(default_factory = tms.GroundingCircuitStateSequence)

tms.GroundingCircuitState = tms_GroundingCircuitState

@idl.struct
class tms_GroundingInfo:
    groundNumber: idl.int32 = 0
    groundType: tms.GroundingDesignType = tms.GroundingDesignType.GROUNDING_UNKNOWN
    protectedPorts: tms.PowerPortNumberSequence = field(default_factory = tms.PowerPortNumberSequence)
    controlSwitchFeatures: tms.PowerSwitchFeatureSequence = field(default_factory = tms.PowerSwitchFeatureSequence)
    pulseSwitchFeatures: tms.PowerSwitchFeatureSequence = field(default_factory = tms.PowerSwitchFeatureSequence)

tms.GroundingInfo = tms_GroundingInfo

tms_GroundingInfoSequence_MINLEN = 0

tms.GroundingInfoSequence_MINLEN = tms_GroundingInfoSequence_MINLEN

tms_GroundingInfoSequence_MAXLEN = tms.MAX_GROUNDING_CIRCUITS

tms.GroundingInfoSequence_MAXLEN = tms_GroundingInfoSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.GroundingInfoSequence_MAXLEN),]
)
class tms_GroundingInfoSequence:
    value: Sequence[tms.GroundingInfo] = field(default_factory = list)

tms.GroundingInfoSequence = tms_GroundingInfoSequence

tms_MAX_PARAMETERS = 128

tms.MAX_PARAMETERS = tms_MAX_PARAMETERS

@idl.struct(
    member_annotations = {
        'name': [idl.bound(tms.String1_32_MAXLEN)],
        'units': [idl.bound(tms.String16_MAXLEN)],
    }
)
class tms_ParameterMetadata:
    name: str = ""
    units: str = ""
    nominalMinValue: idl.float32 = 0.0
    nominalMaxValue: idl.float32 = 0.0
    hardMinValue: idl.float32 = 0.0
    hardMaxValue: idl.float32 = 0.0
    resolution: idl.float32 = 0.0
    enumLabels: tms.EnumLabelSequence = field(default_factory = tms.EnumLabelSequence)

tms.ParameterMetadata = tms_ParameterMetadata

@idl.struct(
    member_annotations = {
        'name': [idl.bound(tms.String1_32_MAXLEN)],
    }
)
class tms_ParameterValue:
    name: str = ""
    value: idl.float32 = 0.0

tms.ParameterValue = tms_ParameterValue

tms_ParameterValueSequence_MINLEN = 0

tms.ParameterValueSequence_MINLEN = tms_ParameterValueSequence_MINLEN

tms_ParameterValueSequence_MAXLEN = 128

tms.ParameterValueSequence_MAXLEN = tms_ParameterValueSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.ParameterValueSequence_MAXLEN),]
)
class tms_ParameterValueSequence:
    value: Sequence[tms.ParameterValue] = field(default_factory = list)

tms.ParameterValueSequence = tms_ParameterValueSequence

tms_ParameterMetadataSequence_MINLEN = 0

tms.ParameterMetadataSequence_MINLEN = tms_ParameterMetadataSequence_MINLEN

tms_ParameterMetadataSequence_MAXLEN = 128

tms.ParameterMetadataSequence_MAXLEN = tms_ParameterMetadataSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.ParameterMetadataSequence_MAXLEN),]
)
class tms_ParameterMetadataSequence:
    value: Sequence[tms.ParameterMetadata] = field(default_factory = list)

tms.ParameterMetadataSequence = tms_ParameterMetadataSequence

@idl.struct(
    member_annotations = {
        'cableId': [idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_PowerPortStatus:
    portNumber: idl.int32 = 0
    cableStatus: tms.CableSenseStatus = tms.CableSenseStatus.CS_UNKNOWN
    cableId: Optional[str] = None
    connection: Optional[tms.PowerPortId] = None
    switchStatus: Optional[tms.PowerSwitchStatus] = None

tms.PowerPortStatus = tms_PowerPortStatus

tms_PowerPortStatusSequence_MINLEN = 0

tms.PowerPortStatusSequence_MINLEN = tms_PowerPortStatusSequence_MINLEN

tms_PowerPortStatusSequence_MAXLEN = tms.MAX_PORTS

tms.PowerPortStatusSequence_MAXLEN = tms_PowerPortStatusSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.PowerPortStatusSequence_MAXLEN),]
)
class tms_PowerPortStatusSequence:
    value: Sequence[tms.PowerPortStatus] = field(default_factory = list)

tms.PowerPortStatusSequence = tms_PowerPortStatusSequence

@idl.struct
class tms_OperatorPriority:
    priorityType: tms.OperatorPriorityType = tms.OperatorPriorityType.OPT_UNKNOWN
    numericRank: idl.int16 = 0

tms.OperatorPriority = tms_OperatorPriority

@idl.struct(
    member_annotations = {
        'deviceId': [idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_PowerPortIntent:
    deviceId: str = ""
    portNumber: idl.int32 = 0
    priority: tms.OperatorPriority = field(default_factory = tms.OperatorPriority)

tms.PowerPortIntent = tms_PowerPortIntent

@idl.struct
class tms_PowerConnectionId:
    portA: tms.PowerPortId = field(default_factory = tms.PowerPortId)
    portB: Optional[tms.PowerPortId] = None

tms.PowerConnectionId = tms_PowerConnectionId

@idl.struct
class tms_SourceInfo:
    features: tms.SourceFeatureSequence = field(default_factory = tms.SourceFeatureSequence)
    loadSharing: tms.LoadSharingInfo = field(default_factory = tms.LoadSharingInfo)
    supportedEnergyStartStopLevels: tms.EnergyStartStopLevelSequence = field(default_factory = tms.EnergyStartStopLevelSequence)

tms.SourceInfo = tms_SourceInfo

@idl.struct(
    member_annotations = {
        'deviceId': [idl.key, idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_ActiveDiagnosticState:
    deviceId: str = ""
    codes: tms.DiagnosticTroubleCodeSequence = field(default_factory = tms.DiagnosticTroubleCodeSequence)
    overflow: idl.uint32 = 0

tms.ActiveDiagnosticState = tms_ActiveDiagnosticState

@idl.struct(
    member_annotations = {
        'relatedRequestId': [idl.key, ],
        'authorizationDeviceId': [idl.bound(tms.Identity_MAXLEN)],
        'energizeRequestingDeviceId': [idl.bound(tms.Identity_MAXLEN)],
        'userId': [idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_AuthorizationToEnergizeResult:
    relatedRequestId: tms.GridRequest = field(default_factory = tms.GridRequest)
    relatedSequenceId: idl.uint64 = 0
    authorizationDeviceId: Optional[str] = None
    energizeRequestingDeviceId: str = ""
    energizeSequenceId: idl.uint64 = 0
    userId: Optional[str] = None
    accepted: bool = False
    responseReceived: bool = False
    energizeRequestValid: bool = False
    authorizationReviewValid: bool = False
    outcomeMonotonic: tms.ClockMonotonic = field(default_factory = tms.ClockMonotonic)
    outcomeRealtime: tms.ClockRealtime = field(default_factory = tms.ClockRealtime)

tms.AuthorizationToEnergizeResult = tms_AuthorizationToEnergizeResult

@idl.struct(
    member_annotations = {
        'requestId': [idl.key, ],
        'energizeRequestingDeviceId': [idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_AuthorizationToEnergizeRequest:
    requestId: tms.GridRequest = field(default_factory = tms.GridRequest)
    sequenceId: idl.uint64 = 0
    energizeRequestingDeviceId: str = ""
    energizeSequenceId: idl.uint64 = 0
    powerPorts: tms.PowerPortNumberSequence = field(default_factory = tms.PowerPortNumberSequence)

tms.AuthorizationToEnergizeRequest = tms_AuthorizationToEnergizeRequest

@idl.struct(
    member_annotations = {
        'deviceId': [idl.bound(tms.Identity_MAXLEN)],
        'relatedRequestId': [idl.key, ],
        'energizeRequestingDeviceId': [idl.bound(tms.Identity_MAXLEN)],
        'userId': [idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_AuthorizationToEnergizeReply:
    deviceId: str = ""
    relatedRequestId: tms.GridRequest = field(default_factory = tms.GridRequest)
    relatedSequenceId: idl.uint64 = 0
    energizeRequestingDeviceId: str = ""
    energizeSequenceId: idl.uint64 = 0
    powerPorts: tms.PowerPortNumberSequence = field(default_factory = tms.PowerPortNumberSequence)
    userId: Optional[str] = None
    accept: bool = False
    deny: bool = False
    timeOfReview: tms.ClockRealtime = field(default_factory = tms.ClockRealtime)

tms.AuthorizationToEnergizeReply = tms_AuthorizationToEnergizeReply

@idl.struct(
    member_annotations = {
        'requestId': [idl.key, ],
        'nickname': [idl.bound(tms.String32_MAXLEN)],
    }
)
class tms_IdentityNicknameRequest:
    requestId: tms.DeviceRequest = field(default_factory = tms.DeviceRequest)
    sequenceId: idl.uint64 = 0
    nickname: str = ""

tms.IdentityNicknameRequest = tms_IdentityNicknameRequest

@idl.struct(
    member_annotations = {
        'deviceId': [idl.key, idl.bound(tms.Identity_MAXLEN)],
        'mimeType': [idl.bound(tms.String32_MAXLEN)],
    }
)
class tms_DeviceIcon:
    deviceId: str = ""
    mimeType: str = ""
    data: tms.OctetSequence = field(default_factory = tms.OctetSequence)

tms.DeviceIcon = tms_DeviceIcon

@idl.struct(
    member_annotations = {
        'deviceId': [idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_DeviceIntent:
    deviceId: str = ""
    battleShort: bool = False
    priority: tms.OperatorPriority = field(default_factory = tms.OperatorPriority)

tms.DeviceIntent = tms_DeviceIntent

tms_DeviceIntentSequence_MINLEN = 0

tms.DeviceIntentSequence_MINLEN = tms_DeviceIntentSequence_MINLEN

tms_DeviceIntentSequence_MAXLEN = 200

tms.DeviceIntentSequence_MAXLEN = tms_DeviceIntentSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.DeviceIntentSequence_MAXLEN),]
)
class tms_DeviceIntentSequence:
    value: Sequence[tms.DeviceIntent] = field(default_factory = list)

tms.DeviceIntentSequence = tms_DeviceIntentSequence

@idl.struct(
    member_annotations = {
        'requestId': [idl.key, ],
    }
)
class tms_ControlParameterRequest:
    requestId: tms.DeviceConfigRequest = field(default_factory = tms.DeviceConfigRequest)
    sequenceId: idl.uint64 = 0
    parameters: tms.ParameterValueSequence = field(default_factory = tms.ParameterValueSequence)

tms.ControlParameterRequest = tms_ControlParameterRequest

@idl.struct(
    member_annotations = {
        'deviceId': [idl.key, idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_ControlParameterState:
    deviceId: str = ""
    config: tms.ConfigId = tms.ConfigId.CONFIG_UNKNOWN
    parameters: tms.ParameterValueSequence = field(default_factory = tms.ParameterValueSequence)

tms.ControlParameterState = tms_ControlParameterState

@idl.struct(
    member_annotations = {
        'deviceId': [idl.key, idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_PowerPortState:
    deviceId: str = ""
    powerPorts: tms.PowerPortStatusSequence = field(default_factory = tms.PowerPortStatusSequence)

tms.PowerPortState = tms_PowerPortState

@idl.struct
class tms_DistributionInfo:
    features: tms.DistributionFeatureSequence = field(default_factory = tms.DistributionFeatureSequence)

tms.DistributionInfo = tms_DistributionInfo

@idl.struct(
    member_annotations = {
        'deviceId': [idl.key, idl.bound(tms.Identity_MAXLEN)],
        'identityId': [idl.key, idl.bound(tms.Identity_MAXLEN)],
        'nickname': [idl.bound(tms.String32_MAXLEN)],
    }
)
class tms_IdentityNicknameState:
    deviceId: str = ""
    identityId: str = ""
    nickname: str = ""

tms.IdentityNicknameState = tms_IdentityNicknameState

@idl.struct(
    member_annotations = {
        'requestId': [idl.key, ],
    }
)
class tms_GroundingCircuitRequest:
    requestId: tms.DeviceConfigRequest = field(default_factory = tms.DeviceConfigRequest)
    sequenceId: idl.uint64 = 0
    groundNumber: idl.int32 = 0
    control: tms.DesiredCircuitContinuity = tms.DesiredCircuitContinuity.DCC_UNKNOWN
    pulse: tms.DesiredCircuitContinuity = tms.DesiredCircuitContinuity.DCC_UNKNOWN

tms.GroundingCircuitRequest = tms_GroundingCircuitRequest

@idl.struct(
    member_annotations = {
        'deviceId': [idl.key, idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_Heartbeat:
    deviceId: str = ""
    sequenceNumber: idl.uint32 = 0

tms.Heartbeat = tms_Heartbeat

@idl.struct
class tms_LoadInfo:
    features: tms.LoadFeatureSequence = field(default_factory = tms.LoadFeatureSequence)
    maxRealPower: idl.float32 = 0.0
    maxReactivePower: idl.float32 = 0.0

tms.LoadInfo = tms_LoadInfo

@idl.struct(
    member_annotations = {
        'deviceId': [idl.key, idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_MetricParameterState:
    deviceId: str = ""
    metricParameters: tms.ParameterValueSequence = field(default_factory = tms.ParameterValueSequence)

tms.MetricParameterState = tms_MetricParameterState

@idl.struct
class tms_LoadSharingIntent:
    increaseCapacityThreshold: idl.float32 = 0.0
    decreaseCapacityThreshold: idl.float32 = 0.0
    decreaseCapacityDuration: idl.float32 = 0.0
    priorityLoadCurtailmentAllowed: tms.OperatorPriority = field(default_factory = tms.OperatorPriority)
    priorityPowerPortSheddingAllowed: tms.OperatorPriority = field(default_factory = tms.OperatorPriority)

tms.LoadSharingIntent = tms_LoadSharingIntent

@idl.struct
class tms_StorageIntent:
    reservedStateOfCharge: idl.float32 = 0.0
    timeTillReservedSoc: tms.ClockMonotonic = field(default_factory = tms.ClockMonotonic)
    priorityLoadSheddingAllowed: tms.OperatorPriority = field(default_factory = tms.OperatorPriority)
    priorityPowerPortSheddingAllowed: tms.OperatorPriority = field(default_factory = tms.OperatorPriority)
    reservedDeviceIds: tms.IdentitySequence = field(default_factory = tms.IdentitySequence)

tms.StorageIntent = tms_StorageIntent

@idl.struct
class tms_MicrogridIntent:
    operatingModeValue: tms.OperatingMode = tms.OperatingMode.OPM_UNKNOWN
    loadSharingIntentValue: tms.LoadSharingIntent = field(default_factory = tms.LoadSharingIntent)
    storageIntentValue: Optional[tms.StorageIntent] = None

tms.MicrogridIntent = tms_MicrogridIntent

tms_PowerPortIntentSequence_MINLEN = 0

tms.PowerPortIntentSequence_MINLEN = tms_PowerPortIntentSequence_MINLEN

tms_PowerPortIntentSequence_MAXLEN = 4000

tms.PowerPortIntentSequence_MAXLEN = tms_PowerPortIntentSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.PowerPortIntentSequence_MAXLEN),]
)
class tms_PowerPortIntentSequence:
    value: Sequence[tms.PowerPortIntent] = field(default_factory = list)

tms.PowerPortIntentSequence = tms_PowerPortIntentSequence

@idl.struct
class tms_OperatorIntent:
    requestId: tms.GridRequest = field(default_factory = tms.GridRequest)
    intentType: tms.OperatorIntentType = tms.OperatorIntentType.OIT_UNKNOWN
    microgrid: tms.MicrogridIntent = field(default_factory = tms.MicrogridIntent)
    devices: tms.DeviceIntentSequence = field(default_factory = tms.DeviceIntentSequence)
    powerPorts: tms.PowerPortIntentSequence = field(default_factory = tms.PowerPortIntentSequence)

tms.OperatorIntent = tms_OperatorIntent

@idl.struct(
    member_annotations = {
        'requestId': [idl.key, ],
    }
)
class tms_OperatorIntentRequest:
    requestId: tms.GridRequest = field(default_factory = tms.GridRequest)
    sequenceId: idl.uint64 = 0
    desiredOperatorIntent: tms.OperatorIntent = field(default_factory = tms.OperatorIntent)

tms.OperatorIntentRequest = tms_OperatorIntentRequest

@idl.struct(
    member_annotations = {
        'deviceId': [idl.key, idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_OperatorIntentState:
    deviceId: str = ""
    activeOperatorIntent: tms.OperatorIntent = field(default_factory = tms.OperatorIntent)

tms.OperatorIntentState = tms_OperatorIntentState

@idl.struct(
    member_annotations = {
        'requestingDeviceId': [idl.bound(tms.Identity_MAXLEN)],
        'targetDeviceId': [idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_PowerPortConfigRequest:
    requestingDeviceId: str = ""
    targetDeviceId: str = ""
    config: tms.ConfigId = tms.ConfigId.CONFIG_UNKNOWN
    portNumber: idl.int32 = 0

tms.PowerPortConfigRequest = tms_PowerPortConfigRequest

@idl.struct(
    member_annotations = {
        'detectionSource': [idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_PowerConnection:
    connectionId: tms.PowerConnectionId = field(default_factory = tms.PowerConnectionId)
    detectionType: tms.PowerConnectionDetectionType = tms.PowerConnectionDetectionType.PCDT_UNKNOWN
    detectionSource: str = ""
    detectionConfidence: idl.float32 = 0.0

tms.PowerConnection = tms_PowerConnection

tms_PowerConnectionSequence_MINLEN = 0

tms.PowerConnectionSequence_MINLEN = tms_PowerConnectionSequence_MINLEN

tms_PowerConnectionSequence_MAXLEN = 200

tms.PowerConnectionSequence_MAXLEN = tms_PowerConnectionSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.PowerConnectionSequence_MAXLEN),]
)
class tms_PowerConnectionSequence:
    value: Sequence[tms.PowerConnection] = field(default_factory = list)

tms.PowerConnectionSequence = tms_PowerConnectionSequence

@idl.struct(
    member_annotations = {
        'deviceId': [idl.key, idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_PowerConnectionState:
    deviceId: str = ""
    connections: tms.PowerConnectionSequence = field(default_factory = tms.PowerConnectionSequence)

tms.PowerConnectionState = tms_PowerConnectionState

@idl.struct
class tms_PowerSwitchCloseConditions:
    minVoltage: idl.float32 = 0.0
    maxVoltage: idl.float32 = 0.0
    minFrequency: idl.float32 = 0.0
    maxFrequency: idl.float32 = 0.0

tms.PowerSwitchCloseConditions = tms_PowerSwitchCloseConditions

@idl.struct(
    member_annotations = {
        'requestId': [idl.key, ],
    }
)
class tms_PowerSwitchRequest:
    requestId: tms.PowerPortConfigRequest = field(default_factory = tms.PowerPortConfigRequest)
    sequenceId: idl.uint64 = 0
    continuity: tms.DesiredCircuitContinuity = tms.DesiredCircuitContinuity.DCC_UNKNOWN
    switchConditions: Optional[tms.PowerSwitchCloseConditions] = None

tms.PowerSwitchRequest = tms_PowerSwitchRequest

@idl.struct(
    member_annotations = {
        'dataModelVersion': [idl.bound(tms.String32_MAXLEN)],
    }
)
class tms_TopicInfo:
    dataModelVersion: str = ""
    publishedConditionalTopics: tms.TopicList = field(default_factory = tms.TopicList)
    publishedOptionalTopics: tms.TopicList = field(default_factory = tms.TopicList)
    supportedRequestTopics: tms.TopicList = field(default_factory = tms.TopicList)
    extensionTopics: Optional[tms.TopicList] = None

tms.TopicInfo = tms_TopicInfo

@idl.struct
class tms_ActiveConversionInfo:
    loadSharing: tms.LoadSharingInfoSequence = field(default_factory = tms.LoadSharingInfoSequence)

tms.ActiveConversionInfo = tms_ActiveConversionInfo

@idl.struct
class tms_ConversionTapInfo:
    tapId: idl.int32 = 0
    phaseShift: idl.float32 = 0.0
    voltageRatio: idl.float32 = 0.0

tms.ConversionTapInfo = tms_ConversionTapInfo

tms_ConversionTapInfoSequence_MINLEN = 1

tms.ConversionTapInfoSequence_MINLEN = tms_ConversionTapInfoSequence_MINLEN

tms_ConversionTapInfoSequence_MAXLEN = tms.MAX_TAPS

tms.ConversionTapInfoSequence_MAXLEN = tms_ConversionTapInfoSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.ConversionTapInfoSequence_MAXLEN),]
)
class tms_ConversionTapInfoSequence:
    value: Sequence[tms.ConversionTapInfo] = field(default_factory = list)

tms.ConversionTapInfoSequence = tms_ConversionTapInfoSequence

@idl.struct
class tms_PowerPortConversionInfo:
    portNumber: idl.int32 = 0
    conversionTaps: tms.ConversionTapInfoSequence = field(default_factory = tms.ConversionTapInfoSequence)
    changeUnderLoad: bool = False

tms.PowerPortConversionInfo = tms_PowerPortConversionInfo

tms_PowerPortConversionInfoSequence_MINLEN = 1

tms.PowerPortConversionInfoSequence_MINLEN = tms_PowerPortConversionInfoSequence_MINLEN

tms_PowerPortConversionInfoSequence_MAXLEN = tms.MAX_PORTS

tms.PowerPortConversionInfoSequence_MAXLEN = tms_PowerPortConversionInfoSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.PowerPortConversionInfoSequence_MAXLEN),]
)
class tms_PowerPortConversionInfoSequence:
    value: Sequence[tms.PowerPortConversionInfo] = field(default_factory = list)

tms.PowerPortConversionInfoSequence = tms_PowerPortConversionInfoSequence

@idl.struct
class tms_PassiveConversionInfo:
    portConversion: tms.PowerPortConversionInfoSequence = field(default_factory = tms.PowerPortConversionInfoSequence)

tms.PassiveConversionInfo = tms_PassiveConversionInfo

@idl.struct
class tms_ConversionInfo:
    features: tms.ConversionFeatureSequence = field(default_factory = tms.ConversionFeatureSequence)
    activeConversion: Optional[tms.ActiveConversionInfo] = None
    passiveConversion: Optional[tms.PassiveConversionInfo] = None

tms.ConversionInfo = tms_ConversionInfo

@idl.struct(
    member_annotations = {
        'manufacturerName': [idl.bound(tms.String32_MAXLEN)],
        'modelName': [idl.bound(tms.String32_MAXLEN)],
        'modelNumber': [idl.bound(tms.String32_MAXLEN)],
        'serialNumber': [idl.bound(tms.String32_MAXLEN)],
        'softwareVersion': [idl.bound(tms.String32_MAXLEN)],
        'platformId': [idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_ProductInfo:
    nsn: tms.NatoStockNumber = field(default_factory = tms.NatoStockNumber)
    gtin: tms.GlobalTradeItemNumber = field(default_factory = tms.GlobalTradeItemNumber)
    manufacturerName: str = ""
    modelName: str = ""
    modelNumber: str = ""
    serialNumber: str = ""
    softwareVersion: str = ""
    platformId: Optional[str] = None

tms.ProductInfo = tms_ProductInfo

@idl.struct
class tms_MicrogridDashboardInfo:
    features: tms.MicrogridDashboardFeatureSequence = field(default_factory = tms.MicrogridDashboardFeatureSequence)

tms.MicrogridDashboardInfo = tms_MicrogridDashboardInfo

@idl.struct
class tms_MicrogridControllerInfo:
    features: tms.MicrogridControllerFeatureSequence = field(default_factory = tms.MicrogridControllerFeatureSequence)

tms.MicrogridControllerInfo = tms_MicrogridControllerInfo

@idl.struct(
    member_annotations = {
        'reason': [idl.bound(tms.String32_MAXLEN)],
    }
)
class tms_ReplyStatus:
    code: tms.ReplyCode = tms.ReplyCode.REPLY_UNKNOWN
    reason: str = ""

tms.ReplyStatus = tms_ReplyStatus

@idl.struct(
    member_annotations = {
        'requestingDeviceId': [idl.key, idl.bound(tms.Identity_MAXLEN)],
        'targetDeviceId': [idl.key, idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_Reply:
    requestingDeviceId: str = ""
    targetDeviceId: str = ""
    config: tms.ConfigId = tms.ConfigId.CONFIG_UNKNOWN
    portNumber: idl.int32 = 0
    requestSequenceId: idl.uint64 = 0
    status: tms.ReplyStatus = field(default_factory = tms.ReplyStatus)

tms.Reply = tms_Reply

@idl.struct(
    member_annotations = {
        'requestId': [idl.key, ],
    }
)
class tms_EnergyStartStopRequest:
    requestId: tms.DeviceConfigRequest = field(default_factory = tms.DeviceConfigRequest)
    sequenceId: idl.uint64 = 0
    fromLevel: tms.EnergyStartStopLevel = tms.EnergyStartStopLevel.ESSL_UNKNOWN
    toLevel: tms.EnergyStartStopLevel = tms.EnergyStartStopLevel.ESSL_UNKNOWN
    switchConditions: Optional[tms.PowerSwitchCloseConditions] = None

tms.EnergyStartStopRequest = tms_EnergyStartStopRequest

@idl.struct(
    member_annotations = {
        'deviceId': [idl.key, idl.bound(tms.Identity_MAXLEN)],
        'presentLevelActor': [idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_EnergyStartStopState:
    deviceId: str = ""
    presentLevel: tms.EnergyStartStopLevel = tms.EnergyStartStopLevel.ESSL_UNKNOWN
    futureLevel: tms.EnergyStartStopLevel = tms.EnergyStartStopLevel.ESSL_UNKNOWN
    requestLock: bool = False
    elapsedTime: idl.float32 = 0.0
    remainingTime: idl.float32 = 0.0
    presentLevelReason: tms.PowerSwitchReason = tms.PowerSwitchReason.PSR_UNKNOWN
    presentLevelActor: Optional[str] = None
    futureLevelReason: tms.PowerSwitchTransitionCode = tms.PowerSwitchTransitionCode.PSTC_UNKNOWN

tms.EnergyStartStopState = tms_EnergyStartStopState

@idl.struct(
    member_annotations = {
        'deviceId': [idl.key, idl.bound(tms.Identity_MAXLEN)],
        'masterId': [idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_ActiveMicrogridControllerState:
    deviceId: str = ""
    masterId: Optional[str] = None

tms.ActiveMicrogridControllerState = tms_ActiveMicrogridControllerState

tms_dc = idl.get_module("tms_dc")

tms.dc = tms_dc

@idl.struct
class tms_dc_PowerLineMeasurement:
    voltage: idl.float32 = 0.0
    amperage: idl.float32 = 0.0
    power: idl.float32 = 0.0

tms.dc.PowerLineMeasurement = tms_dc_PowerLineMeasurement

tms_dc_PowerLineMeasurementSequence_MINLEN = 1

tms.dc.PowerLineMeasurementSequence_MINLEN = tms_dc_PowerLineMeasurementSequence_MINLEN

tms_dc_PowerLineMeasurementSequence_MAXLEN = 3

tms.dc.PowerLineMeasurementSequence_MAXLEN = tms_dc_PowerLineMeasurementSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.dc.PowerLineMeasurementSequence_MAXLEN),]
)
class tms_dc_PowerLineMeasurementSequence:
    value: Sequence[tms.dc.PowerLineMeasurement] = field(default_factory = list)

tms.dc.PowerLineMeasurementSequence = tms_dc_PowerLineMeasurementSequence

@idl.struct
class tms_dc_PowerPortMeasurement:
    portNumber: idl.int32 = 0
    line: tms.dc.PowerLineMeasurementSequence = field(default_factory = tms.dc.PowerLineMeasurementSequence)
    powerRateOfChange: idl.float32 = 0.0

tms.dc.PowerPortMeasurement = tms_dc_PowerPortMeasurement

tms_dc_PowerPortMeasurementSequence_MINLEN = 0

tms.dc.PowerPortMeasurementSequence_MINLEN = tms_dc_PowerPortMeasurementSequence_MINLEN

tms_dc_PowerPortMeasurementSequence_MAXLEN = tms.MAX_PORTS

tms.dc.PowerPortMeasurementSequence_MAXLEN = tms_dc_PowerPortMeasurementSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.dc.PowerPortMeasurementSequence_MAXLEN),]
)
class tms_dc_PowerPortMeasurementSequence:
    value: Sequence[tms.dc.PowerPortMeasurement] = field(default_factory = list)

tms.dc.PowerPortMeasurementSequence = tms_dc_PowerPortMeasurementSequence

@idl.struct(
    member_annotations = {
        'deviceId': [idl.key, idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_dc_MeasurementUpdate:
    deviceId: str = ""
    timeMeasured: tms.ClockMonotonic = field(default_factory = tms.ClockMonotonic)
    externalMeasurement: tms.dc.PowerPortMeasurementSequence = field(default_factory = tms.dc.PowerPortMeasurementSequence)
    internalMeasurement: tms.dc.PowerPortMeasurementSequence = field(default_factory = tms.dc.PowerPortMeasurementSequence)

tms.dc.MeasurementUpdate = tms_dc_MeasurementUpdate

@idl.struct
class tms_dc_LoadSharingParameters:
    portNumber: idl.int32 = 0
    referenceVoltage: tms.ControlCurve = field(default_factory = tms.ControlCurve)
    minAmperage: idl.float32 = 0.0
    maxAmperage: idl.float32 = 0.0
    minVoltage: idl.float32 = 0.0
    maxVoltage: idl.float32 = 0.0

tms.dc.LoadSharingParameters = tms_dc_LoadSharingParameters

tms_dc_LoadSharingParameterSequence_MINLEN = 1

tms.dc.LoadSharingParameterSequence_MINLEN = tms_dc_LoadSharingParameterSequence_MINLEN

tms_dc_LoadSharingParameterSequence_MAXLEN = tms.MAX_PORTS

tms.dc.LoadSharingParameterSequence_MAXLEN = tms_dc_LoadSharingParameterSequence_MAXLEN

@idl.alias(
    annotations = [idl.bound(tms.dc.LoadSharingParameterSequence_MAXLEN),]
)
class tms_dc_LoadSharingParameterSequence:
    value: Sequence[tms.dc.LoadSharingParameters] = field(default_factory = list)

tms.dc.LoadSharingParameterSequence = tms_dc_LoadSharingParameterSequence

@idl.struct(
    member_annotations = {
        'requestId': [idl.key, ],
    }
)
class tms_dc_LoadSharingRequest:
    requestId: tms.PowerPortConfigRequest = field(default_factory = tms.PowerPortConfigRequest)
    sequenceId: idl.uint64 = 0
    parameters: tms.dc.LoadSharingParameters = field(default_factory = tms.dc.LoadSharingParameters)

tms.dc.LoadSharingRequest = tms_dc_LoadSharingRequest

@idl.struct(
    member_annotations = {
        'deviceId': [idl.key, idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_dc_LoadSharingState:
    deviceId: str = ""
    config: tms.ConfigId = tms.ConfigId.CONFIG_UNKNOWN
    parameters: tms.dc.LoadSharingParameterSequence = field(default_factory = tms.dc.LoadSharingParameterSequence)

tms.dc.LoadSharingState = tms_dc_LoadSharingState

@idl.struct(
    member_annotations = {
        'deviceId': [idl.key, idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_StorageUpdate:
    deviceId: str = ""
    internalVoltage: idl.float32 = 0.0
    stateOfCharge: idl.float32 = 0.0
    availableEnergy: idl.float32 = 0.0
    holdTime: idl.float32 = 0.0
    chargeTime: tms.Curve2D = field(default_factory = tms.Curve2D)
    dischargeTime: tms.Curve2D = field(default_factory = tms.Curve2D)
    maxChargeTime: tms.Curve2D = field(default_factory = tms.Curve2D)
    maxDischargeTime: tms.Curve2D = field(default_factory = tms.Curve2D)
    maxChargeRate: idl.float32 = 0.0
    maxDischargeRate: idl.float32 = 0.0

tms.StorageUpdate = tms_StorageUpdate

@idl.struct
class tms_ControlServiceInfo:
    mc: Optional[tms.MicrogridControllerInfo] = None
    md: Optional[tms.MicrogridDashboardInfo] = None

tms.ControlServiceInfo = tms_ControlServiceInfo

@idl.struct
class tms_PowerDeviceInfo:
    powerPorts: tms.PowerPortInfoSequence = field(default_factory = tms.PowerPortInfoSequence)
    grounds: tms.GroundingInfoSequence = field(default_factory = tms.GroundingInfoSequence)
    conversion: Optional[tms.ConversionInfo] = None
    distribution: Optional[tms.DistributionInfo] = None
    source: Optional[tms.SourceInfo] = None
    storage: Optional[tms.StorageInfo] = None
    load: Optional[tms.LoadInfo] = None

tms.PowerDeviceInfo = tms_PowerDeviceInfo

@idl.struct(
    member_annotations = {
        'deviceId': [idl.key, idl.bound(tms.Identity_MAXLEN)],
    }
)
class tms_DeviceInfo:
    deviceId: str = ""
    role: tms.DeviceRole = tms.DeviceRole.ROLE_UNKNOWN
    product: tms.ProductInfo = field(default_factory = tms.ProductInfo)
    topics: tms.TopicInfo = field(default_factory = tms.TopicInfo)
    controlHardware: Optional[tms.ControlHardwareInfo] = None
    powerHardware: Optional[tms.PowerHardwareInfo] = None
    controlParameters: Optional[tms.ParameterMetadataSequence] = None
    metricParameters: Optional[tms.ParameterMetadataSequence] = None
    controlService: Optional[tms.ControlServiceInfo] = None
    powerDevice: Optional[tms.PowerDeviceInfo] = None

tms.DeviceInfo = tms_DeviceInfo
