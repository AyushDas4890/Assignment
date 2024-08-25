/*
01 Write a C++ function that checks whether an integer is odd or even. If the integer is odd, print "Odd"; otherwise, print "Even."

Sample Input:
Enter a number: 5

Sample Output:
Odd

*/


#include <iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter the integer";
    cin>>n;
    if (n%2==0)
    {
        cout<<"EVEN"<<endl;

    }
    else{
        cout<<"ODD"<<endl;
    }

    return 0;
}