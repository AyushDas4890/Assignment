/*
Ques-02 Write a C++ function that takes a string as input and reverses it.

Sample Input:
Enter a string: CipherSchools

Sample Output:
Reversed string: sloohcSrehpiC


*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    int length = str.length();
    char temp;
    for ( int i = 0 ; i < length/2 ; i++ )
    {
        temp=str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=temp;
    }

    cout<<"The new string: "<<str;

}