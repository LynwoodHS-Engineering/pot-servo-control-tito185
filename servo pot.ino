#include <Servo.h>

Servo myservo;  

int pot = A0; 
int val;    

void setup() {
  myservo.attach(9); 
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(pot); 
  int servoVal = map(val, 0, 1023, 0, 180);
  
 
  Serial.print("Pot Value: ");
  Serial.print(val);
  Serial.print("  Servo Value: ");
  Serial.println(servoVal);

  myservo.write(servoVal);
  delay(50); 
}
