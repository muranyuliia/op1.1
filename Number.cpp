#include "Number.h"
using namespace std;
void Number::SetFirst(int value) {
    first = value;
}

void Number::SetSecond(unsigned int value) {
    second = value;
}

bool Number::Init(int x, unsigned int y) {
    if (y < 100) { // ������������, �� ������� ������� �� �������� 99
        first = x;
        second = y;
        return true;
    }
    else {
        return false; // ���������� �������� ��� second
    }
}

void Number::Read() {
    int x;
    unsigned int y;
    cout << "Enter first (integer part): ";
    cin >> x;
    cout << "Enter second (fractional part, 0-99): ";
    cin >> y;
    while (!Init(x, y)) {
        cout << "Invalid input. Please enter non-negative value for the fractional part (0-99): ";
        cin >> y;
    }
}

void Number::Display() const {
    cout << "Number: " << first << "." << (second < 10 ? "0" : "") << second << endl;
}

void Number::Multiply(int N) {
    // ������� ���� ������� �� N
    first *= N;

    // ���������� ���� ������� �������
    long long fullSecond = static_cast<long long>(second) * N;
    first += fullSecond / 100; // ������ ���� ������� �� �����
    second = abs(fullSecond % 100); // ������� - �� ���� �������� ��� ������� �������
}

void Number::multiplyByUserInput() {
    int x;
    unsigned int y;
    cout << "Enter first (integer part): ";
    cin >> x;
    cout << "Enter second (fractional part, 0-99): ";
    cin >> y;
    while (!Init(x, y)) {
        cout << "Invalid input. Please enter non-negative value for the fractional part (0-99): ";
        cin >> y;
    }
    int multiplier;
   
    cout << "Enter the multiplier: ";
    cin >> multiplier;
    Multiply(multiplier);
}

Number makeNumber(int x, unsigned int y) {
    Number n;
    if (!n.Init(x, y)) {
        cout << "Error: Invalid arguments passed to makeNumber." << endl;
        exit(1); // ���������� �������� � ��������
    }
    return n;
}
