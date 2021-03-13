#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int sensorPin = A0; // select the input pin for LDR
int pos = 0;    // variable to store the servo position
int sensorValue = 0; // variable to store the value coming from the sensor

void setup() {
  Serial.begin(9600); //sets serial port for communication
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
    sensorValue = analogRead(sensorPin); // read the value from the sensor
    Serial.println(sensorValue); //prints the values coming from the sensor on the screen
    if (sensorValue <= 48 )
    {
      myservo.write(165);
      delay(50 );
    }
    else
    {
      myservo.write(180);
    }
    delay(10);  
}
