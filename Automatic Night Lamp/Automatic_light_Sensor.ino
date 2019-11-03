void setup() {
 Serial.begin(9600);
 pinMode(13,OUTPUT); 
}

void loop() 
{
int d=analogRead(A0);
Serial.println(d);
if(d>600)
{
  digitalWrite(13,HIGH);
}
else
{
  digitalWrite(13,LOW);
}
delay(100);
}
