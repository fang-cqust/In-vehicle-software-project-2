#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    std::string studentId;
    std::string name;

    // �������캯��
    Student();  // Ĭ�Ϲ��캯��
    Student(const std::string& id, const std::string& name);  // ���������캯��
};

#endif // STUDENT_H