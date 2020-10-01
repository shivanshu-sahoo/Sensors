int relay=13;//Declaring the relay pin
void setup()
{
  pinMode(relay, OUTPUT);
}

void loop()
{
  //This is for relay when connected to normal open.
  digitalWrite(relay, HIGH);//setting relay high
  delay(1000); // Wait for 1 second
  digitalWrite(relay, LOW);//setting low
  delay(1000); // Wait for 1 second
}
