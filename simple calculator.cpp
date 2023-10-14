#include <iostream>
using namespace std;
int main()
{
    double number1, number2;
    char operation;
    double result;

    cout << "Calculator" << endl;
    cout << "-----------" << endl;

    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    switch (operation)
    {
        case '+':
            result = number1 + number2;
            break;

        case '-':
            result = number1 - number2;
            break;

        case '*':
            result = number1 * number2;
            break;

        case '/':
            if (number2 == 0)
            {
                cout << " Division by zero is not allowed." << endl;
                return 1;
            }
            result = number1 / number2;
            break;

        default:
            cout << "Invalid operation. Please choose from +, -, *, /." << endl;
            return 1;
    }

    cout << "Result: " << number1 << " " << operation << " " << number2 << " = " << result << endl;
    return 0;
}
