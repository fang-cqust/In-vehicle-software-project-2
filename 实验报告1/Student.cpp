#include "Student.h"
#include <random>
#include <ctime>

// Ĭ�Ϲ��캯��
Student::Student() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 25);

    std::string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    studentId = "S";
    for (int i = 0; i < 8; ++i) {
        studentId += characters[dis(gen)];
    }

    name = "Student" + studentId.substr(1);
}

// ���������캯��
Student::Student(const std::string& id, const std::string& name) : studentId(id), name(name) {}