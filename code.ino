int speed1;
int speed2;
int speed3;
int speed4;
int speed;

const int MotL_A = 4;    
const int MotL_B = 3;    
const int MotR_A = 9;    
const int MotR_B = 10;
const int en_R=6;
const int en_L=5;

void setup() {
  pinMode(MotR_A,OUTPUT);
  pinMode(MotR_B,OUTPUT);
  pinMode(MotL_A,OUTPUT);
  pinMode(MotL_B,OUTPUT);
  pinMode(en_R,OUTPUT);
  pinMode(en_L,OUTPUT);    
   pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  Serial.begin(9600);
 
}

void loop() {
 int ch1=pulseIn(A0,HIGH);
  int ch2=pulseIn(A1,HIGH);
  int ch3=pulseIn(A2,HIGH);
  speed1=map(ch2,1483,1980,0,255);
  speed2=map(ch2,1483,980,0,255);
  speed3=map(ch1,1483,1980,0,255);
  speed4=map(ch1,1483,980,0,255);
  speed=map(ch3,995,1876,127,255);
  if (speed1<0 or speed1<10 ){
    speed1=0;
  }
  if (speed2<0 or speed2<10){
    speed2=0;
  }
 if (speed3<0 or speed3<10 ){
    speed3=0;
  }
  if (speed4<0 or speed4<10){
    speed4=0;
  }
 if (ch1!=0)
 {
  if (speed1>=speed4 and speed4>0){
       digitalWrite(MotR_A, LOW);

    digitalWrite(MotR_B, HIGH);

    digitalWrite(MotL_B, LOW);

    digitalWrite(MotL_A, HIGH);
   
    analogWrite(en_L,200);
    analogWrite(en_R,40);
  }
  else if(speed1>=speed3 and speed3>0){
       digitalWrite(MotR_A, LOW);

    digitalWrite(MotR_B, HIGH);

    digitalWrite(MotL_B, LOW);

    digitalWrite(MotL_A, HIGH);
    

    analogWrite(en_R,200);
    analogWrite(en_L,40);

  }
  else if(speed4<speed2 or speed3<speed2 ){

   Robot_Reverse();
 

 
  
      
  }
 else if(speed4>speed1 or speed4>speed2 ){

   Robot_Right();
 

 
  
      
  }
  else if(speed3>speed1 or speed3>speed2){
 
  Robot_Left();


 }
 
      
  else if (speed1>0){
    Robot_Forword();
  }  

 else if (speed2>0){
    Robot_Reverse();
  }         
   else if (speed3>0){
    Robot_Left();
  }         
   else if (speed4>0){
    Robot_Right();
  } 
    
  else{
    Robot_Stop();
  }
 }
  else{
    Robot_Stop();
  }

}

  void Robot_Forword()

 {

    digitalWrite(MotR_A, LOW);

    digitalWrite(MotR_B, HIGH);

    digitalWrite(MotL_B, LOW);

    digitalWrite(MotL_A, HIGH);
    analogWrite(en_R,speed);
    analogWrite(en_L,speed);

 }

  void Robot_Reverse()

 {

    digitalWrite(MotR_A, HIGH);

    digitalWrite(MotR_B, LOW);

    digitalWrite(MotL_B, HIGH);

    digitalWrite(MotL_A, LOW);
     analogWrite(en_R,speed);
    analogWrite(en_L,speed);
 }

   void Robot_Right()

 {

    digitalWrite(MotR_A, HIGH);

    digitalWrite(MotR_B, LOW);

    digitalWrite(MotL_B, LOW);

    digitalWrite(MotL_A, HIGH);
    analogWrite(en_L,speed-40);
    analogWrite(en_R,255-speed-40);
 }

    void Robot_Left()

 {

    digitalWrite(MotR_A, LOW);

    digitalWrite(MotR_B, HIGH);

    digitalWrite(MotL_B, HIGH);

    digitalWrite(MotL_A, LOW);
    analogWrite(en_R,speed-40);
    analogWrite(en_L,255-speed-40);
    Serial.println(255-speed);
 }

     void Robot_Stop()

 {

    digitalWrite(MotR_A, LOW);

    digitalWrite(MotR_B, LOW);

    digitalWrite(MotL_B, LOW);

    digitalWrite(MotL_A, LOW);
    analogWrite(en_R,0);
    analogWrite(en_L,0); 

 }
