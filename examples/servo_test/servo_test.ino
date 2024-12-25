/**
 * @~Chinese
 * @file servo_test.ino
 * @brief 使用单个舵机的基本测试示例。
 * @example servo_test.ino
 * 使用单个舵机的基本测试示例。
 */
/**
 * @~English
 * @file servo_test.ino
 * @brief Demonstrates basic testing of a single servo motor.
 * @example servo_test.ino
 * Demonstrates basic testing of a single servo motor.
 */
#include "servo.h"

static em::Servo g_servo(25);

void setup() {
  Serial.begin(115200);
  printf("setup\n");
  g_servo.Init();
}

void loop() {
  g_servo.Write(0);
  printf("write 0\n");
  delay(1000);

  g_servo.Write(90);
  printf("write 90\n");
  delay(1000);

  g_servo.Write(180);
  printf("write 180\n");
  delay(1000);

  g_servo.Write(90);
  printf("write 90\n");
  delay(1000);
}