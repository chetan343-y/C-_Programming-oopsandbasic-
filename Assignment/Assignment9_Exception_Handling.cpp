
#include <iostream>

#include <stdexcept>
using namespace std;


double divide(int a, int b) {
    if (b == 0) {
        throw runtime_error("Division by zero not possible");
    }
    return static_cast<double>(a) / b;
}




int getInt() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (cin.fail()) {
        throw runtime_error("Invalid integer input");
    }
    return num;
}

char getChar() {
    char c;
    cout << "Enter a character: ";
    cin >> c;
    if (cin.fail()) {
        throw runtime_error("Invalid character input");
    }
    return c;
}

int main() {
    // int num1, num2;
    // cout << "Enter two numbers: ";
    // cin >> num1 >> num2;

    // try {
    //     double result = divide(num1, num2);
    //     cout << "Result: " << result << endl;
    // } catch (const runtime_error& e) {
    //     cout << "Error: " << e.what() << endl;
    // }

    try {
        int num = getInt();
        cout << "You entered: " << num << endl;

        char c = getChar();
        cout << "You entered: " << c << endl;
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}