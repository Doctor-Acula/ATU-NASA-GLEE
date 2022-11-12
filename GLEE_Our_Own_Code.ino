//We wrote a hidden message in morse code. Can you figure it out?//
// *Note, we did not use loops so as to only utilize that which we have been taught thus far in the GLEE modules

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
digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(1750); 

//The very beginning of the code. combines with the break at the end to separate the different loop iterations

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(750); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(750);

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(250); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(250);

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(250); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(250);

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(250); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(250);

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(250); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(750);

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(250); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(1750); 

//WORD
digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(750); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(250);

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(250); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(250);

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(750); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(250);

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(250); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(750);//

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(250); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(250);

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(750); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(750);//

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(750); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(250);

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(250); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(250);

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(750); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(750);

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(250); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(1750);

//word

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(250); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(250);

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(250); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(750);//

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(250); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(250);

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(250); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(250);

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(250); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(1750);

//word

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(250); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(250);

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(750);

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(1750);

//word

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(250); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(250);

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(750); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(250);

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(250); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(250);

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(250); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(750);//

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(250); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(250);

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(250); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(750);//

digitalWrite(LED1, HIGH); 
digitalWrite(LED2, HIGH); 
delay(250); 

digitalWrite(LED1, LOW); 
digitalWrite(LED2, LOW); 
delay(1750);
}