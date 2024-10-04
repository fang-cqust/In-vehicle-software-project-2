#include "CarManager.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <algorithm>
#include <random>
#include <cstdlib>

using namespace std;

CarManager::CarManager() : currentCarIndex(0) {
    createSmartCars();
    students = createStudents();
    assignStudents();
}

void CarManager::createSmartCars() {
    for (int i = 0; i < 10; ++i) {
        cars.emplace_back();
    }
}

std::vector<Student> CarManager::createStudents() {
    vector<Student> students;
    for (int i = 0; i < 10; ++i) {
        string studentId = generateRandomID("S", 8);
        string name = "Student" + studentId.substr(1);
        students.emplace_back(Student(studentId, name));
    }
    return students;
}

void CarManager::assignStudents() {
    random_shuffle(students.begin(), students.end());
    for (size_t i = 0; i < cars.size(); ++i) {
        cars[i].student = students[i];
    }
}

string CarManager::generateRandomID(const string& prefix, int length) {
    string characters = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string id;
    for (int i = 0; i < length; ++i) {
        id += characters[rand() % characters.length()];
    }
    return prefix + id;
}

void CarManager::saveToFile(const string& filename) {
    ofstream file(filename);
    for (const auto& car : cars) {
        file << "Car ID: " << car.id << endl;
        file << "Chassis ID: " << car.chassis.id << endl;
        file << "AGX Model: " << car.agxModule.model << endl;
        file << "Camera Model: " << car.dualCamera.model << endl;
        file << "Lidar Model: " << car.lidar.model << endl;
        file << "Gyroscope Model: " << car.gyroscope.model << endl;
        file << "Display Size: " << car.display.size << endl;
        file << "Battery Voltage: " << car.batteryModule.voltage << endl;
        file << "Student ID: " << car.student.studentId << endl;
        file << "Student Name: " << car.student.name << endl;
        file << "--------------------------" << endl;
    }
    file.close();
}

void CarManager::loadFromFile(const string& filename) {
    ifstream file(filename);
    SmartCar car;
    while (file >> car.id) {
        car.chassis.id = generateRandomID("dp", 8);
        car.agxModule = AGXModule();
        car.dualCamera = DualCamera();
        car.lidar = Lidar();
        car.gyroscope = Gyroscope();
        car.display = Display();
        car.batteryModule = BatteryModule();
        car.student = Student("", "");
        cars.push_back(car);
    }
    file.close();
}

void CarManager::displayCars() {
    int currentCar = 0;
    char command;
    do {
        displayCar(cars[currentCar]);
        cout << "Press 'n' for next car, 'p' for previous car, or 'q' to quit: ";
        cin >> command;
        if (command == 'n' && currentCar < cars.size() - 1) {
            currentCar++;
        }
        else if (command == 'p' && currentCar > 0) {
            currentCar--;
        }
    } while (command != 'q');
}

void CarManager::displayCar(const SmartCar& car) {
    cout << "Car ID: " << car.id << endl;
    cout << "Chassis ID: " << car.chassis.id << endl << "AGX Ì×¼þ£º" << endl;
    cout << "\t" << "AGX Model: " << car.agxModule.model << endl;
    cout << "\t" << "AGX AI: " << car.agxModule.ai << endl;
    cout << "\t" << "AGX CUDA: " << car.agxModule.cudaCores << endl;
    cout << "Camera Model: " << car.dualCamera.model << endl;
    cout << "Lidar Model: " << car.lidar.model << endl;
    cout << "Gyroscope Model: " << car.gyroscope.model << endl;
    cout << "Display Size: " << car.display.size << endl;
    cout << "Battery Voltage: " << car.batteryModule.voltage << endl;
    cout << "Student ID: " << car.student.studentId << endl;
    cout << "Student Name: " << car.student.name << endl;
    cout << "--------------------------" << endl;
}