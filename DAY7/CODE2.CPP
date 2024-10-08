/*
Ques-02 Write C++ program that take array from the user and sort the array using insertion sort algorithm.

Input:
N = 5
arr[] = {4, 1, 3, 9, 7}

Output:
1 3 4 7 9
*/


#include <iostream>
using namespace std;


void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}


void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}


int main()
{
	int n;
    cout<<"N: ";
    cin>>n;
    int arr[n];
    cout<<"arr[]: ";
    for ( int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }

	insertionSort(arr, n);
	printArray(arr, n);

	return 0;
}

