
#include <iostream>
#include "Number.h"

using namespace std;

int main() {
    Number n;
    cout << "Creating a Number object via user input:" << endl;
    n.Read();
    n.Display();
    cout << "Enter the number to multiply by: ";
    int multiplier;
    cin >> multiplier;
    cout << "Multiplying the Number object by " << multiplier << ":" << endl;
    n.Multiply(multiplier);
    n.Display();

    return 0;
}

