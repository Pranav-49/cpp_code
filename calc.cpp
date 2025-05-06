#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "=== Smart Calculator ===\n";
    cout << "Choose operator (+, -, *, /, ^): ";
    cin >> op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
        case '+': cout << "Result: " << (num1 + num2); break;
        case '-': cout << "Result: " << (num1 - num2); break;
        case '*': cout << "Result: " << (num1 * num2); break;
        case '/':
            if (num2 != 0) cout << "Result: " << (num1 / num2);
            else cout << "Error: Division by zero!";
            break;
        case '^': cout << "Result: " << pow(num1, num2); break;
        default: cout << "Invalid operator!";
    }

    cout << endl;
    return 0;
}
