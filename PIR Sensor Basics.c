//PIR Sensor Basics
void setup()
{
  pinMode(2, INPUT);//pir sensor input
  pinMode(8, OUTPUT);//led 
}

void loop()
{
    if (digitalRead(2) == 1){
    digitalWrite(8, HIGH);
    delay(5000);//increase the delay as per your time required...
  } 
  else 
  {
    digitalWrite(8, LOW);
  }
  delay(10);
}