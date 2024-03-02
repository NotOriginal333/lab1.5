#include "Long.h"
#include <iostream>

using namespace std;

int main() {
    Long num1, num2, num3;

    cout << "Enter the first number:" << endl;
    num1.Read();
    cout << "Enter the second number:" << endl;
    num2.Read();

    cout << "First number:" << endl;
    num1.Display();
    cout << "Second number:" << endl;
    num2.Display();

    num3 = num1.add(num2);
    cout << "Sum of numbers:" << endl;
    num3.Display();

    num3 = num1.multiply(num2);
    cout << "Multiplication of numbers:" << endl;
    num3.Display();

    num3 = num1.subtract(num2);
    cout << "Subtraction of numbers:" << endl;
    num3.Display();

    return 0;
}
