# include<iostream>

using namespace std;

int main() {

    //original variable
    int a = 5;

    //k is a reference variable
    //a nick name given to a
    //it doesn't has its own significance
    int &k = a;

    //another nickname say "c"
    int &c = a;

    cout << "Value of a is: " << a << endl;
    cout << "Address of a is: " << &a << endl;

    cout << "Value of k is: " << k << endl;
    cout << "Address of k is: " << &k << endl;

    cout << "Value of c is: " << c << endl;
    cout << "Address of c is: " << &c << endl;

    return 0;
}