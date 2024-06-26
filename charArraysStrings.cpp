# include<iostream>
# include<vector>
# include<string.h>
# include<algorithm>

using namespace std;

//printing the char array
void printCharArray(char ch[], int n){
    int index = 0;
    while(ch[index] != '\0'){
        cout << ch[index];
        index++;
    }
}

//1. Finding the length of the char array
//A. Using the while loop
/*
int getLength(char ch[], int n){
    int index = 0;
    int length = 0;

    while(ch[index] != '\0'){
        length++;
        index++;
    }

    return length;
}
*/

//B. Using the for loop
/*
int getLength(char ch[], int n){
    int len = 0;

    for(int i = 0 ; i < n ; i++){
        if(ch[i] == '\0'){
            return len;
        }

        else{
            len++;
        }
    }
    return len;
}
*/

//2. Reverse a string
void reverseString(char ch[], int n){
    int s = 0;
    int e = n - 1;

    while(s <= e){
        swap(ch[s++], ch[e--]);
    }
}

//3. Lower Case to Upper Case
void lowerToUpper(char ch[], int n){
    int index = 0;
    while(ch[index] != '\0'){
        if(ch[index] >= 'a' && ch[index] <= 'z'){
            ch[index] = ch[index] - 'a' + 'A';
        }
        index++;
    }
}

//4. Replace the charaters
//here -> replace '@' with ' '
void replaceChars(char ch[], int n){
    int index = 0;

    while(ch[index] != '\0'){
        if(ch[index] == '@'){
            ch[index] = ' ';
        }

        index++;
    }
}

//5. Check Palindrome or not

bool checkPalindrome(char ch[], int lenCharArray) {
    int index = 0;

    int s = 0;
    int e = lenCharArray - 1;

    while(s >= e) {
        if(ch[s] == ch[e]) {
            s++;
            e--;
        }
        else {
            return false;
        }
    }
    return true;
}

int main() {

    char ch[100];

    int n = 100; //maximum space to store characters in the char array


    cout << "Enter a sentence: " << endl;

    cin.getline(ch, 100);

    int lenCharArray = strlen(ch);

    if(checkPalindrome(ch, n)) {
        cout << "It is a palindrome" << endl;
    }

    else {
        cout << "Not a palindrome" << endl;
    }

    // reverseString(ch, strlen(ch));

    // lowerToUpper(ch, n);

    // replaceChars(ch, n);

    // printCharArray(ch, n);

    // cout << ch << endl;





    // string s = "Ishan";

    // reverse(s.begin(), s.end());

    // cout << s << endl;

    // cin.getline(ch, 100);

    // cout << endl;

    // cout << "Printing the sentence: " << endl << ch << endl;

    // cout << "The length of the input sentence is: " << strlen(ch) << endl;

    // cout << "The length of the sentence is: " << getLength(ch, 100) << endl;
    
    // char ch[10];

    // cout << "Enter a string: " << endl;
    // cin >> ch;

    // //printing the char array
    // for(int i = 0 ; i < 10 ; i++){
    //     cout << "Value at index: " << i << " is: " << ch[i] << endl;
    // }

    // //trying to access the null character present at index 5
    // char temp = ch[5];
    
    // int ans = (int)temp;

    // cout << "ASCII value of null character is: " << ans << endl;

    //Find the length of a character array

    // char ch[100];

    // cin >> ch;

    // cout << strlen(ch) << endl;
    
    return 0;
}