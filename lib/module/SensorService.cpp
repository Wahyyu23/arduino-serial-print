#include "SensorService.h"
#include "ISensor.h"

SensorService::SensorService(ISensor* _sensor){
    sensor = _sensor;  
};

void SensorService::setup(){
    sensor->setup();
}

void SensorService::inject(){
    sensor->inject();
}

void SensorService::invoke(const void* param){
    sensor->invoke(param);
}

ISensor* SensorService::getSensor(){
    return sensor;
}