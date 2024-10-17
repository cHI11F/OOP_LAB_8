#include <iostream>
#include "Student.h"

int main() {
    std::string name, gender;
    int age, course;
    double weight;

    // Введення даних для людини
    std::cout << "Введіть дані для людини:\n";
    std::cout << "Введіть ім'я: ";
    std::getline(std::cin, name);
    std::cout << "Введіть вік: ";
    std::cin >> age;
    std::cin.ignore(); // Ігноруємо залишки рядка
    std::cout << "Введіть стать (male/female): ";
    std::getline(std::cin, gender);
    std::cout << "Введіть вагу: ";
    std::cin >> weight;

    Man person(name, age, gender, weight);
    std::cout << "Дані людини:\n";
    person.display();

    // Введення даних для студента
    std::cout << "\nВведіть дані для студента:\n";
    std::cout << "Введіть ім'я: ";
    std::cin.ignore(); // Ігноруємо залишки рядка
    std::getline(std::cin, name);
    std::cout << "Введіть вік: ";
    std::cin >> age;
    std::cin.ignore(); // Ігноруємо залишки рядка
    std::cout << "Введіть стать (male/female): ";
    std::getline(std::cin, gender);
    std::cout << "Введіть вагу: ";
    std::cin >> weight;
    std::cout << "Введіть курс: ";
    std::cin >> course;

    Student student(name, age, gender, weight, course);
    std::cout << "Дані студента:\n";
    student.display();

    // Збільшення курсу
    student.increaseCourse();
    std::cout << "Оновлені дані студента після збільшення курсу:\n";
    student.display();

    // Переприсвоєння курсу
    std::cout << "Введіть новий курс для студента: ";
    std::cin >> course;
    student.setCourse(course);
    std::cout << "Дані студента після переприсвоєння курсу:\n";
    student.display();

    return 0;
}
