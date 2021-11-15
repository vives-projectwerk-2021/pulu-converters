#include "converters.h"

namespace Pulu {
    uint16_t Converters::double_to_uint16(double value) {
        return (uint16_t)(value*1000)
    }

    LoRaMessage Converters::sensorValues_to_LoRaMessage(sensorValues values) {
        LoRaMessage message;
        Converters_DEBUG("Creating LoRaMessage");
        message.addUint16(values.light[0])
        .addUint16(values.temperature[0])
        .addUint16(values.temperature[1])
        .addUint16(values.moisture[0])
        .addUint16(values.moisture[1])
        .addUint16(values.moisture[2])
        .addUint16(values.moisture[3])
        .addUint16(uint16_t (100*(values.battery/3.3)));
        Converters_DEBUG("LoRaMessage created");
        return message;
    };
};