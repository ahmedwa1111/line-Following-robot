int rmotorf = 8 ;     //greenwire
int rmotorb = 9 ;     //whitewire
int speedr  = 10;     //redwire
int lmotorf = 6 ;     //whitewire
int lmotorb = 7 ;     //greenwire
int speedl  = 5 ;     //blackwire
//int rrir    = 3 ;     //lastrightsen     //ALL_BLUE
int  rir    = 9 ;     //rightsen
int  cir    = 12 ;     //centersen
int  lir    = 13 ;     //lefttsen
//int llir    = 7 ;     //lastlefttsen
// define sensors
//int rrir = digitalRead(rrir);
char  rrir = digitalRead( rir);
char  ccir = digitalRead( cir);
char  llir = digitalRead( lir);
 //int llir = digitalRead(llir);

void setup() {
  // put your setup code here, to run once:
//MOTORSPINS
pinMode(rmotorf,OUTPUT);
pinMode(rmotorb,OUTPUT);
pinMode( speedr,OUTPUT);
pinMode(lmotorf,OUTPUT);
pinMode(lmotorb,OUTPUT);
pinMode( speedl,OUTPUT);
//SENSORSPINS
//pinMode(rrir,INPUT);
pinMode( rir,INPUT);
pinMode( cir,INPUT);
pinMode( lir,INPUT);
//pinMode(llir,INPUT);
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
 
//the conditions 
//high=white
//low =black
if(digitalRead(lir)==HIGH && digitalRead(cir)==LOW && digitalRead(rir)==HIGH){
moveforward();
 //serial communication to show if my conditions are right
Serial.println("forward");
}
else if (digitalRead(lir)==LOW && digitalRead(cir)==LOW && digitalRead(rir)==HIGH){

turnleft();
Serial.println("left");
}
else if (digitalRead(lir)==HIGH && digitalRead(cir)==LOW && digitalRead(rir)==LOW){

turnright();
Serial.println("right");
}
else if (digitalRead(lir)==HIGH && digitalRead(cir)==HIGH && digitalRead(rir)==LOW){

turnright();
Serial.println("smoothleft");
}
else if (digitalRead(lir)==LOW && digitalRead(cir)==HIGH && digitalRead(rir)==HIGH){

turnleft();
Serial.println("smoothright");
}
else if (digitalRead(lir)==LOW && digitalRead(cir)==LOW && digitalRead(rir)==LOW ){
  moveforward();
}
else if (digitalRead(lir)==HIGH && digitalRead(cir)==HIGH && digitalRead(rir)==HIGH){
  moveforward();
}

else {
  stopp();
  Serial.println("stop");
}
}
