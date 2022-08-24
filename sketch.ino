int ledVerm = 2;
int ledAzul = 4; 
int sensor = 6;  
int acionamento;

void setup(){
  pinMode(ledVerm, OUTPUT); 
  pinMode(ledAzul, OUTPUT);
  pinMode(sensor, INPUT);  
  Serial.begin(9600);
}

void loop(){
 acionamento = digitalRead(sensor);
 
 Serial.println(acionamento);
  
 if (acionamento == HIGH) {
    digitalWrite(ledVerm, LOW);
    digitalWrite(ledAzul, HIGH);
 } else {
    digitalWrite(ledVerm, HIGH);
    digitalWrite(ledAzul, LOW);
 }
 delay(1000);
}