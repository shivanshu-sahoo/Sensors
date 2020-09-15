// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement

//define pins
int trig=5;
int echo=4;

void setup() {
  //Defining Pins
  pinMode(trig, OUTPUT); 
  pinMode(echo, INPUT); 
  Serial.begin(9600); 
}
void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = duration * 0.0343 / 2; 
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  delayMicroseconds(30);
}
