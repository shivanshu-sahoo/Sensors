int servo_pin=2;
int value=0,pulse_width=0;
int zero_degree_pulse=1000; //The length of duty cycle in microseconds for 0 degree rotation
int full_pulse=2000; //The length of duty cycle in microseconds for 180 degree rotation 
void setup() {
  pinMode(2,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  if(Serial.available()>0){
    value=Serial.parseInt();
    Serial.println(value);
    pulse_width=(full_pulse-zero_degree_pulse/180)*value +zero_degree_pulse;//the pulse width for each degree is found and then multiplied with the entered angle
    digitalWrite(servo_pin,HIGH);
    delayMicroseconds(pulse_width);
    digitalWrite(servo_pin,LOW);
    delay(20-(pulse_width/1000));
  }

}
