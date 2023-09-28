# include<iostream>

using namespace std;


//1. factorial function
/*
int factorial(int n){

    //base case
    if(n == 0)
        return 1;
    
    return (n * (factorial(n - 1)));
}
*/

//2. Power of 2 function
int powerOfTwo(int n){

    //base case
    if(n == 0){
        return 1;
    }

    //recursive relation
    return (2 * powerOfTwo(n - 1));
}

//3. Print the counting 
void printCounting(int n){

    //base case
    if(n == 0){
        return;
    }


    //processing
    cout << n << " ";

    //recursive relation
    printCounting(n - 1);

}

int main() {

    int n;
    cin >> n;

//1. int ans = factorial(n);

    // int ans = powerOfTwo(n);
    // cout << ans << endl;

//3. Print counting

    printCounting(n);
    
    return 0;
}