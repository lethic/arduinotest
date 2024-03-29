 /* 
 Controlling a servo position using a potentiometer (variable resistor) 
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott> 

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int pos = 0;

void setup()
{
  myservo.attach(2);  // attaches the servo on pin 9 to the servo object
}

void loop() 
{ 
  //val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023) 
  //val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180) 
  for(pos = 30; pos < 90; pos ++){
    myservo.write(pos);                  // sets the servo position according to the scaled value 
    delay(15);                           // waits for the servo to get there 
  }
  for(pos = 90; pos >30; pos --){
    myservo.write(pos);
    delay(15);  
  }
} 

