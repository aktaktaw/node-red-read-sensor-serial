#include <DHT.h>

#define DHTPIN 7
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHT11);
float temperature, humidity;
String temperatureTemp, humidityTemp, combine;

void setup() {
  Serial.begin(9600);
  dht.begin();
  // put your setup code here, to run once:
 
}

void loop() {
  // put your main code here, to run repeatedly:
  temperature = dht.readTemperature();
  humidity = dht.readHumidity();

  temperatureTemp = String(temperature,3);
  humidityTemp = String(humidity,3);
  Serial.println("Temperature/" + temperatureTemp + "/Humidity/" + humidityTemp );
  
  delay(5000);
}
