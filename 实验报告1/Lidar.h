#ifndef LIDAR_H
#define LIDAR_H

#include <string>

class Lidar {
public:
    std::string model;
    int channelCount;
    float range;
    float powerConsumption;

    Lidar();
};

#endif // LIDAR_H