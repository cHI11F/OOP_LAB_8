#include "Man.h"
#include <iostream>

// Реалізація конструктора
Man::Man(const std::string& name, int age, const std::string& gender, double weight)
    : name(name), age(age), gender(gender), weight(weight) {}

// Метод для зміни імені
void Man::setName(const std::string& name) {
    this->name = name;
}

// Метод для зміни віку
void Man::setAge(int age) {
    this->age = age;
}

// Метод для зміни ваги
void Man::setWeight(double weight) {
    this->weight = weight;
}

// Метод для відображення інформації
void Man::display() const {
    std::cout << "Ім'я: " << name << ", Вік: " << age
        << ", Стать: " << gender << ", Вага: " << weight << " кг\n";
}
