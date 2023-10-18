#include <iostream>
// #define i row;
// #define j col;

using namespace std;

int main() {

    // PATTERN 1
    /*
    cout << "Enter the number of rows you want to print: " << endl;

    int n;

    cin >> n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << '*' << ' ';
            j++;
        }
        cout << endl;
        i++;
    }
    */

    // PATTERN 2
    // TYPE 1  ----> printing the value of "i"

    /*
    cout << "Enter the number of rows you want to print: " << endl;

    int n;

    cin >> n;

    int i = 1;

    while(i<=n){
        //in row i
        int j = 1;
        while(j<=n){
            cout << i << ' ';
            j++;
        }
        cout << endl;
        i++;
    }

    */

    // TYPE 2  ----> printing the value of "j"
    /*
    cout << "Enter the number of rows you want to print: " << endl;

     int n;

     cin >> n;

     int i = 1;

     while(i<=n){
         //in row i
         int j = 1;
         while(j<=n){
             cout << j << ' ';
             j++;
         }
         cout << endl;
         i++;
     }
    */

    // PATTERN 3
    /*
    cout << "Enter the number of rows you want to print: " << endl;

    int n;

    cin >> n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << j << ' ';
            j++;
        }
        cout << endl;
        i++;
    }
    */

    // PATTERN 4
    /*
    cout << "Enter the number of rows you want to print: " << endl;

    int n;

    cin >> n;

    int i = 1;

    while(i<=n){
        //in i row
        int j = 1;
        while(j<=n){
            cout << n - j + 1 << ' ';
            j++;
        }
        cout << endl;
        i++;
    }
    */

    // PATTERN 5

    /*
    cout << "Enter the number of rows you want to print: " << endl;

    int n;

    cin >> n;

    int i = 1;

    int count = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << count << ' ';
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    */

    // PYRAMID WALE PATTERNS

    // PATTERN 1
    /*
    cout << "Enter the number of rows you want to print: " << endl;

    int n;

    cin >> n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=i){
            cout << '*' << ' ';
            j++;
        }
        cout << endl;
        i++;
    }
    */

    // PATTERN 2
    /*
    cout << "Enter the number of rows you want to print: " << endl;

    int n;

    cin >> n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=i){
            cout << i << ' ';
            j++;
        }
        cout << endl;
        i++;
    }
    */

    // PATTERN 3
    /*
     cout << "Enter the number of rows you want to print: " << endl;

     int n;

     cin >> n;

     int i = 1;

     while(i<=n){
         int j = 1;
         while(j<=i){
             cout << i << ' ';
             j++;
         }
         cout << endl;
         i++;
     }
     */

    // PATTERN 4
    /*
     cout << "Enter the number of rows you want to print: " << endl;

     int n;

     cin >> n;

     int i = 1;

     int count = 1;

     while(i<=n){
         int j = 1;
         while(j<=i){
             cout << count << ' ';
             count++;
             j++;
         }
         cout << endl;
         i++;
     }
     */

    // PATTERN 5
    // TYPE 1

    // here we have used a particular logic wala formula to solve it
    /*
     cout << "Enter the number of rows you want to print: " << endl;

     int n;

     cin >> n;

     int i = 1;

     while(i<=n){
         int j = 1;
         while(j<=i){
             cout << i + j - 1 << ' ';
             j++;
         }
         cout << endl;
         i++;
     }
     */

    // TYPE 2

    // here we have used the row value or the i value to print the desired numbers in the order

    /*
    cout << "Enter the number of rows you want to print: " << endl;

    int n;

    cin >> n;

    int i = 1;

    while(i<=n){
        int j = 1;
        int value = i;
        while(j<=i){
            cout << value << ' ';
            value++;
            j++;
        }
        cout << endl;
        i++;
    }
    */

    // PATTERN 6
    /*
    cout << "Enter the number of rows you want to print: " << endl;

     int n;

     cin >> n;

     int i = 1;

     while(i<=n){
         int j = 1;
         while(j<=i){
             cout << i - j + 1 << ' ';
             j++;
         }
         cout << endl;
         i++;
     }
     */

    // PATTERN 7

    // TYPE 1
    // here the simple concept of incrementing the character is used

    /*
    cout << "Enter the number of rows you want to print: " << endl;

    int n;

    cin >> n;

    int i = 1;

    char ch = 'A';

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << ch << ' ';
            j++;
        }
        cout << endl;
        i++;
        ch++;
    }
    */

    // TYPE 2
    // here we have used a formula

    /*
    cout << "Enter the number of rows you want to print: " << endl;

    int n;

    cin >> n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            char ch = 'A' + i - 1;
            cout << ch << ' ';
            j++;
        }
        cout << endl;
        i++;
    }
    */

    // PATTERN 8
    // TYPE 1
    //  here we have used the incrementation of a character value
    /*
     cout << "Enter the number of rows you want to print: " << endl;

     int n;

     cin >> n;

     int i = 1;

     while(i<=n){
         int j = 1;
         char ch = 'A';
         while(j<=n){
             cout << ch << ' ';
             ch++;
             j++;
         }
         cout << endl;
         i++;
     }
     */

    // TYPE 2
    // here we have used a formula

    /*
    cout << "Enter the number of rows you want to print: " << endl;

    int n;

    cin >> n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            char ch = 'A' + j - 1;
            cout << ch << ' ';
            j++;
        }
        cout << endl;
        i++;
    }
    */

    // PATTERN 9

    /*
     cout << "Enter the number of rows you want to print: " << endl;

     int n;

     cin >> n;

     int i = 1;

     char ch = 'A';

     while(i<=n){
         int j = 1;
         while(j<=n){
             cout << ch << ' ';
             j++;
             ch++;
         }
         cout << endl;
         i++;
     }
     */

    // PATTERN 10

    /*
    cout << "Enter the number of rows you want to print: " << endl;

    int n;

    cin >> n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            char ch = i + j + 'A' - 2;
            cout << ch << ' ';
            j++;
        }
        cout << endl;
        i++;
    }
    */

    // TYPE 2 using more easier approach
    /*
    cout << "Enter the number of rows you want to print: " << endl;

     int n;

     cin >> n;

     int i = 1;

     while(i<=n){
         int j = 1;
         char value = 'A' + i - 1;
         while(j<=n){
             cout << value << ' ';
             j++;
             value++;
         }
         cout << endl;
         i++;
     }
    */

    // PATTERN 11
    // TYPE 1 using char ++
    /*
    cout << "Enter the number of rows you want to print: " << endl;

    int n;

    cin >> n;

    int i = 1;

    char ch = 'A';

    while(i<=n){
        int j = 1;
        while(j<=i){
            cout << ch << ' ';
            j++;
        }
        cout << endl;
        ch++;
        i++;
    }
    */

    // TYPE 2 using the formula
    /*
     cout << "Enter the number of rows you want to print: " << endl;

     int n;

     cin >> n;

     int i = 1;

     char ch = 'A';

     while(i<=n){
         int j = 1;
         char value = 'A' + i - 1;
         while(j<=i){
             cout << value << ' ';
             j++;
         }
         cout << endl;
         i++;
     }
     */

    // PATTERN 11
    /*
    cout << "Enter the number of rows you want to print: " << endl;

    int n;

    cin >> n;

    char count = 'A';

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=i){
            cout << count << ' ';
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    */

    // PATTERN 12

    /*
    cout << "Enter the number of rows you want to print: " << endl;

    int n;

    cin >> n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=i){
            cout << char(i + j + 'A' - 2) << ' ';
            j++;
        }
        cout << endl;
        i++;
    }
    */

    // PATTERN 13
     /*
     cout << "Enter the number of rows you want to print: " << endl;

     int n;

     cin >> n;

     int i = 1;

     while(i<=n){
         int j = 1;
         char value = n - i + 'A';
         while(j<=i){
             cout << value << ' ';
             j++;
             value++;
         }
         cout << endl;
         i++;
     }
     */
     

    // PATTERNS HAVING SPACES AND UNIQUE SHAPE

    // PATTERN1

    /*
    cout << "Enter the number of rows you want to print: " << endl;

    int n;

    cin >> n;

    int i = 1;

    while(i<=n){
        //for spaces

        int space = n - i;

        while(space){
            cout << " ";
            space--;
        }

        //for the stars

        int j = 1;

        while(j<=i){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    */

    // PATTERN 2
    /*
     cout << "Enter the number of rows you want to print: " << endl;

     int n;

     cin >> n;

     int i = 1;

     while(i<=n){
         int j = n - i + 1;
         while(j>=1){
             cout << '*' << ' ';
             j--;
         }
         cout << endl;
         i++;
     }
     */

    // PATTERN 3
    /*
     cout << "Enter the number of rows you want to print: " << endl;

     int n;

     cin >> n;

     int i = 1;

     while(i<=n){

         //spaces

         int spaces = i - 1;

         while(spaces){
             cout << ' ';
             spaces--;
         }

         //stars

         int stars = n - i + 1;

         while(stars){
             cout << '*';
             stars--;
         }
         cout << endl;
         i++;
     }
     */

    // PATTERN 4
    /*
    cout << "Enter the number of rows you want to print: " << endl;

    int n;

    cin >> n;

    int i = 1;

    while (i <= n){

        int j = 1;

        // spaces

        int spaces = i - 1;

        while (spaces){

            cout << ' ';
            spaces--;

        }

        // numbers

        int numbers = n - i + 1;

        while (numbers){

            cout << i;
            numbers--;
        }

        cout << endl;
        i++;
    }
    */

   //PATTERN 5

   /*
    cout << "Enter the number of rows you want to print: " << endl;

    int n;

    cin >> n;

    int i = 1;

    while(i<=n){
        int j = 1;
        
        //spaces

        int spaces = n - i;

        while(spaces){
            cout << ' ';
            spaces--;
        }

        //numbers

        int numbers = i;

        while(numbers){
            cout << i;
            numbers--;
        }
        cout << endl;
        i++;

    }
    */

   //PATTERN 6

    /*
    cout << "Enter the number of rows you want to print: " << endl;

    int n;

    cin >> n;

    int i = 1;
    

    while(i<=n){

        int count = i;
        
        //spaces
        int spaces = i - 1;

        while(spaces){
            cout << ' ';
            spaces--;
        }

        //numbers
        int numbers = n - i + 1;

        while(numbers){
            cout << count;
            numbers--;
            count++;
        }
        cout << endl;
        i++;

    }  
    */

   //PATTERN 7

    /*
    cout << "Enter the number of rows you want to print: " << endl;

    int n;

    cin >> n; 

    int count = 1;

    int i = 1;

    while(i<=n){
        
        //spaces

        int spaces = n - i;

        while(spaces){
            cout << ' ';
            spaces--;
        }

        //numbers

        int numbers = i;

        while(numbers){
            cout << count;
            count++;
            numbers--;
        }
        cout << endl;
        i++;
    }
    */

//ADVANCED PATTERNS
    //PATTERN 1

    /*
    cout << "Enter the number of rows you want to print: " << endl;

    int n;

    cin >> n;

    int i = 1;

    while(i<=n){

        int count = 1;

        //spaces

        int spaces1 = n - i;

        while(spaces1){
            cout << ' ';
            spaces1--;
        }

        // numbers

        int numbers = i;

        while(numbers){
            cout << count;
            count++;
            numbers--;
        }

        //numbers2

        int numbers2 = i - 1;

        while(numbers2){
            cout << numbers2;
            numbers2--;
        }

        cout << endl;
        i++;
    }
    */

   //PATTERN 2

    /*
    cout << "Enter the number of rows you want to print: " << endl;

    int n;

    cin >> n;

    int i = 1;

    while(i<=n){


        int count = 1;

        //1st triangle

        int numbers = n - i + 1;

        while(numbers){
            cout << count;
            numbers--;
            count++;
        }

        //2nd triangle

        int stars = i - 1;

        while(stars){
            cout << '*';
            stars--;
        }

        //3rd triangle


        int stars2 = i - 1;

        while(stars2){
            cout << '*';
            stars2--;
        }

        //4rth triangle

        int numbers2 = n - i + 1;

        while(numbers2){
            cout << numbers2;
            numbers2--;
        }
        cout << endl;
        i++;



    }
    */

   //CODEHELP

//1. Hollow Rectangle
/*
    int ROW = 4;
    int COL = 4;

    for(int row = 0 ; row < ROW ; row++){
        for(int col = 0 ; col < COL ; col++){
            if(row == 0 || row == ROW - 1){
                cout << "*" << " ";
            }

            else{
                if(col == 0 || col == COL - 1){
                    cout << "*" << " ";
                }

                else{
                    cout << " " <<" ";
                }
            }
        }
        cout << endl;
    }
*/

//2. Half Pyramid

    // for(int i = 0 ; i < 5 ; i++){
    //     for(int j = 0 ; j < i + 1 ; j++){
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

//3. Inverted Half Pyramid
/*
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 4 - i ; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
*/

//4. Numeric Half Pyramid
/*
    int n = 4;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i + 1 ; j++){
            cout << j + 1 << " ";
        }
        cout << endl;
    }
*/

//5. Inverted Numeric Half Pyramid
/*
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n - i ; j++){
            cout << j + 1 << " ";
        }
        cout << endl;
    }
*/

//6. Full Pyramid
/*
    int n = 5;

    for(int i = 0 ; i < n ; i++){
        //spaces
        for(int j = 0 ; j < n - i - 1 ; j++){
            cout << " ";
        }

        //stars
        for(int j = 0 ; j < i + 1 ; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
*/

//7. Inverted Full Pyramid
/*
    int n = 5;

    for(int i = 0 ; i < n ; i++){
        //spaces
        for(int j = 0 ; j < i ; j++){
            cout << " ";
        }

        //stars
        for(int j = 0 ; j < n - i ; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
*/

//8.  Diamond shaped
/*
    int num = 8;

    int n = num / 2;

    for(int i = 0 ; i < n ; i++){
        //spaces
        for(int j = 0 ; j < n - i - 1 ; j++){
            cout << " ";
        }

        //stars
        for(int j = 0 ; j < i + 1 ; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }

    for(int i = 0 ; i < n ; i++){
        //spaces
        for(int j = 0 ; j < i ; j++){
            cout << " ";
        }

        //stars
        for(int j = 0 ; j < n - i ; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
*/

//9. Hollow Pyramid With open base
/*
    int n = 5;

    for(int i = 0 ; i < n ; i++){
        //spaces
        for(int j = 0 ; j < n - i - 1 ; j++){
            cout << " ";
        }

        //stars
        for(int j = 0 ; j < i + 1 ; j++){
            if(j == 0 || j == i + 1 - 1){
                cout << "* ";
            }

            else{
                cout << " " << " ";
            }
        }

        cout << endl;
    }
*/

//10. Inverted Half Pyramid With Open Base 9. wale ka reverse kardiya
/*
    int n = 5;

    for(int i = 0 ; i < n ; i++){
        //spaces
        for(int j = 0 ; j < i ; j++){
            cout << " ";
        }

        //stars
        for(int j = 0 ; j < n - i ; j++){
            if(j == 0 || j == n - i - 1){
                cout << "*" << " ";
            }

            else{
                cout << " " << " ";
            }
        }
        cout << endl;
    }
*/

//11. Hollow Diamond
/*
    int num = 8;
    int n = num / 2;

    //printing the upper half
    for(int i = 0 ; i < n ; i++){
        //spaces
        for(int j = 0 ; j < n - i - 1 ; j++){
            cout << " ";
        }

        //stars
        for(int j = 0 ; j < i + 1 ; j++){
            if(j == 0 || j == i + 1 - 1){
                cout << "*" << " ";
            }

            else{
                cout << " " << " ";
            }
        }
        cout << endl;
    }


    //printing the lower half of the diamond
    for(int i = 0 ; i < n ; i++){
        //spaces
        for(int j = 0 ; j < i ; j++){
            cout << " ";
        }

        //stars
        for(int j = 0 ; j < n - i ; j++){
            if(j == 0 || j == n - i - 1){
                cout << "*" << " ";
            }

            else{
                cout << " " << " ";
            }
        }
        
        cout << endl;
    }
*/

    //ADVANCED PATTERNS

//1. Flipped Solid Diamond

    int num = 8;
    int n = num / 2;

    for(int i = 0 ; i < n ; i++){
        
        //inverted half pyramid
        for(int j = 0 ; j < n - i ; j++){
            cout << "*";
        }

        //hollow pyramid
        for(int j = 0 ; j < (2*i + 1) ; j++){
            cout << " ";
        }

        //half pyramid
        for(int j = 0 ; j < n - i ; j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i + 1 ; j++){
            cout << "*";
        }

        for(int j = 0 ; j < (2*n - 2*i - 1) ; j++){
            cout << " ";
        }

        for(int j = 0 ; j < i + 1 ; j++){
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}

