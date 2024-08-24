/*
Ques-03 - Write a C++ program that takes an integer as input from the user and outputs its square.

Sample Input:- Enter a number: 7

Sample Output :- The square of 7 is: 49
*/

#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a number: ";
    int a;
    cin>>a;
    int square = a*a;

    cout<<"The square of "<<a<<" is: "<<square<<endl;
    return 0;
}

