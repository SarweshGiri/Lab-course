// DEFINE THE PINS NUMBERS
const int trigPin =10;
const int echoPin =9;

//defines variables
long duration;
int distance; 
void setup()
{
  int i;
  pinMode(trigPin,OUTPUT);  //Sets the trigPin as an output 
  pinMode(echoPin, INPUT); 
  pinMode(11,OUTPUT);//Sets the echoPin as an input
  Serial.begin(9600);       // starts the serial communication
}

void loop()
{
  if(distance<=20)
  {
  for(int i=0;i<=255;i=i+10)
  {
    analogWrite(11,i);
    delay(100);
  }
  for(int i=255;i>=0;i=i-10)
  {
    analogWrite(11,i);
    delay(100);
  }
  }
  else
  {
    digitalWrite(11,LOW);
    delay(100);
    
  }
 digitalWrite(trigPin,LOW);
 delayMicroseconds (2);

 digitalWrite(trigPin,HIGH);
 delayMicroseconds (10);
 digitalWrite(trigPin,LOW);

 duration= pulseIn(echoPin ,HIGH);
 distance =duration*0.034/2;
 Serial.print("Distance: ");
 Serial.println(distance); 
}
