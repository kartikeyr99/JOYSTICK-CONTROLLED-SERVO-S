#include <Servo.h>                      //includes servo library
Servo myservo;
Servo myservo1;
int xsen=A0;                            //enables the x-axis movement of joystick
int ysen=A1;                            //enables the y-axis movement of joystick
int sensval;                            //values of x-axis movement of joystick
int sensval1;                           //values of y-axis movement of joystick
int serv[]={9,10};                      //pin no's servo is attached to

void setup() {
  // put your setup code here, to run once:
myservo.attach(serv[0]);
myservo1.attach(serv[1]);
pinMode(xsen, INPUT);
pinMode(ysen, INPUT);

}

void loop() {

 
  // put your main code here, to run repeatedly:
sensval=map(analogRead(xsen), 0, 1023, 0, 180);                                 //confines the movement of joystick to 180 for x-axis movement
sensval1=map(analogRead(ysen), 0, 1023, 0, 180);                                //confines the movement of joystick to 180 for y-axis movement
if(sensval!=89){                                                                
  myservo.write(sensval);                                                       //except this value, now you can control your 1st servo
}
if(sensval1!=89){
  myservo1.write(sensval1);                                                     //except this value, now you can control your 2nd servo
}

delay(20);
}
