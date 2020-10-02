String str;

void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
}

void loop() {
  if (Serial1.available()) {
    delay(1000); //allows all serial sent to be received together
      str = Serial1.readString();
  }

  if(str!=0) {
    Serial.println(str);
  }
}
