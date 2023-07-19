#include <Servo.h>
#include <SoftwareSerial.h>
SoftwareSerial bluetoothSerial(0,1); 

int enb1=A1;
int enb2=A0;
int in1=5; //right forward 
int in2=4; //right backward

int in3=3; //left backward
int in4=2; //left forward 
int velocity=175;
char command;
const int RELAY_PIN_1=A5;
const int RELAY_PIN_2=A4;
Servo servo1;
Servo servo2;


void setup()
{
Serial.begin(9600);
pinMode(in1,OUTPUT);  
pinMode(in2,OUTPUT); 
pinMode(in3,OUTPUT); 
pinMode(in4,OUTPUT);
pinMode(enb1,OUTPUT);
pinMode(enb2,OUTPUT);
pinMode(RELAY_PIN_1,OUTPUT); //Dc pump 1
pinMode(RELAY_PIN_2,OUTPUT); //Dc pump 2
servo1.attach(7);
servo2.attach(8);
servo1.write(0);
servo2.write(0);

}
void loop() 
{
if(Serial.available())
{
command=Serial.read();
Serial.println(command);
switch(command)
{ 
case 'F':          
analogWrite(enb1,velocity);
analogWrite(enb2,velocity);
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
break;

case 'B':      
analogWrite(enb1,velocity);
analogWrite(enb2,velocity);
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
break;

case 'R':      
analogWrite(enb1,velocity);
analogWrite(enb2,velocity);
digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
break;

case 'L':      
analogWrite(enb1,velocity);
analogWrite(enb2,velocity);
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
break;

case 'S':     
analogWrite(enb1,0);
analogWrite(enb2,0);
digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
break;
case 'I':
analogWrite(enb1,velocity);
analogWrite(enb2,velocity);
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
break;
case 'G':
analogWrite(enb1,velocity); 
analogWrite(enb2,velocity);
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
break;

case 'H':
analogWrite(enb1,velocity);
analogWrite(enb2,velocity);
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
break;

case 'J':
analogWrite(enb1,velocity);
analogWrite(enb2,velocity);
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
break;

      case 'X':
     servo1.write(45);
     servo2.write(45);
      break;
     case 'Y':
     digitalWrite(RELAY_PIN_1,HIGH);
     digitalWrite(RELAY_PIN_2,HIGH);
     break;
      case 'W':
     servo1.write(130);
     servo2.write(130);
      break;
      case 'Z':
    digitalWrite(RELAY_PIN_1,LOW);
    digitalWrite(RELAY_PIN_2,LOW);
    servo1.write(0);
    servo2.write(0);
     break;

 






}
}
}
