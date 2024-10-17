#ifndef MAN_H
#define MAN_H

#include <string>

class Man {
private:
    std::string name;  // Ім'я
    int age;           // Вік
    std::string gender; // Стать: 'male' або 'female'
    double weight;     // Вага

public:
    // Конструктор
    Man(const std::string& name, int age, const std::string& gender, double weight);

    // Методи для зміни атрибутів
    void setName(const std::string& name); // Зміна імені
    void setAge(int age);                   // Зміна віку
    void setWeight(double weight);          // Зміна ваги

    // Метод для відображення інформації
    void display() const;                   // Виведення інформації про людину
};

#endif // MAN_H
