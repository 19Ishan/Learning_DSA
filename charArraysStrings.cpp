# include<iostream>
# include<vector>
# include<string.h>
# include<algorithm>

using namespace std;

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

int main() {

    char ch[100];

    cout << "Enter a sentence: " << endl;

    cin >> ch;

    reverseString(ch, strlen(ch));

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