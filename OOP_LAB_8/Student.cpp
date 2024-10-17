#include "Student.h"
#include <iostream>

// Реалізація конструктора
Student::Student(const std::string& name, int age, const std::string& gender, double weight, int course)
    : Man(name, age, gender, weight), course(course) {}

// Метод для переприсвоєння курсу
void Student::setCourse(int course) {
    if (course >= 1 && course <= 4) { // Перевірка на допустимість курсу
        this->course = course;
    }
    else {
        std::cout << "Некоректний курс. Курс повинен бути від 1 до 4.\n";
    }
}

// Метод для збільшення курсу
void Student::increaseCourse() {
    if (course < 4) { // Припустимо, максимум 4 курси
        course++;
    }
    else {
        std::cout << "Вже на найвищому курсі.\n";
    }
}

// Метод для відображення інформації
void Student::display() const {
    Man::display(); // Виклик методу відображення базового класу
    std::cout << "Курс: " << course << "\n";
}
