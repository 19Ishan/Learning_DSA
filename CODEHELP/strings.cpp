# include<iostream>
# include<string.h>
# include<algorithm>
using namespace std;

//1. Find the length of the char array
    //A. A bit lengthy
/*
int getLength(char ch[]){
    int count = 0;

    for(int i = 0 ; ; i++){
        if(ch[i] == '\0'){
            break;
        }

        else{
            count++;
        }
    }

    return count;
}
*/

    //B. A bit concise

int getLength(char name[]){
    int count = 0;

    for(int i = 0 ; name[i] != '\0' ; i++){
       count++;
    }

    return count;
}

//2. Given a string, reverse it

void reverseString(char ch[], int n){

    int s = 0;
    int e = n - 1;

    while(s<e){
        swap(ch[s++], ch[e--]);
    }

}



int main() {

    char name[20];

    cout << "Enter your name: " << endl;
    cin >> name;

    // name[3] = '\0';

    //3rd index par now we have a null character which stops the further output of our program

    // cout << "Your name is: " << name << endl;

    int n = getLength(name);

    cout << "The length of your name is: " << getLength(name) << endl;

    reverseString(name, n);

    cout << "The reversed version of your name is: " << name << endl;

    //we can print a string without having the need to make a different printString function as in the case of the arrays
    
    return 0;
}