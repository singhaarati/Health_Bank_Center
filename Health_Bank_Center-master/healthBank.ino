#include <DHT.h>


#define DHTPIN 5

#define DHTTYPE DHT22


DHT dht(DHTPIN, DHTTYPE);


float temp, humi;

void setup(){
  Serial.begin(9600);
  Serial.println("Code Strated");
  
}


void loop(){
  temp = dht.readTemperature();
  humi = dth.readHumidity();

  Serial.print("Temperature in C ");
  Serial.println(temp);

  Serial.print("Humidity ");
  Serial.println(humi);
  delay(2000);
}
