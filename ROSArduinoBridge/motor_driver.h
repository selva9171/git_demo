/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  #define RIGHT_MOTOR_BACKWARD 14
  #define LEFT_MOTOR_BACKWARD  26
  #define RIGHT_MOTOR_FORWARD  27
  #define LEFT_MOTOR_FORWARD   33
  #define RIGHT_MOTOR_ENABLE   25
  #define LEFT_MOTOR_ENABLE    32
#endif

#ifdef CYTRON_MDD3A

  /* Include the Pololu library */
  #include "CytronMotorDriver.h"
  
  #define M1A 18
  #define M1B 19
  #define M2A 32
  #define M2B 33

  extern CytronMD motor_left;
  extern CytronMD motor_right;
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
