#pragma once
#include "Constants.h"
#include <frc2/command/SubsystemBase.h>
#include <frc2/command/CommandPtr.h>
#include <ctre/phoenix6/TalonFX.hpp>
#include <frc2/command/RunCommand.h>





class Shooter : public frc2::SubsystemBase {

    public:
        Shooter();
        void Start();
        void Stop();
        ~Shooter()=default;
              
        
       
    private:
        ctre::phoenix6::hardware::TalonFX m_left_motor{OperatorConstants::Shooter::LEFT_ID};
        ctre::phoenix6::hardware::TalonFX m_right_motor{OperatorConstants::Shooter::RIGHT_ID};


       
       
};