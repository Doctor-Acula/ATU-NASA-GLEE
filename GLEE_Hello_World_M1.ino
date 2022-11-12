void setup() 
{
  // put your setup code here, to run once:
Serial.begin(9600); //Sets the information transmission rate in bits/second
//Serial.println("Hello World!"); //No true programmer goes without a "Hello World!"
}

void loop() 
{
  // put your main code here, to run repeatedly:
Serial.println("Hello World!"); //Should print multiple times, as it's in a loop
delay(5000); //Delays the loop by 5000 milliseconds (5 seconds)
}
