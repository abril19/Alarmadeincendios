int valorFlameSensor = 0;
//int EncenderAlarma = 0;
void setup() {
 Serial.begin(9600);
 pinMode(8,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(13,OUTPUT);
}

void loop() {
valorFlameSensor = analogRead(0);
Serial.println(valorFlameSensor);
if (valorFlameSensor > 400){
EncenderAlarma();
}else{
ApagarAlarma();
}

}
void EncenderAlarma(){
  tone(2,260);
  digitalWrite(9,HIGH);
  digitalWrite(3,LOW);
  delay(250);
}
void ApagarAlarma(){
  noTone(2);
  digitalWrite(9, LOW);
  digitalWrite(3, LOW);
}

  
