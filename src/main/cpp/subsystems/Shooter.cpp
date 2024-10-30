#include <ctre/phoenix6/core/CoreTalonFX.hpp>
#include "subsystems/Shooter.h"
#include <ctre/phoenix6/controls/VelocityDutyCycle.hpp>
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc/controller/PIDController.h>

units::turns_per_second_t pleasestop{0};


Shooter::Shooter() {
    ctre::phoenix6::configs::TalonFXConfiguration left_config{};
    left_config.Audio.BeepOnBoot = true;
    left_config.CurrentLimits.SupplyCurrentLimitEnable = true;
    left_config.CurrentLimits.SupplyCurrentLimit = 25; // CHANGEME
    left_config.Slot0.kP = 0.1;
    left_config.MotorOutput.NeutralMode = ctre::phoenix6::signals::NeutralModeValue::Brake;
    m_left_motor.GetConfigurator().Apply(left_config);
    
    ctre::phoenix6::configs::TalonFXConfiguration right_config{};
    right_config.Audio.BeepOnBoot = true;
    right_config.CurrentLimits.SupplyCurrentLimitEnable = true;
    right_config.CurrentLimits.SupplyCurrentLimit = 25; // CHANGEME
    right_config.Slot0.kP = 0.1;
    right_config.MotorOutput.NeutralMode = ctre::phoenix6::signals::NeutralModeValue::Brake;
    m_right_motor.GetConfigurator().Apply(right_config);     
}

void Shooter::Start() {    



    m_left_motor.SetControl(ctre::phoenix6::controls::VelocityDutyCycle(OperatorConstants::Shooter::LEFT_VELOCITY));

    m_right_motor.SetControl(ctre::phoenix6::controls::VelocityDutyCycle(OperatorConstants::Shooter::RIGHT_VELOCITY));

    //m_right_motor.SetControl(req);
    
    //m_left_motor.SetControl(req);

    

   /*m_left_motor.Set(0.1);
    m_right_motor.Set(-0.1);*/    
    
}

void Shooter::Stop() {
     //\m_left_motor.SetControl(ctre::phoenix6::controls::VelocityDutyCycle(pleasestop));
     //m_right_motor.SetControl(ctre::phoenix6::controls::VelocityDutyCycle(pleasestop));

    m_left_motor.Set(0);
    m_right_motor.Set(0);
}

