//Referencies Libraries
#include <Arduino.h>
#include <GLEE_Sensor.h>
#include <TMP117.h>

//Sensor Inititalization (thermometer)
TMP117 thermometer(1, false);

//Variable Definitions
int TimeBetweenSample; //in ms

float TemperatureC;
float TemperatureF;
float startTime; //used for timing offset calculations
float endTime;

void setup() {
// Begin Serial Communications (LunaSAT Baud Rate Set to 9600)
Serial.begin(9600);

TimeBetweenSample = 1000; //in ms, therefore 1 second

}

void loop() {
startTime = millis(); //record start time for offsetting delay, allowing the loop to run once per second

TemperatureC = thermometer.getTemperatureC(); //Here we acquire temperature readings and store them in the previously defined variables
TemperatureF = thermometer.getTemperatureF(); //IBID

Serial.print("Temperature (C):");
Serial.print(TemperatureC);
Serial.print("     ");
Serial.print("Temperature (F):");
Serial.print(TemperatureF);
Serial.print("\n");

endTime = millis(); //we record this so we can determine how long it took to take our measurement

delay(TimeBetweenSample - (endTime - startTime)); //delays the loop for the sake of computational efficiency
}
