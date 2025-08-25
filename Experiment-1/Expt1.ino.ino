// Experiment 1: LED blinks thrice, Buzzer beeps twice, Servo rotates 45 degrees
// Components: LED, Pushbutton, Buzzer, Servo
#include <Servo.h>
const int servo=6;
const int button=7;
const int buzzer=8;
const int led=9;
Servo s;
void setup() { 
  pinMode(button,INPUT_PULLUP); 
  pinMode(buzzer,OUTPUT); 
  pinMode(led,OUTPUT); 
  s.attach(servo); 
  digitalWrite(buzzer,LOW); 
  s.write(0);
} 
void loop() { 
  bool button_press=digitalRead(button)==LOW; 
  if(button_press){ 
    for(int i=0;i<3;i++){ 
      digitalWrite(led,HIGH); 
      delay(1000); 
      digitalWrite(led,LOW); 
      delay(500);
    } 
    for(int i=0;i<2;i++){ 
      tone(buzzer,1000); 
      delay(1000); 
      noTone(buzzer); 
      delay(1000);
    } 
    s.write(45); 
    delay(1000); 
    s.write(0); 
    delay(500);
  }
}
//Added Experiment 1: LED, Buzzer, Servo with pushbutton trigger
