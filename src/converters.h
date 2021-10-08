#pragma once

#include "sensorValues.h"
#include "LoRaMessage.h"

namespace Pulu {
    class Converters {
        public:
            static LoRaMessage sensorValues_to_LoRaMessage(sensorValues values);
    };
};