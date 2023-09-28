# include<iostream>

using namespace std;

void printArr(int arr[], int size){
    for(int i = 0 ; i<size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printCharArr(char arr[], int size){
    int i = 0;
    while(i<size){
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}

int main() {
    cout << endl;

    //declaration
    int first[10];

    //accessing
    cout << "The value at 4rth location is: " << first[3] << endl;
    cout << "The value at 1st location is: " << first[0] << endl;

    cout << endl;


    //initialisation
    int second[3] = {3, 5, 6};

    //accessing
    cout << "The value at 1st location is: " << second[0] << endl;

    cout << "The value at 2nd location is: " << second[1] << endl;

    cout << "The value at 3rd location is: " << second[2] << endl;

    cout << endl;

    int third[10] = {4, 5, 7}; //elements after 4, 5, 7 are initialised with '0'


    // int thirdSize = sizeof(third) / sizeof(int);
    //    cout << "The size of the third array is: " << thirdSize << endl;
    
    //if we try to print the size using the size of function it'll print 10 because there are 10 mem blocks
    //we wont be able to print 3 i.e. the actual values count in the array

    int n = 10;

    cout << "Printing the array: " << endl;

    for(int i = 0 ; i<10 ; i++){
        cout << third[i] << " ";
    }

    cout << endl;

    cout << endl;

    int fourth[10] = {}; //after C23 update aise initialise karne se bhi we can assign all elements to be equal to zero

    n = 10;

    cout << "Printing the array: " << endl;

    for(int i = 0 ; i<10 ; i++){
        cout << fourth[i] << " ";
    }

    cout << endl;
    
    cout << endl;

    int fifth[10] = {1}; //not possible ki aise hum sabhi elements ko one ke equal karde

    n = 10;


    int fifthSize = sizeof(fifth) / sizeof(int);
    //size of entire array i.e. 10 * 4 = 40
    //size of an int is 4 ====> 40/4 = 10

    cout << "The size of the fifth array is: " << fifthSize << endl;

    cout << "Printing the array: " << endl;
    for(int i = 0 ; i<10 ; i++){
        cout << fifth[i] << " ";
    }

    cout << endl;

    cout << endl;

    int sixth[10];

    fill_n(sixth, 10, 1); // is method se we can assign all the elements with the same values

    n = 10;

    cout << "Printing the array using fill_n method: " << endl;

    for(int i = 0 ; i<10 ; i++){
        cout << sixth[i] << " ";
    }

    cout << endl;

    cout << endl;


    //printing the array by making functions

//Dont forget to pass the size of the array as well too the function where the actual array is being passed


    cout << "Array's elements are printed by using the functions: " << endl;

    printArr(fourth, 10);

    printArr(third, 10);

    cout << endl;

    cout << endl;

//CODE HELP
    //array initialisation

    //both cases mein no error
    int new1[] = {1, 2, 3, 4, 5};
    int new2[5] = {1, 2, 3, 4, 5};

    //here except two elements all will be zero
    int new3[5] = {1, 2};
    printArr(new3, 5);

    //here it generates an error

    // int new4[2] = {1, 2, 3, 4, 5};
    //already displaying an initializer error -> more values in the initializer than the specified

    int arr[5] = {1, 2, 4, 5, 6};

    cout << &arr << endl;
    cout << arr[0] << endl;
    cout << &arr[0] << endl;
    
//TYPES OF ARRAYS
    //1. char arrays

    char ch[5] = {'a', 'b', 'c', 'd', 'f'};

    printCharArr(ch, 5);

    cout << ch[3] << endl;

    cout << endl;

    cout << endl; 

    return 0;
}