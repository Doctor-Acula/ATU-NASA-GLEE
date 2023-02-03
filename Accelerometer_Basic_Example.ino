#include <MPU6000.h>
#include <Arduino.h>
#include <GLEE_Sensor.h>

//Sensor Inititalization (accelerometer)
MPU6000 accelerometer(1, false);

//Variable Definitions
float acc; //3 axis acceleration reading in Gs

void setup() {
// Begin Serial Communications (LunaSAT Baud Rate Set to 9600)
Serial.begin(9600);

//Accelerometer setup
accelerometer.begin();
accelerometer.initialize();
accelerometer.setAccelRange(MPU6000_RANGE_2_G); //Range options 2_G, 4_G, 8_G, 16_G
}

void loop() {
acc = accelerometer.getSample(); //Reads and saves 3 axis acceleration reading (G)

Serial.print("Acceleration in Gs, X-Axis):");
Serial.print(acc.x, 8);
Serial.print(" ");
Serial.print("Y-Axis:");
Serial.print(acc.y, 8);
Serial.print(" ");
Serial.print("Z-Axis:");
Serial.print(acc.z, 8);
Serial.print("\n");

delay(100); //delays the loop for 100ms between readings (for the sake of computational efficiency)
}
