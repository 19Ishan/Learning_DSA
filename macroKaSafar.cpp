# include<iostream>

using namespace std;

#define PI 3.14
#define AREA(l, b) (l * b)

int main() {

    int i = 5;

    cout << "The value of pi is: " << PI << endl;4

    int l1, b1, area;

    l1 = 3;
    b1 = 9;

    area = AREA(l1, b1);

    cout << "The area of the rectangle is: " << area << endl;
    
    return 0;
}