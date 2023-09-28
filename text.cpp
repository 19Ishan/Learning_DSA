// C++ program to print all distinct elements in a given array
#include <iostream>
using namespace std;

void printDistinct(int arr[], int n)
{
	// Pick all elements one by one
	for (int i=0; i<n; i++)
	{
		// Check if the picked element is already printed
		cout << "this i value is : " << i << endl;
		int j;
		for (j=0; j<i; j++)
		cout << "this j value is : " << j << endl;
		if (arr[i] == arr[j])
			break;

		// If not printed earlier, then print it
		if (i == j)
		cout << "we are in 2nd if block" << endl;
		cout << arr[i] << " ";
		cout << endl;
	}
}

// Driver program to test above function
int main()
{
	int arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	printDistinct(arr, n);
	return 0;
}
