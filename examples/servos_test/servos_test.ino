/**
 * @~Chinese
 * @file servos_test.ino
 * @brief 使用多个舵机的相关测试示例。
 * @example servos_test.ino
 * 使用多个舵机的相关测试示例。
 */
/**
 * @~English
 * @file servos_test.ino
 * @brief Shows how to test multiple servo motors simultaneously.
 * @example servos_test.ino
 * Shows how to test multiple servo motors simultaneously.
 */

#include "servo.h"

static em::Servo* const g_servos[] = {
    new em::Servo(25),
    new em::Servo(26),
    new em::Servo(32),
};

void setup() {
  Serial.begin(115200);
  printf("setup\n");
  for (auto servo : g_servos) {
    servo->Init();
  }
}

void loop() {
  for (auto servo : g_servos) {
    servo->Write(0);
  }
  printf("write 0\n");
  delay(1000);

  for (auto servo : g_servos) {
    servo->Write(90);
  }
  printf("write 90\n");
  delay(1000);

  for (auto servo : g_servos) {
    servo->Write(180);
  }
  printf("write 180\n");
  delay(1000);

  for (auto servo : g_servos) {
    servo->Write(90);
  }
  printf("write 90\n");
  delay(1000);
}