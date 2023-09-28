# include<iostream>

using namespace std;

//pass by value wale

//1. 
/*
void update(int a){
    a = a / 2;
}
*/

//2. 
/*
int update(int a){
    a = a - 5;
    return a;
}
*/

//3. 
/*
int update(int a){
    int ans = a * a;
    return ans;
}
*/

int main() {
    
    //1.
    /*
    int a = 10;
    update(a);
    cout << a << endl;
    */

    //2. 
    /*
    int a = 15; 
    update(a);
    cout << a << endl;
    */

    //3. 
    /*
    int a = 5;
    a = update(a);
    cout << a << endl;
    */






    return 0;

}