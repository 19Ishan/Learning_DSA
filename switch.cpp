# include<iostream>

using namespace std;

int main() {
    
    char ch = '1';
    int num = 0;

    cout << "Beginning the switch case: " << endl;

    //IMPORTANT POINTS RELATED TO SWITCH CASE
    /*
    1. case ke aage all the written values can be int or char. NO string allowed. No float value allowed

    2. we can pass an integral expression in the switch condition or we can give a character input

    3. we can pass multiple statements inside any particular switch case

    4. we can also perform or write the code for nested switch cases
    */

   /*
    switch(ch){
        case 1: 
                cout << "First" << endl;
                cout << "Again saying first" << endl;
                break;
        
        case '1': 
                switch(num){
                    case 1: cout << "Value of the num is: " << num << endl;
                            break;
                    
                    default: cout << "This is the default case of the second switch case" << endl;
                }
                break;

        default: cout << "This is a default case" << endl;
    }

    cout << "Ending the switch case." << endl;
    */


//IMPORTANT DISCUSSION

    /*
    while(1){

        int n = 1;

        switch(n){
            case 1: 
                    cout << "Hello" << endl;
                    break;
        }

        exit(0); 
        
    }
    
    /* if we want to end such a switch case which is present inside an infinite loop then we can use this exit keyword 
    i.e. exit(0) */

    //EXIT(0)
    /* 
    1. exit(0) is a fuction call from cstdlib which is used to terminate a program and return control to the OS.
    2. By convention we write exit(0) which signifies successful termination of a program. 
    3. If a non zero number is passed it means an error.
    */


    // cstdlib in c++ 
    /*
    stands for c standard library, has many functions for memory management, random number generation 
    ex: malloc(), calloc, exit() etc
    */

// continue keyword
// continue is not valid in case of switch cases

    
    int n;

    cout << "Enter the amount: " << endl;

    cin >> n;

    int h = n/100;

    int o = n/1;

    int t = n/10;

    switch(n){
        
    }


    return 0;
}       