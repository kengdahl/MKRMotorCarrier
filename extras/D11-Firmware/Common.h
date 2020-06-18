enum Commands {
  GET_VERSION = 0x01,
  RESET,
  SET_PWM_DUTY_CYCLE_SERVO,
  SET_PWM_FREQUENCY_SERVO,
  SET_PWM_DUTY_CYCLE_DC_MOTOR,
  SET_PWM_FREQUENCY_DC_MOTOR,
  GET_RAW_COUNT_ENCODER,
  RESET_COUNT_ENCODER,
  GET_OVERFLOW_UNDERFLOW_STATUS_ENCODER,
  GET_COUNT_PER_SECOND_ENCODER,
  SET_INTERRUPT_ON_COUNT_ENCODER,
  SET_INTERRUPT_ON_VELOCITY_ENCODER,
  GET_RAW_ADC_BATTERY,
  GET_CONVERTED_ADC_BATTERY,
  GET_FILTERED_ADC_BATTERY,
  SET_PID_GAIN_CL_MOTOR,
  RESET_PID_GAIN_CL_MOTOR,
  SET_CONTROL_MODE_CL_MOTOR,
  SET_POSITION_SETPOINT_CL_MOTOR,
  SET_VELOCITY_SETPOINT_CL_MOTOR,
  SET_MAX_ACCELERATION_CL_MOTOR,
  SET_MAX_VELOCITY_CL_MOTOR,
  SET_MIN_MAX_DUTY_CYCLE_CL_MOTOR,
  PING,
  GET_INTERNAL_TEMP,
  CLEAR_IRQ,
  GET_FREE_RAM,
  GET_PID_VAL
};

enum IRQCause {
  ENCODER_COUNTER_REACHED = 1,
  ENCODER_VELOCITY_REACHED,
};

#define I2C_ADDRESS   0x66

#define ADC_BATTERY   A2
#define IRQ_PIN       27
#define LED_BUILTIN   3

#define MOTOR_2_COUNTER   TC1
#define MOTOR_1_COUNTER   TC2

#define MOTOR_2_PIN_A     4
#define MOTOR_2_PIN_B     5
#define MOTOR_1_PIN_A     7
#define MOTOR_1_PIN_B     6

#include "config.h"
#ifdef NANO_MOTOR_CARRIER
#define ENCODER_1_PIN_A   8
#define ENCODER_1_PIN_B   9
#define ENCODER_2_PIN_A   11
#define ENCODER_2_PIN_B   10
#else
#define ENCODER_1_PIN_A   9
#define ENCODER_1_PIN_B   8
#define ENCODER_2_PIN_A   10
#define ENCODER_2_PIN_B   11
#endif

#define PWM_PIN_SERVO_COUNTER   TCC0

#define PWM_PIN_SERVO_1   17
#define PWM_PIN_SERVO_2   23
#define PWM_PIN_SERVO_3   16
#define PWM_PIN_SERVO_4   22

void requestAttention(int cause);
