#include <ctre/phoenix6/core/CoreTalonFX.hpp>
#include "subsystems/Shooter.h"
units::turns_per_second_t pleasestop{0};


Shooter::Shooter() {
    //IDK Asher wanted something here also check Crecendo for moter config I think
}

void Shooter::Start() {
    m_left_motor.SetControl(ctre::phoenix6::controls::VelocityDutyCycle(OperatorConstants::Shooter::LEFT_VELOCITY));
    m_right_motor.SetControl(ctre::phoenix6::controls::VelocityDutyCycle(OperatorConstants::Shooter::RIGHT_VELOCITY));
}

void Shooter::Stop() {
    m_left_motor.SetControl(ctre::phoenix6::controls::VelocityDutyCycle(pleasestop));
    m_right_motor.SetControl(ctre::phoenix6::controls::VelocityDutyCycle(pleasestop));
}

