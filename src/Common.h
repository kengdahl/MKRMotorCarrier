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
};

enum IRQCause {
  ENCODER_COUNTER_REACHED = 1,
  ENCODER_VELOCITY_REACHED,
};

#define I2C_ADDRESS   0x66
#define IRQ_PIN       6

#define MOTOR_3_PIN_A 3
#define MOTOR_3_PIN_B 2
#define MOTOR_4_PIN_A 4
#define MOTOR_4_PIN_B 5

#define IN1 A6
#define IN2 A1
#define IN3 A5
#define IN4 A2

int getData(Commands cmd, uint8_t target, uint8_t* buf);
void setData(Commands cmd, uint8_t target, int data);
void setDataPIDGains(Commands cmd, uint8_t target, int16_t P, int16_t I, int16_t D);
int getData(Commands cmd, uint8_t* buf);
