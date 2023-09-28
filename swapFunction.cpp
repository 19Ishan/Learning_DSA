# include<iostream>

using namespace std;

int main() {

//1. Using the temp variable
/*
    int a = 10;
    int b = 20;

    cout << "Before swapping: " << endl;

    cout << "The value of a is: " << a << ", and the value of b is: " << b << endl;

    //implementing the swap function
    int temp = b;
    b = a;
    a = temp;

    cout << "After swapping: " << endl;
    cout << "The value is: " << a << ", and the value of b is: " << b << endl;
*/

//2. Using addition and subtraction
/*
    int a = 10;
    int b = 20;

    cout << "Before Swapping: " << endl;

    cout << "The value of a is: " << a << ", and the value of b is: " << b << endl;

    b = a + b;

    a = b - a;

    b = b - a;

    cout << "After swapping: " << endl;

    cout << "The value of a is: " << a << ", and the value of b is: " << b << endl;
*/

//3. Using the XOR operation
/*
    int a = 2;
    int b = 3;

    cout << "Before Swapping: " << endl;

    cout << "The value of a is: " << a << ", and the value of b is: " << b << endl;

    int c = (a^b);

    a = (c^a);

    b = (c^b);

    cout << "After Swapping: " << endl;

    cout << "The value of a is: " << a << ", and the value of b is: " << b << endl;
*/
    return 0;
}