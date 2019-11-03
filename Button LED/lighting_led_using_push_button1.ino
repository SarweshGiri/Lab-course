void setup()
{
  pinMode(3, OUTPUT);
  pinMode(6, INPUT);
}

void loop()
{
  
  int button = digitalRead(6);
  
  
  if(button == LOW){
  	digitalWrite(3, HIGH);
  }
  else{
    
  	digitalWrite(3, LOW);
  }
}