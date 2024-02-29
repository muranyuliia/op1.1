#pragma once

#include <iostream>
#include <cmath>

class Number {
private:
    int first; // ֳ�� �����, ���� ������� �����
    unsigned int second; // ������� ���� �����, ������� ������� �����

public:
    // ������ �������
    int GetFirst() const { return first; }
    unsigned int GetSecond() const { return second; }
    void SetFirst(int value);
    void SetSecond(unsigned int value);

    // �����������
    bool Init(int x, unsigned int y);

    // �������� � ���������
    void Read();

    // ��������� �� �����
    void Display() const;

    // �������� �� ������� ���� �����
    void Multiply(int N);

    // �������� �� �����, ������� ������������
    void multiplyByUserInput();
};

// ���������� ������� makeNumber
Number makeNumber(int x, unsigned int y);
