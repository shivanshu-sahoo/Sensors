
#include <Servo.h>//including the servo library

Servo my_servo;//creating a servo object
int pos=0;
void setup() {
  my_servo.attach(2);//defining pin used to control servo
  Serial.begin(9600);
}
//The servo motor can be controlled using three ways in the following code, uncomment the way you want to implement

void loop() {
  //Way 1: Enter the angle of rotation through Serial monitor
  /*if(Serial.available()>0){
    value=Serial.parseInt();
    Serial.println(value);
    my_servo.write(value);
  }*/
  //Way 2: Here motor continuosly rotates from 0 to 180, then back to 0, thus functions like DC motor
 for(pos = 0; pos <= 180; pos += 1) 
  {
    my_servo.write(pos);              
    delay(150);                      
  } 
  for(pos = 180; pos>=0; pos-=1)     
  {                                
    my_servo.write(pos);             
    delay(150);                      
  } 
  
  //Way 3: enter the length of duty cycle in microseconds
 // my_servo.writeMicroseconds(1500);
}
