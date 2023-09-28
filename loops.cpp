# include<iostream>

using namespace std;

int main() {

    //A. WHILE LOOPS
    //PROGRAM TO FIND THE SUM OF EVEN NOS UPTO A GIVEN N
    /*
    int n;

    cout << "Enter the number upto which you want to print the sum: " << endl;

    cin >> n; //10

    int sum = 0;

    int i = 1;

    while(i<=n){
        if(i%2 == 0){
            sum = sum + i;
        }

        i++;
    }

    cout << "The sum of all the even numbers upto n is: " << sum << endl;

    */

//WAP TO CHECK FOR PRIME NUMBERS
   //using while loop
   //this code is better written  using function because waha par we have an option to return 0 and 1 which states that a number is prime or not

   /*
    int n;

    cout << "Enter the number you want to check for prime or not: " << endl;

    cin >> n;
    
    int i = 2;

    while(i<n){

        if(n%i == 0){
            cout << n << " is not prime for: " << i << endl;
        }

        else{
            cout << n << " is prime for: " << i << endl;
        }

        i++;
    }
    */

   //CODE 2
   /*
   bool isPrime = 1;

    int i = 2;

    while(i<=(n-1)){
        if(n%i == 0){
            // cout << "Non Prime" << endl;
            isPrime = 0;
            break;
        }
        i++;
    }

    if(isPrime == 0){
        cout << "Non-Prime number" << endl;
    }

    else{
        cout << "Prime Number" << endl;
    }
    */



    //B. FOR LOOPS
    // we can use a for loop without any intialisation, condition and an updation statement too

    // but in this case our for loop might go into infinite loop as no condition is mentioned 

    // so we use break statement which is used to come out of an existing loop

    /*
    int n;

    cout << "Enter n" << endl;

    cin >> n;
    int i = 1;
    for( ; ; ){
        if(i<=n){
            cout << i << endl;
        }

        else{
            break;
        }
        i++;
    }
    */

//ERROR 
    /*
   for(int a = 0, int b = 1 ; a>=0 && b>=1 ; a--, b--){
    cout << a << " " << b << endl;
   }
   */

   /*
   The error in the code snippet is the use of the int keyword before the variable b in the initialization part of the for loop.

    When declaring multiple variables in the initialization part of a for loop, you don't need to repeat the type specifier for each variable. You only need to specify the type once, followed by the variable names, separated by commas.
    */
    
    // we can initialise multiple vars and conditions and even many updation statements too

    /*
    for (int a = 0, b = 1; a >= 0 && b >= 1; a--, b--) {
    cout << a << " " << b << endl;
    }
    */


    // flow of a for loop 
    //initialisation is one time then goes to check condition
    // if True then executes the code in the loop then the updation statement and then back to condition check and this process continues

    // if False then exists the loop body

    /*
    int n;

    cout << "Enter the total n numbers: " << endl;

    cin >> n;

    int sum = 0;

    for(int i = 1 ; i<=n ; i++){
        sum = sum + i;
    }

    cout << "The sum of n numbers is: " << sum << endl;
    */

   //FIBONACCI SERIES
   // using loops
    /*
    int n;

    cout << "Enter the number upto which you want to print the series: " << endl;

    cin >> n;

    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    for(int i = 0 ; i<n ; i++){
        int sum = a + b;
        cout << sum << " ";

        a = b;
        b = sum;
    }
    */


   //CONTINUE

    /*
    int i = 0;

    while(i<=10){

        if(i == 5){
            i++;
            continue;
        }
        
        cout << i << endl;
        i++;

    }
    */

    // which is used to skip the skip the current iteration means the line of code written after the continue keyword gets skipped

    /*
    int n;

    cin >> n;

    for(int i = 0 ; i<n ; i++){
        cout << " Hey" << endl;
        cout << "How are you? " << endl;

        continue;
        

        //this line of code has been neglected due to the continue keyword
        cout << "Neglected" << endl;
    }
    */

   /*
   for(int i = 0 ; i<=5 ; i++){
    cout << i << " ";
    i++;
   }
   */


//    for(int i = 0 ; i<=5 ; i--){
//     cout << i << " ";
//     i++;
//    }

    // int a = 1;

    // cout << a << endl;

    // int a = 2;

    // cout << a << endl;


    

    return 0;
}