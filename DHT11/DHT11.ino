#include<DHT.h>
DHT dht(2,DHT11);


void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  dht.begin();
  

}

void loop() {
  // put your main code here, to run repeatedly:
 float t=dht.readTemperature();
 float h=dht.readHumidity();
 Serial.println("Temperature-");
 Serial.println(t);
 Serial.println("Humidity-");
 Serial.println(h);
 delay(5000);
 
    

}
