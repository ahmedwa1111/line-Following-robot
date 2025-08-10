
void moveforward()
{
  
  digitalWrite(rmotorf,HIGH);
  digitalWrite(rmotorb,LOW);      //....rightmotor 
  analogWrite(speedr,80);

  digitalWrite(lmotorf,HIGH);
  digitalWrite(lmotorb,LOW);      //....leftmotor
  analogWrite(speedl,80);

  
}

void turnleft()
{
  digitalWrite(rmotorf,HIGH);
  digitalWrite(rmotorb,LOW);      //....rightmotor
  analogWrite(speedr,200);

  digitalWrite(lmotorf,LOW);
  digitalWrite(lmotorb,HIGH);     //....leftmotor
  analogWrite(speedl,200);

}


void turnright()
{
  digitalWrite(rmotorf,LOW);
  digitalWrite(rmotorb,HIGH);     //....rightmotor
  analogWrite(speedr,200);

  digitalWrite(lmotorf,HIGH);
  digitalWrite(lmotorb,LOW);     //....leftmotor 
  analogWrite(speedl,200);
}

/*
void turnCircle()
{
  digitalWrite(lMotFwd,LOW);
  digitalWrite(rMotRev,LOW);
  digitalWrite(lMotRev,HIGH);
  digitalWrite(rMotFwd,HIGH);
}
*/

void stopp()
{
digitalWrite(lmotorf,LOW);
digitalWrite(rmotorb,LOW);
analogWrite(speedr,0);

digitalWrite(lmotorf,LOW);
digitalWrite(rmotorb,LOW);
analogWrite(speedl,0);
}