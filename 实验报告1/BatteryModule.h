#ifndef BATTERYMODULE_H
#define BATTERYMODULE_H

#include <string>

class BatteryModule {
public:
    std::string voltage;
    std::string capacity;
    std::string supplyVoltage;
    float chargeTime;

    // ����Ĭ�Ϲ��캯��
    BatteryModule();
};

#endif // BATTERYMODULE_H