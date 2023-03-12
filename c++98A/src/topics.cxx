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
 *  YOUR TOPICS GO HERE -  See notes in header file
 */

#include <string.h>
#include <string>
#include "topics.h"

const DDS_Char * CONTROLLER1_ID =  "MC0001";
const DDS_Char * DEVICE1_ID = "DGen1234";

extern bool application::shutdown_requested;

using namespace topics;

ApplicationStateObj::ApplicationStateObj(enum tms::DeviceRole role) {
        this->role = role;
	// depending upon role we can load our own ID (from "FLASH")
	// we'll load the other ID once we go through the TMS Discovery
	// process.
	if (role == tms::ROLE_MICROGRID_CONTROLLER) {
	  this->masterControllerId = (DDS_Char *) CONTROLLER1_ID;
	  this->mcIdSet = true;
	  this->deviceId= (DDS_Char *) "";
	  this->deviceIdSet = false;
	}
	else if (role == tms::ROLE_SOURCE) {
	  this->masterControllerId = (DDS_Char *) "";
	  this->mcIdSet = false;
	  this->deviceId= (DDS_Char *) DEVICE1_ID;
	  this->deviceIdSet = true;
	}
	else
	    std::cout << "ERROR - must be a Controller or Source Device" << std::endl;

	this->thisMCSelected = false;
        this->authorizedForEnergizing = false;
	this->controllerState = MC_INIT;
        this->genDeviceState = D_INIT;
	this->deviceStartStopPresentLevel = tms::ESSL_UNKNOWN;
        this->deviceStartStopFutureLevel = tms::ESSL_UNKNOWN;
	this->sequence_number = 0;
	this->r_sequence_number = 0;
        this->outstanding_request = false;
}
