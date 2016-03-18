const int ledPin=9;
const int sensorPin=0;
int conDuction;

void setup() {
  // put your setup code here, to run once:
conDuction=0;  
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
}

void loop() {
  //read from analog&write it to pin dig 9;
  conDuction=analogRead(sensorPin);
Serial.println(conDuction);
  //if below 800 water water
  if(conDuction<880)
 {
digitalWrite(ledPin,HIGH);
  Serial.println("Feed Me");
  delay(100);
  digitalWrite(ledPin,LOW);
  delay(100);

}
//if above 1000 chill bro i have enough water
else if(conDuction>880)
{ digitalWrite(ledPin,HIGH);
  Serial.println("Bro,Chill");
  delay(1000);
  digitalWrite(ledPin,LOW);
  delay(1000);
}
 
}
