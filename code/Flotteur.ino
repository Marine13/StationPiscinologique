int rvar = 2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(analogRead(rvar)<100){
    Serial.println("Vide");
  }
  else{
    Serial.println("Plein");
  }
}
