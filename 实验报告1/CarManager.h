#ifndef CARMANAGER_H
#define CARMANAGER_H

#include "SmartCar.h"
#include <vector>
#include <string>

class CarManager {
public:
    CarManager();
    void createSmartCars();
    void assignStudents();
    void saveToFile(const std::string& filename);
    void loadFromFile(const std::string& filename);
    void displayCars();

private:
    std::vector<SmartCar> cars;
    std::vector<Student> students;
    int currentCarIndex;

    std::string generateRandomID(const std::string& prefix, int length);
    std::vector<Student> createStudents();
    void displayCar(const SmartCar& car);
};

#endif // CARMANAGER_H