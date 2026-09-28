// C++ code
//
int motor = 3;
int pot;

void setup()
{
  pinMode(3,OUTPUT);
  pinMode(A5,INPUT);
  
  
}

void loop()
{
  
 pot=analogRead(A5);
  int velocidad = map(pot,0,1023,0,255);
  analogWrite(motor,velocidad);
  
  
}