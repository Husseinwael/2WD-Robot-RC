// motor 1
int IN1 = 8;
int IN2 = 9;
int ENA = 10;
// motor 1
int IN3 =  13 ;
int IN4 = 12 ;
int ENB = 11  ;
int spead = 100;
char Read;
void setup() {
  
 
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENB,OUTPUT);
  
 Serial.begin(9600);

}

void loop() {
  
  if(Serial.available()>0) {

Read=Serial.read();
switch(Read){
case 'F': digitalWrite(IN1,1);
          digitalWrite(IN2,0);
          digitalWrite(IN3,1);
          digitalWrite(IN4,0);
          digitalWrite(ENA,spead);
          digitalWrite(ENB,spead);
break;
case 'B': digitalWrite(IN1,0);
          digitalWrite(IN2,1);
          digitalWrite(IN3,0);
          digitalWrite(IN4,1);
          digitalWrite(ENA,spead);
          digitalWrite(ENB,spead);
break;
case 'R': digitalWrite(IN1,1);
          digitalWrite(IN2,0);
          digitalWrite(IN3,0);
          digitalWrite(IN4,0);
          digitalWrite(ENA,spead);
          digitalWrite(ENB,spead);
break;
case 'L': digitalWrite(IN1,0);
          digitalWrite(IN2,0);
          digitalWrite(IN3,1);
          digitalWrite(IN4,0);
         
          
 break;
 
case 'S':

          digitalWrite(IN1,0);
          digitalWrite(IN3,0);
          digitalWrite(IN2,0);
          digitalWrite(IN4,0);
          digitalWrite(ENA,spead);
          digitalWrite(ENB,spead);
          

break;

}
}
}
