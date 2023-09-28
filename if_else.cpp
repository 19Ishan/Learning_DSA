# include<iostream>

using namespace std;

int main() {

    // int n;
    // cin >> n;

    /*
    int a = cin.get();

    this gives the value in the character 
    value of a is given as 1 that means it'll input it as '1' which is 49 in ASCII value


    cout << "The value of a using the cin.get() method is: " << a << endl; */


    // cout << "The value of a is: " << n << endl; 


    //PROGRAM TO CHECK WHETHER THE ENTERED CHARACTER IS LOWER OR UPPER OR NUMERIC
    //APPROACH 1
    /*
    char ch;

    cin >> ch;

    if(int(ch) >= 97 && int(ch) <= 122){
        cout << "You entered a lowercase alphabet" << endl;
    }

    else if(int(ch) >= 65 && int(ch) <= 90){
        cout << "You entered an uppercase alphabet" << endl; 
    }

    else if(int(ch) >= 49 && int(ch) <= 57){
        cout << "You entered a numeric value" << endl;
    }
    */


   //APPROACH 2
   /*
   char ch;
   cout << "Enter a character value you want to check for: " << endl;
   cin >> ch;

   if(ch >= 'a' && ch <= 'z'){
    cout << "You entered a lowercase alphabet" << endl;
   }

   else if(ch >= 'A' && ch <= 'Z'){
    cout << "You entered an uppercase alphabet" << endl;
   }

   else if(ch >= '0' && ch <= '9'){
    cout << "You entered a numeric value" << endl;
   }

   */

    return 0;

}