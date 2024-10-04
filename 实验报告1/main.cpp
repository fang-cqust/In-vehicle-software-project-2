#include "CarManager.h"
#include <iostream>

using namespace std;

int main() {
    srand(time(NULL));
    CarManager manager;
    manager.saveToFile("smartcars.txt");
    manager.loadFromFile("smartcars.txt");
    manager.displayCars();
    return 0;
}