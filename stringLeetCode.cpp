# include<iostream>
# include<string>
# include<vector>

using namespace std;

int getLength(char ch[]){

    int count = 0;

    for(int i = 0 ; ch[i] != '\0' ; i++){
        count++;
    }
    return count;
}

//Convert character to lower case
/*
char toLowerCase(char ch){
    char upper;

    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }

    else{
        upper = (ch - 'A' + 'a');
    }
    return upper;
}
*/

//1. Check palindrome

//A. CASE SENSITIVE
/*
bool checkPalindrome(char ch[], int n){

    int s = 0;
    int e = n - 1;

    while(s<=e){
        if(ch[s] != ch[e]){
            return 0;
        }

        else{
            s++;
            e--;
        }
    }
    return 1;
}
*/

//B. Non CASE SENSITIVE
/*
bool checkPalindrome(char ch[], int n){
    int s = 0;
    int e = n - 1;

    while(s<=e){
        if(toLowerCase(ch[s]) != toLowerCase(ch[e])){
            return 0;
        }

        else{
            s++;
            e--;
        }
    }
    return 1;
}
*/


//2. Palindrome check karo after neglecting all the non alpha numeric values, blank spaces etc

// bool valid(char ch){
//     if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z')){
//         return 1;
//     }

//     else{
//         return 0;
//     }
// }

// bool checkPalindromeNew(char ch[], int n){

//     int s = 0;
//     int e = n - 1;
//     while(s<=e){
//         if((valid(ch[s])) != (valid(ch[e]))){
//             return 0;
//         }

//         else{
//             s++;
//             e--;
//         }
//     }

//     return 1;
// }

//3. leetCode palindrome 125

char toLowerCase(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool valid(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') ){
        return 1;
    }
    else{
        return 0;
    }
}

bool checkPalin(string a){
    int s = 0;
    int e = a.length() - 1;
    while(s <= e){
        if(a[s] != a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

bool isPalindrome(string s) {

    string temp = "";

    for(int i = 0 ; i < s.length() ; i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }

    for(int i = 0 ; i < temp.length() ; i++){
        temp[i] = toLowerCase(temp[i]);
    }

    return (checkPalin(temp));
}


//4. 186 Reverse the words in a string leetCode
/*
void reverseWord(string& s, int a, int b){

    while(a <= b){
        swap(s[a++], s[b--]);
    }
}

void mainRevWords(string& s){

    int n = s.length();

    int a = 0, b = 0;

    for(int i = 0 ; i<n ; i++){

        if(s[i] == ' '){
            b = i - 1;
            reverseWord(s, a, b);
            a = b + 2;
        }
    }

    // for that last word after which null char hoga
    reverseWord(s, a, n - 1);

}
*/

//5. GFG find the maximum occurring character in a string
/*
char getMaxOccur(string s){

    int arr[26] = {0};

    for(int i = 0 ; i < s.length() ;i++){
        
        char ch = s[i];
        int num = 0;

        //lowerCase
        if(ch >= 'a' && ch <= 'z'){
            num = ch - 'a';
            arr[num]++;
        }

        //upperCase
        if(ch >= 'A' && ch <= 'Z'){
            num = ch - 'a';
            arr[num]++;
        }
    }

    //for finding the maximum character index
    int maxi = -1, ans = 0;

    for(int i = 0 ; i<26 ; i++){
        if(arr[i] > maxi){
            ans = i;
            maxi = arr[i];
        }
    }

    return (ans + 'a');
    
}
*/

//6. Replace spaces in a string with a particular thing

/*
//A. here we have taken extra space by creating a string

string replaceSpace(string s){
    string temp = "";
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }

        else{
            temp.push_back(s[i]);
        }
    }
    return temp;
}

//B. here extra memory has not been taken

string repSpace(string& s){

    int len = s.length();

    for(int i = 0 ; i < len ; i++){

        if(s[i] == ' '){
            s[i] = '@';
            s.insert(i + 1, "40");
            i = i + 2;
            len = len + 2;
        } 
    }

    return s;
}
*/

//7. Remove the occurrences in a particular string

//8. Permutations in a string

//given s1 = "ab" and s2 = "eidbaooo"
//find permutations of s1 in s2 say "ab" or "ba"

/*
bool checkEqualCount(int count1[26], int count2[26]){
    for(int i = 0 ; i < 26 ; i++){
        if(count1[i] != count2[i]){
            return 0;
        }
    }
    return 1;
}

bool checkPerm(string s1, string s2){

    //character count store karlo in an array for the s1

    int count1[26] = {0};
    for(int i = 0 ; i < s1.length() ; i++){
        int index = s1[i] - 'a';
        count1[index]++;
    }

    //make a window
    int windowSize = s1.length();
    int count2[26] = {0};

    //first window ka traversal start
    for(int i = 0 ; i < windowSize && i < s2.length() ; i++){
        int index = s2[i] - 'a';
        count2[index]++;
    }

    //check if the two lil arrays are equal or not

    if(checkEqualCount(count1, count2)){
        return 1;
    }

    //other wise continue forward
    for(int i = 0 ; i < s2.length() ; i++){
        //new char
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        //old char
        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        count2[index]--;

        //compare bhi karlo ab
        if(checkEqualCount(count1, count2)){
            return 1;
        }
    }
    return 0;

}
*/

//9. String compression

int compressString(vector<char>& chars){
    int i = 0;
    int ansIndex = 0;

    while(i < chars.size()){
        int j = i + 1;
        if(j < chars.size() && chars[i] == chars[j]){
            j++;
        }

        chars[ansIndex] = chars[i];
        ansIndex++;

        int count = j - i;

        string cnt = to_string(count);

        for(char ch: cnt){
            chars[ansIndex] = ch;
            ansIndex++;
        }
    }
return ansIndex
}



int main() {

//1. Palindrome

    // char name[20];

    // cout << "Enter your name?" << " ";
    // cin >> name;

    // int len = getLength(name);

    // cout << "Palindrome or not? " << checkPalindrome(name, len) << endl;


//2. Palindrome check karo after neglecting all the non alpha numeric values, blank spaces etc

    // char name[20];

    // cout << "Enter your name?" << " ";
    // cin >> name;

    // int len = getLength(name);

    // cout << "Palindrome or not? " << checkPalindromeNew(name, len) << endl;
    

//3. leetCode palindrome 125

    // string s = "A hello there";

    // cout << isPalindrome(s) << endl;

//4. Reverse words in a string II 186

    // string s;
    // cout << "Enter the line: ";
    // getline(cin, s);

    // mainRevWords(s);

    // cout << s;

//5. GFG find the maximum occurring character in a string

    // string s;
    // cout << "Enter your string: ";
    // cin >> s;

    // cout << getMaxOccur(s) << endl;

//6. Replace spaces with a particular value

    // string s;

    // cout << "Enter your string: ";
    
    // getline(cin, s);

    // cout << repSpace(s) << endl;

    // cout << replaceSpace(s) << endl;

//7. Remove the repeated occurrences in a string

//8. Permutations in a string

    string s1, s2;

    cin >> s1 >> s2;

    cout << checkPerm(s1, s2) << endl;


    return 0;
}