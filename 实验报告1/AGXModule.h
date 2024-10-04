#ifndef AGXMODULE_H
#define AGXMODULE_H

#include <string>

class AGXModule {
public:
    std::string model;
    int ai;
    int cudaCores;
    int tensorCores;
    int memory;
    int storage;

    AGXModule();
};

#endif // AGXMODULE_H