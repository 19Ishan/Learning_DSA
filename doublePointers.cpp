# include<iostream>

using namespace std;

int main() {

    int i = 5;

    int *p = &i;

    cout << &i << endl;

    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;

    int **q = &p;

    cout << q << endl;
    cout << *q << endl;
    cout << &q << endl;

    cout << endl;

    cout << i << endl;
    cout << *p << endl;
    cout << **q << endl;

    cout << endl;

    cout << &i << endl;
    cout << p << endl;
    cout << *q << endl;
    
    return 0;
}