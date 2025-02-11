#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;

    cout << "Enter two numbers followed by a mathematical operator (+, -, *, /): ";
    cin >> num1 >> num2 >> op;

    switch (op) {
        case '+':
            result = num1 + num2;
            cout << "Output: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Output: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Output: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Output: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
    }

    return 0;
}
