# include<iostream>

using namespace std;

int main() {

/*
    int num = 5;

    //direct access of the value stored at the variable num
    cout << "The value of the num variable is: " << num << endl;

    //in order to access the memory address of the num variable -> we have 
    //an ADDRESS OF operator
    cout << "The address of the num variable is: " << &num << endl;

    //pointers declaration
    int *p = &num;

    //a pointer p of int data type

    cout << "The value of num using the dereferencing operator is: " << *p << endl;

    //simple cout of p gives the value stored in p i.e. address of the num
    cout << "The value stored at the pointer p gets printed which is nothing but the address of the num variable: " << p << endl;

    cout << "The address of the pointer p block, its own address: " << &p << endl;

    int i = 5;

    int *q = 0;

    q = &i;

    cout << *q << endl;
*/
    
    int a = 100;

    cout << &a << endl;
    cout << a << endl;

    int *p = &a;

    cout << p << endl;
    cout << *p << endl;

    int *q = p;

    cout << q << endl;
    cout << *q << endl;
    cout << &q << endl;

        

    return 0;
}