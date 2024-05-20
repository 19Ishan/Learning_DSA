# include<iostream>
# include<string>
# include<cstring>

using namespace std;

//1. Find the last occur of a char in a string
    //given char = 'd' find last occur in "abcddefg"

//M1 -> Left to Right traversal
int findLastOccurLTR(string s, char ch, int index, int& ans) {
    if(index >= s.length()) {
        return ans;
    }

    if(s[index] == ch) {
        ans = index;
    }

    int recKaAns = findLastOccurLTR(s, ch, index + 1, ans);
    return recKaAns;
}

//M2 -> Right to Left traversal
void findLastOccurRTL(string s, char ch, int index, int& ans) {
    if(index < 0) {
        return;
    }

    //ek case
    if(s[index] == ch) {
        ans = index;
        return;
    }

    findLastOccurRTL(s, ch, index - 1, ans);
}

//2. Reverse a string
void reverseString(string& str, int s, int e) {
    cout << s << " " << e << endl;

    if(s >= e) {
        return;
    }

    swap(str[s], str[e]);

    return reverseString(str, s + 1, e - 1);
}

//3. LeetCode 146 Add Strings

//4. Check Palindrome strings

bool checkPalindrome(string s, int start, int end, bool& ans) {
    //base case
    if(start >= end) {
        return true;
    }

    //ek case
    if(s[start] == s[end]) {
        ans = checkPalindrome(s, start + 1, end - 1, ans);
    }

    else {
        ans = false;
    }   

    return ans;
}

// 5. Print all sub arrays of an array

void printSubArray(vector<int>& v, int start, int end) {
    //base case


    //ek case

}

int main() {

//1. 
    // string s = "dabced";
    // int index = 0;
    // char ch = 'd';
    // int ans = -1;

    // findLastOccurLTR(s, ch, index, ans);
    // findLastOccurRTL(s, ch, s.length() - 1, ans);

    // char ch2 = strrchr(s, 'd');

    // cout << ans << endl;

//2. 
    // string str = "abcdefg";
    // cout << str << endl;

    // reverseString(str, 0, str.length() - 1);

    // cout << str << endl;

//4. 
    string s = "abcba";
    bool ans = false;

    checkPalindrome(s, 0, s.length() - 1, ans);

    if(ans) {
        cout << "Palindrome" << endl;
    }

    else {
        cout << "Not Palindrome" << endl;
    }
    
    return 0;
}