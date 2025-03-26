int ledPin = 10; //forrás:https://www.microcontroller.hu/blog/projektek/arduino-hc-sr501-mozgaserzekelo-peldafeladat/
int inputPin = 2;
int pirState = LOW;
int val = 0;
void setup() 
{ 
pinMode(ledPin, OUTPUT);
pinMode(inputPin, INPUT);
Serial.begin(10000);
} 
void loop()
{ 
val = digitalRead(inputPin);
if (val == HIGH)
{ 
digitalWrite(ledPin, HIGH);
if (pirState == LOW) 
{ 
pirState = HIGH;
Serial.println("Mozgás érzékelve!");
} 
} 
else 
{ 
digitalWrite(ledPin, LOW);
if (pirState == HIGH)
Serial.println("Mozgás megszűnt!");
pirState = LOW;
} 
} 
}
