// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once
#include <frc/DriverStation.h>
#include <frc/geometry/Rotation3d.h>
#include <frc/geometry/Transform3d.h>
#include <iostream>
#include <numbers>
#include <units/acceleration.h>
#include <units/angle.h>
#include <units/angular_acceleration.h>
#include <units/angular_velocity.h>
#include <units/length.h>
#include <units/time.h>
#include <units/velocity.h>
#include <vector>

/**
 * The Constants header provides a convenient place for teams to hold robot-wide
 * numerical or boolean constants.  This should not be used for any other
 * purpose.
 *
 * It is generally a good idea to place constants into subsystem- or
 * command-specific namespaces within this header, which can then be used where
 * they are needed.
 * 
 * 
 */




namespace OperatorConstants {

inline constexpr int kDriverControllerPort = 0;


  struct PidCoeff
  {
    const double p = .0, /// Proportional. Based off distance from setpoint, most
                         /// important but high values cause oscilation.
        i = .0,          /// Integral. Based off the error over time, try to avoid if
                         /// possible.
        d = .0,          /// Derivative. Based off velocity from setpoint, can be used to
                         /// smooth out oscilation caused by high P values.
        ff = .0,         /// Feed Forward. Provides a constant boost to the output. Used
                         /// to fight gravity or similar things.
        iz = .0,         /// I Zone. A deadband (distance from zero) for when I takes
                         /// effect. Try to avoid if possible.
        min = .0,        /// Minimum output for control loop.
        max = .0;        /// Maximum output for control loop.
  };

namespace Shooter {
    constexpr int LEFT_ID = 2;
    constexpr int RIGHT_ID = 5;
    

    constexpr units::turns_per_second_t LEFT_VELOCITY{0.1};
    constexpr units::turns_per_second_t RIGHT_VELOCITY{-0.1};
  
   
    
}

}  // namespace OperatorConstants
