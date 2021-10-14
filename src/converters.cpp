#include "converters.h"

namespace Pulu {
    LoRaMessage Converters::sensorValues_to_LoRaMessage(sensorValues values) {
        LoRaMessage message;
        message.addUint16(values.light[0])
        .addUint16(values.temperature[0])
        .addUint16(values.temperature[1])
        .addUint16(values.moisture[0])
        .addUint16(values.moisture[1])
        .addUint16(values.moisture[2])
        .addUint16(values.moisture[3])
        .addUint16(values.moisture[4])
        .addUint16(values.moisture[5])
        .addUint16(values.moisture[6])
        .addUint16(values.moisture[7])
        .addUint16(100);
        return message;
    };
};