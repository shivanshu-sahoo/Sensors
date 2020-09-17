
//pins
int ir_sensor = 3;
int led =2;

//variables
int ir_value=0;

void setup() {
Serial.begin(9600);
pinMode(led,OUTPUT);//setting led pin as output
pinMode(ir_sensor,INPUT);//setting ir_sensor pin as input

}

void loop() {
  ir_value = digitalRead(ir_sensor);//reads the value from ir_sensor
  if(ir_value==1)//if obstacle is absent
  {
    Serial.print("No Obstacle");
    Serial.println(" ");
    digitalWrite(led,LOW);
  }
  else//if obstacle is present
  {
    Serial.print("Obstacle present");
    Serial.println(" ");
    digitalWrite(led,HIGH);
  }
  delay(100);
}
