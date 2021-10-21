#include <FB_AquaTempSensor.h>


FB::AquaTempSensor tempSensor(2);

void setup() {
  Serial.begin(9600);
  tempSensor.begin();
}

void loop() {
  Serial.print("Temperature: ");
  Serial.print(tempSensor.getWaterTemperature());
  Serial.println(" °C");
  delay(2000);
}
