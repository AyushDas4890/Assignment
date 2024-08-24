/*Write a C++ program that takes two strings as input from the user and concatenates them. Then, output the concatenated string.

Sample Input :- Enter the first string: Hello
Enter the second string: World

Sample Output:- Concatenated string: HelloWorld */


#include <iostream>
using namespace std;

int main() { 
    string a,b;
    cout<<"Enter the first string: ";
    getline(cin,a);
    cout<<"Enter the secound string: ";
    getline(cin,b);
    cout<<"Concatenated string: "<<(a+b);

    
    return 0;
    }
