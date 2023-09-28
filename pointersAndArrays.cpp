# include<iostream>

using namespace std;

int main() {

    //playing with arrays and pointers
/*
    int arr[5] = {12, 23, 34, 45, 56};
    cout << "The address of the first block of this arr is: " << arr << endl;
    
    cout << "The address of the first block of this arr is: " << &arr[0] << endl;

    cout << "The address of the second block of this arr is: " << &arr[1] << endl;
    
    cout << "The address of the third block of this arr is: " << &arr[2] << endl;

    cout << "Value of 0th location: " << (*arr) << endl;

    cout << "Value of 0th location + 1: " << (*arr + 1) << endl;

    cout << "Value of 0th location + 2: " << (*arr + 2) << endl;

    cout << "Value at 0th location: " << (*arr) << endl;

    cout << "Value at 1st location: " << *(arr + 1) << endl;

    cout << "Value at 2nd location: " << *(arr + 2) << endl;

    cout << "Value of arr[2] is : " << arr[2] << endl;

    cout << "Value of arr[2] is : " << *(arr + 2) << endl;

    int i = 3;

    cout << "Value of i[arr]: " << i[arr] << endl;
*/  

/*
    int arr[10];

    cout << "The size of the array is: " << sizeof(arr) << endl;

    int *p = &arr[0];

    cout << "The size of the address stored in the pointer p is: " << sizeof(p) << endl;

    // gives error
    // arr = arr + 1;
*/

    int arr[10];

    int *q = &arr[0];

    cout << "Address of: " << q << endl;

    q = q + 1;

    cout << "New address is: " << q << endl;



     
    return 0;
}