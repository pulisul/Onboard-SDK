/*! @brief
 *  @file cmdFlight.h
 *  @version 3.0
 *  @date Jan 7, 2016
 *
 *  @abstract
 *
 *
 *  @attention
 *  Project configuration:
 *  None
 *
 *  @version features:
 *  -* @version V3.0
 *  -* DJI-onboard-SDK for Windows,QT,STM32,ROS,Cmake
 *  -* @date Jan 7, 2016
 *  -* @author william.wu
 *
 * */
#ifndef CMDFLIGHT_H
#define CMDFLIGHT_H

#include "DJI_Script.h"

/*! @note It is not necessary to know the meaning of each function's name.
 *  Just use it please. Maybe these names will change somehow.
 * */

bool FC  (DJI::onboardSDK::Script* script, DJI::UserData data);
bool tkFC(DJI::onboardSDK::Script* script, DJI::UserData data);
bool mcFC(DJI::onboardSDK::Script* script, DJI::UserData data);
bool flFC(DJI::onboardSDK::Script* script, DJI::UserData data);

#endif // CMDFLIGHT_H
