#include "converters.h"

namespace Pulu {
    LoRaMessage Converters::measurement_to_LoRaMessage(measurement m) {
        LoRaMessage message;
        Converters_DEBUG("Creating LoRaMessage");
        message.addUint16(m.values.light[0])
        .addUint16(m.values.temperature[0])
        .addUint16(m.values.temperature[1])
        .addUint16(m.values.moisture[0])
        .addUint16(m.values.moisture[1])
        .addUint16(m.values.moisture[2])
        .addUint16(m.values.moisture[3])
        .addUint16((uint16_t)((100*100*m.values.battery)/3.6))
        .addUint8(m.status.light[0])
        .addUint8(m.status.temperature[0])
        .addUint8(m.status.temperature[1])
        .addUint8(m.status.moisture[0])
        .addUint8(m.status.moisture[0])
        .addUint8(m.status.moisture[0])
        .addUint8(m.status.moisture[0])
        .addUint8(m.status.battery);
        Converters_DEBUG("LoRaMessage created");
        return message;
    };
};