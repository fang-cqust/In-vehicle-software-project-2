#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    std::string studentId;
    std::string name;

    // 声明构造函数
    Student();  // 默认构造函数
    Student(const std::string& id, const std::string& name);  // 参数化构造函数
};

#endif // STUDENT_H