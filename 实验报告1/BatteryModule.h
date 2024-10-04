#ifndef BATTERYMODULE_H
#define BATTERYMODULE_H

#include <string>

class BatteryModule {
public:
    std::string voltage;
    std::string capacity;
    std::string supplyVoltage;
    float chargeTime;

    // 声明默认构造函数
    BatteryModule();
};

#endif // BATTERYMODULE_H