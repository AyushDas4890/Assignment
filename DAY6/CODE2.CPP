/*
Ques-02 Write a C++ program that takes an array as input and prints the sum of odd numbers and the sum of even numbers separately.

Sample Input:
Enter the size of the array: 5
Enter the array: 5 10 15 20 25

Sample Output:
Sum of odd numbers: 45
Sum of even numbers: 30

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

    int sum_odd = 0;
    int sum_even = 0;

    for ( int i = 0 ; i < size ; i++)
    {
        if ( arr[i]%2 == 0){
            sum_even+=arr[i];
        }

    }
    for ( int i = 0 ; i < size ; i++)
    {
        if ( arr[i]%2 != 0){
            sum_odd+=arr[i];
        }

    }

    cout<<"Sum of the odd numbers: "<<sum_odd<<endl;
    cout<<"Sum of the even numbers: "<<sum_even;

    return 0 ;

}