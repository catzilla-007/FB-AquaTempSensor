#include <FB_AquaTempSensor.h>

namespace FB {
  AquaTempSensor::AquaTempSensor(int pin) {
    _oneWire = new OneWire(pin);
    _sensor = new DallasTemperature(_oneWire);
  }

  void AquaTempSensor::begin() {
    _sensor->begin();
  }

  float AquaTempSensor::getWaterTemperature() {
    _sensor->requestTemperaturesByIndex(WATER_SENSOR_INDEX);
    return _sensor->getTempCByIndex(WATER_SENSOR_INDEX);
  }
}
