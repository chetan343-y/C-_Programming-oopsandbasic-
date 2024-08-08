// #include <iostream>

// using namespace std;

// int main() {
//     int num;

//     cout << "Enter an integer: ";
//     cin >> num;

//     if (num == 0) {
//         cout << num << " is neither even nor odd." << endl;
//     } else if (num % 2 == 0) {
//         cout << num << " is even." << endl;
//     } else {
//         cout << num << " is odd." << endl;
//     }

//     return 0;
// }

#include <iostream>

using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero" << endl;
            } else {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator" << endl;
    }

    return 0;
}
+