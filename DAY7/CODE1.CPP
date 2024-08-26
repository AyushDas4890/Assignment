/*
Day - 07 Questions - Week-02 (August 23th, 2024)
Ques-01 Write C++ program that take array from the user and sort the array using bubble sort algorithm.

Input:
N = 5
arr[] = {4, 1, 3, 9, 7}

Output:
1 3 4 7 9
*/


#include <iostream>
#include <utility>
using namespace std;
    

int main()
{
    int size;
    
    cout<<"N :";
    cin>>size;
    int arr[size];
    

    cout<<"arr[]: ";
    for ( int i = 0 ; i<size ; i++){
        cin>>arr[i];
    }

    for (int i = 0 ; i < size-1 ; i++)
    {
        for ( int j = 0 ; j < size-i-1 ; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j]=temp;
            }
        }
    }

    

    cout<<"Output: "<<endl;
    for ( int i = 0 ; i< size ; i++)
    {
        cout<<arr[i]<<" ";
    }
}