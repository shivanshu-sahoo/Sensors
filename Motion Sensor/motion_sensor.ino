void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
    int s=0;
    s=digitalRead(2);
    if(s!=0){
      
      Serial.println(s);
      delay(1000);
    }
    
}
