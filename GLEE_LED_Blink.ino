int LED1 = 4; //We define the variable "LED1" in correspondance to the pin with which it is connected
int LED2 = 5; //IBID

void setup() 
{
Serial.begin(9600); //Rate of data transmission in bits/second

pinMode(LED1, OUTPUT); //The first argument defines the pin # on the board with which the LED is connected, the second
pinMode(LED2, OUTPUT); // argument defines whether it will be transmitting or receiving data.
}

void loop() 
{
digitalWrite(LED1, HIGH); //The first argument defines the pin # on the board with which the LED is connected,the second
digitalWrite(LED2, HIGH); //argument defines the voltage applied. "HIGH" will turn the LED on, "LOW" will turn the LED off.

Serial.println("The LEDs are on"); //Prints to the terminal when the LEDs are turned on

delay(1000); //delays the loop by 1000 ms, or 1s

digitalWrite(LED1, LOW); //The first argument defines the pin # on the board with which the LED is connected,the second
digitalWrite(LED2, LOW); //argument defines the voltage applied. "HIGH" will turn the LED on, "LOW" will turn the LED off.

delay(1000); //delays the loop by 1000 ms, or 1s

}
