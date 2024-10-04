#ifndef DUALCAMERA_H
#define DUALCAMERA_H

#include <string>

class DualCamera {
public:
    std::string model;
    std::string cameraType;
    int resolutionWidth;
    int resolutionHeight;
    int rgbFrameRate;
    int fovHorizontal;
    int fovVertical;
    int depthFrameRate;

    DualCamera();
};

#endif // DUALCAMERA_H