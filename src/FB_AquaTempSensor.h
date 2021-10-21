#include <DallasTemperature.h>
#include <OneWire.h>

#ifndef FB_AQUA_TEMP_SENSOR_H
#define FB_AQUA_TEMP_SENSOR_H

#define WATER_SENSOR_INDEX 0

namespace FB {
  class AquaTempSensor {
    public:
      AquaTempSensor(int pin);
      void begin();
      float getWaterTemperature();

    private:
      OneWire * _oneWire;
      DallasTemperature * _sensor;
  };
}
#endif
