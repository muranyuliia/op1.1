#pragma once

#include <iostream>
#include <cmath>

class Number {
private:
    int first; // Ціле число, ціла частина числа
    unsigned int second; // Додатне ціле число, дробова частина числа

public:
    // Методи доступу
    int GetFirst() const { return first; }
    unsigned int GetSecond() const { return second; }
    void SetFirst(int value);
    void SetSecond(unsigned int value);

    // Ініціалізація
    bool Init(int x, unsigned int y);

    // Введення з клавіатури
    void Read();

    // Виведення на екран
    void Display() const;

    // Множення на довільне ціле число
    void Multiply(int N);

    // Множення на число, введене користувачем
    void multiplyByUserInput();
};

// Оголошення функції makeNumber
Number makeNumber(int x, unsigned int y);
