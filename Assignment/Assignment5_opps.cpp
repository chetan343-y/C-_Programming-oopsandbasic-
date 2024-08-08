#include <iostream>

using namespace std;

class ReverseNumber {
public:
    int originalNumber;
    int reversedNumber;

    void setNumber(int num) {
        originalNumber = num;
    }

    void reverse() {
        int remainder, reversed = 0;
        int temp = originalNumber;

        while (temp != 0) {
            remainder = temp % 10;
            reversed = reversed * 10 + remainder;
            temp /= 10;
        }

        reversedNumber = reversed;
    }

    void display() {
        cout << "Original number: " << originalNumber << endl;
        cout << "Reversed number: " << reversedNumber << endl;
    }
};

using namespace std;

class Factorial {
public:
    int num;
    long long factorial;

    void setNumber(int n) {
        num = n;
    }

    void calculateFactorial() {
        factorial = 1;
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
    }

    void displayFactorial() {
        cout << "Factorial of " << num << " is: " << factorial << endl;
    }
};

int main() {
    ReverseNumber number;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    number.setNumber(num);
    number.reverse();
    number.display();

        Factorial fact;
    int num1;

    cout << "Enter a non-negative number: ";
    cin >> num1;

    fact.setNumber(num1);
    fact.calculateFactorial();
    fact.displayFactorial();

    return 0;
}
