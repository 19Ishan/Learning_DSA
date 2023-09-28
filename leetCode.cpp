# include<iostream>
# include<math.h>

using namespace std;

int main() {

//1. Find the difference between sum of the digits and the multiplication of the digits 

    //QUESTION CODE is 1281

    // int n = 234;

    // cout << 234%10 << endl; 
    // cout << 234/10 << endl;

    // cout << 23%10 << endl; 
    // cout << 23/10 << endl;

    /*
    whenever we need to extract a digit from the given number we take modulo of that number with 10 

    and whenever we need to remove that digit from that number we divide that number by 10
    */

   /*
    int sum = 0;
    int product = 1;

    int n;
    
    cout << "Enter a number: " << endl;

    cin >> n;

    while(n!=0){

        int digit = n%10;

        product = product * digit;
        sum = sum + digit;

        n = n/10;
    }

    cout << "The product is: " << product << endl;
    
    cout << "The sum is: " << sum << endl;

    cout << "The difference is: " << (product - sum) << endl;
    */


//2. Find the number of 1's bit in the number which we have input

   //QUESTION CODE 191

    /*
    //APPROACH 1 here first a decimal is converted to binary and then we count the total ones
    // int n;

    // cout << "Enter the number whose binary has to be calculated: " << endl;

    // cin >> n;

    // int num = 0, i = 0;

    // while(n!=0){

    //     int bit = n&1;

    //     num = (bit * pow(10, i)) + num;

    //     n = n>>1;

    //     i++;

    // }

    // cout << "The binary for the entered decimal is: " << num << endl;


    // int num;

    // cout << "Enter the binary number whose total ones count has to be calculated: " << endl;

    // cin >> num;

    // int count = 0;

    // while(num!=0){

    //     if(num%10 == 1){ // here we cannot write n&1 because compiler treats the "ans" as a decimal, bas hume pata hai that it is actually a binary number
    //         count++;
    //     }

    //     num = num/10;

    // }

    // cout << "The total number of 1's in this binary is: " << count << endl;

    //APPROACH 2 here a binary number is taken as input and then we calculate the total ones
    // int num;

    // cout << "Enter the binary number whose total ones count has to be calculated: " << endl;

    // cin >> num;

    // int count = 0;

    // while(num!=0){

    //     if(num%10 == 1){ // here we cannot write n&1 because compiler treats the "ans" as a decimal, bas hume pata hai that it is actually a binary number
    //         count++;
    //     }

    //     num = num/10;

    // }

    */

//3. REVERSE INTEGER 
// QUESTION CODE - 7

    /*
    int n;

    cout << "Enter the number whose reverse has to be printed: " << endl;

    cin >> n;

    int ans = 0;

    while(n!=0){

        int digit = n%10;

        if( (ans > INT_MAX/10) || (ans < INT_MIN/10)){
            return 0;
        }

        ans = (ans * 10) + digit;

        n = n/10;
    }

    cout << "The number in the reverse order is: " << ans << endl;
    */

//4. COMPLEMENT OF BASE 10 INTEGER
//CODE - 1009

    //MY SOLUTION MORE ELABORATED STEPS
    /*
    int n;

    cout << "Enter the number: " << endl;

    cin >> n;

    int count = 0;
    
    int mask = 0;

    int m = n;

    //special base case
    if(n == 0){
        cout << "Ans is 1" << endl;
    }

    while(m!=0){

        mask = (mask << 1) | 1;
        m = m>>1;

    }

    int ans = 0;

    while(count!=0){

        mask << 1;

        mask = (mask | 1);

    }

    int value = (mask & (~n));

    cout << value << endl;
    */

   //MORE CONCISE STEPS

    /*
    int n;

    cout << "Enter the number: " << endl;

    cin >> n;

    int count = 0;
    
    int mask = 0;

    int m = n;

    //special base case
    if(n == 0){
        cout << "ans is 1" << endl;
    }

    while(m!=0){

        mask = (mask << 1) | 1;
        m = m>>1;

    }

    int value = (mask & (~n));

    cout << value << endl;
    */


//5. POWER OF TWO
//QUESTION CODE - 231

    /*
    int n;

    cout << "Enter a number: " << endl;

    cin >> n;

    for(int i = 0 ; i <= n ; i++){
    
        int ans = pow(2, i);

        if(ans == n){
            cout << true << endl;
        }

        else{
            cout << false << endl;
        }

        i++;
    }
    */

    return 0;
}