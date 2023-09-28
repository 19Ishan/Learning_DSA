# include<iostream>

using namespace std;

int main() {

    /*
    int a = 4;
    int b = 7;

    cout << "a & b is " << (a&b) << endl;
    cout << "a or b is " << (a|b) << endl;
    cout << "a xor b is " << (a^b) << endl;
    cout << "not of a is " << (~a) << endl;
    cout << "not of b is " << (~b) << endl;


    
    for +ve numbers the padding that is the extra bits that are added after right or left shift are zeroes

    for -ve numbers the padding is compiler dependent can be ones or can be zeroes
    


    /*
    //right shift mein divide the number by 2 for every shift (in positive numbers)
    cout << "17>>1 is " << (17>>1) << endl; //17/2 is 8
    cout << "17>>2 is " << (17>>2) << endl; // 17/2 is 8 and then 8/2 is 4


    //left shift mein multiply the number by 2 for every shift (in positive numbers)
    cout << "19<<1 is " << (19<<1) << endl; //19*2 is 38
    cout << "21<<2 is " << (21<<2) << endl; //21*2 is 42 then 42*2 is 84
    */

   /*
    int a = 1;
    int b = 2;

    //here the value of b is 2 only because we are using an OR operator which checks only one condition due to which the second result doesn't gets executed

    // had it been an && operator then both condition will get verified and hence the value of b would be 3

    if(a-- > 0 || ++b > 2){ 
        cout << "Stage1 ";
    }

    else{
        cout << "Stage 2";
    }

    cout << a << " " << b << endl;

    */

    int a = 1;
    int b = a++;
    int c = ++a;

    cout << b;
    cout << c;
       
    return 0;
}