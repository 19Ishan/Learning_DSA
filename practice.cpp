# include<iostream>

using namespace std;

int fact(int n){
    int ans = 1;

    for(int i = n ; i >= 1 ; i--){
        ans = ans * i;
    }

    return ans;
}

int factor(int n){
    //base case
    if( n == 1){
        return 1;
    }

    return n * factor(n - 1);
}

int fibo(int n){
    if(n == 0) {
        return 0;
    }

    if(n == 1){
        return 1;
    }

    return (fibo(n - 1) + fibo(n - 2));
}

int getLength(char ch[]){
    int count = 0;

    for(int i = 0 ; ch[i] != '\0' ; i++){
        count++;
    }

    return count;
}

char toLowerCase(char ch){
    if( ch >= 'a' && ch <= 'z' ){
        return 1;
    }

    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

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

int main() {
    
    // char name[20];

    // cout << "Enter your name: ";
    // cin >> name;

    // int n = getLength(name);

    // cout << "Palindrome or not?" << checkPalindrome
    // (name, n) << endl;

    int n;
    cin >> n;

    // cout << fact(n) << endl;

    // cout << factor(n) << endl;
    
    cout << fibo(n) << endl;
    
    return 0;
}