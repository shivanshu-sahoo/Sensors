void setup() {
  // put your setup code here, to run once:
    pinMode(2,OUTPUT);
    
}

void loop() {
  // put your main code here, to run repeatedly:
    
    tone(2,1000);  //frequency in Hz:
    delay(500);
    
    noTone(2);
    delay(500);
}
