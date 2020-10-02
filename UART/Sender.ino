String str;

void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
}
void write_string(String stringData) { // Used to serially push out a String with Serial.write()

  for (int i = 0; i < stringData.length(); i++)
  {
    Serial1.write(stringData[i]);   // Push each char 1 by 1 on each loop pass
  }

}// end writeString
void loop() {
  if(Serial.available()){
    str = Serial.readString();
    Serial.println(str);
    write_string(str);
  }
  }
  
