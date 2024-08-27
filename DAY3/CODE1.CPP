/*
Day - 04 Questions - Week-02 (August 20th, 2024)
Ques:01: Write a C++ program that takes two integers as input and performs the following arithmetic operations:
Addition
Subtraction
Multiplication
Division (ensure that you handle division by zero)
Modulus

Sample Output :-

Enter first integer: 10
Enter second integer: 3
Addition: 13
Subtraction: 7
Multiplication: 30
Division: 3.33333
Modulus: 1


*/

#include <iostream>
using namespace std;

int main()
{

    int n1,n2;
    cout<<"Enter the first integer: ";
    cin>>n1;
    cout<<"Enter the secound integer: ";
    cin>>n2;

    int add,sub,mul,mod;
    double div;

    add = n1 + n2;
    sub = n1 - n2;
    mul = n1*n2;
    div = static_cast<double>(n1/n2);
    mod = n1%n2;
    cout<<"Addition: "<<add<<endl;
    cout<<"Subtraction: "<<sub<<endl;
    cout<<"Multiplication: "<<mul<<endl;
    cout<<"Division: "<<div<<endl;
    cout<<"Modulus: "<<mod<<endl;

}
