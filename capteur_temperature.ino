#include "DHT.h"
#define DHTPIN 2 
#define DHTTYPE DHT11
DHT dht(DHTPIN ,DHTTYPE);



void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("DHTxx test !");
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
   delay(2000);
   float h=dht.readHumidity();
    float t=dht.readTemperature();
    float f=dht.readTemperature(true);
    if (isnan(h) || isnan(t) || isnan(f) ){
      Serial.println("failed to read from DHT sensor !");
      return;
    }
    float hif = dht.computeHeatIndex(f, h);
 
 float hic = dht.computeHeatIndex(t, h, false);
 


//Affichage// 
 Serial.print("Humidite: ");
 Serial.print(h);
 Serial.print("%Temperature: ");
 Serial.print(t);
 Serial.println(" °C ");
 Serial.println(f);
 Serial.print(" °F head index ");
 Serial.print(hic);
 Serial.println(" °C ");
 Serial.print(hif);
 Serial.print(" °F");
  
}
