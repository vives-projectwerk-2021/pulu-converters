#pragma once

#include "sensorValues.h"
#include "LoRaMessage.h"

#define Converters_DEBUG(x, ...)   //set as comment to enable debugging
#ifndef Converters_DEBUG
#define Converters_DEBUG(x, ...) printf("[Converters]\t" x "\r\n", ##__VA_ARGS__)
#endif

namespace Pulu {
    class Converters {
        public:
            static uint16_t double_to_uint16(double value);
            static LoRaMessage sensorValues_to_LoRaMessage(sensorValues values);
    };
};