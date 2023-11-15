int proximity_sensor=7;
int buzzer=6;
void setup() {
pinMode(proximity_sensor,INPUT);
pinMode(buzzer,OUTPUT);
}

void loop() {
  int data=digitalRead(proximity_sensor);
  if (data==0){
    digitalWrite(buzzer,HIGH);
    Serial.println("obstacle");
  }
  else{
    digitalWrite(buzzer,LOW);
    Serial.println(" no obstacle");
  }
}
