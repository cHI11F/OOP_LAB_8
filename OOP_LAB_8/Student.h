#ifndef STUDENT_H
#define STUDENT_H

#include "Man.h"

class Student : public Man {
private:
    int course;

public:
    // Конструктор
    Student(const std::string& name, int age, const std::string& gender, double weight, int course);

    // Метод для переприсвоєння курсу
    void setCourse(int course);

    // Метод для збільшення курсу
    void increaseCourse();

    // Метод для відображення інформації
    void display() const;
};

#endif // STUDENT_H
