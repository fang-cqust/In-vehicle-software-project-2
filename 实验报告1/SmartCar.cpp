#include "SmartCar.h"
#include <random>
#include <ctime>
#include <cstdlib>

// �����Ŀ��û�� <random> �� <ctime>������ʹ�� srand �� rand ����
//#include <cstdlib>
//#include <ctime>

SmartCar::SmartCar() :
    chassis(Chassis()),
    agxModule(AGXModule()),
    dualCamera(DualCamera()),
    lidar(Lidar()),
    gyroscope(Gyroscope()),
    display(Display()),
    batteryModule(BatteryModule()),
    student(Student())
{
    // Generate a random ID for the car
    std::string characters = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(0, characters.size() - 1);

    id = "cqusn";
    for (int i = 0; i < 16; ++i) {
        id += characters[dist(gen)];
    }

    // Initialize tires
    chassis.tires = { "��·��", "�����ķ��", "��·��", "�����ķ��" };
}