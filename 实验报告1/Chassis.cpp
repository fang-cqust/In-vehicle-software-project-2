#include "Chassis.h"

Chassis::Chassis() :
    id("dp00000001"),
    model("SCOUT MINI"),
    wheelBase(451),
    trackWidth(490),
    groundClearance(115),
    turningRadius(0),
    driveType("四轮四驱"),
    maxRange(10) {
    tires = { "公路轮", "麦克纳姆轮", "公路轮", "麦克纳姆轮" };
}