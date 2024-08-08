#include <iostream>

using namespace std;

bool isEligibleToVote(int age) {
    return age >= 18;
}

void calculator(int num,int num2,int result); 
void calculator(int num,int num2,int result){
    char op; 
      cout<<"\nCalculator:-\nEnter Number: ";
       cin>>num; 
       cout<<"Enter operator +,-,*,/,^: ";
        cin>>op; 
        cout<<"Enter second number: ";
          cin>>num2;
           if(op=='+')result=num+num2; 
           if(op=='-')result=num-num2;
            if(op=='*')result=num*num2; 
            if(op=='/')result=num/num2; 
            if(op=='^')result=num^num2; 
            cout<<"result: "<<result<<"\n";

}

int max_two(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    // A person is eligible to vote if his/her age is greater than or equal to 18. Define a function to find out if he/she is eligible to vote.
    // int age;
    // cout << "Enter your age: ";
    // cin >> age;

    // if (isEligibleToVote(age)) {
    //     cout << "You are eligible to vote." << endl;
    // } else {
    //     cout << "You are not eligible to vote." << endl;
    // }

    // Create a calculator that takes a number, a basic math operator (+,-,*,/,^), and a second number all from user input, and have it print the result of the mathematical operation. The mathematical operations should be wrapped inside of functions.
// int a,b,c; 
// calculator(a,b,c); 

//Write a program that ask for two numbers, compare them and show the maximum. Declare a function called max_two that compares the numbers and returns the maximum.
    int num1, num2, max_num;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    max_num = max_two(num1, num2);

    cout << "The maximum number is: " << max_num << endl;
    return 0;
}
