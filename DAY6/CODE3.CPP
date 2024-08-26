/*

Ques-03 Write a C++ program that takes an array as input and prints the number of odd numbers and the number of even numbers in the array.

Sample Input:
Enter the size of the array: 5
Enter the array elements: 5 10 15 20 25

Sample Output:
Number of odd numbers: 3
Number of even numbers: 2

*/

#include <iostream>
using namespace std;

int main()
{
    
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the array: ";

    for ( int i = 0 ; i < size ; i++)
    {
        cin>>arr[i];
    }

    int odd = 0;
    int even = 0;

    for ( int i = 0 ; i < size ; i++)
    {
        if ( arr[i]%2 == 0){
            even+=1;
        }

    }
    for ( int i = 0 ; i < size ; i++)
    {
        if ( arr[i]%2 != 0){
            odd+=1;
        }

    }

    cout<<"Number of the odd numbers: "<<odd<<endl;
    cout<<"Number of the even numbers: "<<even;

    return 0 ;

}