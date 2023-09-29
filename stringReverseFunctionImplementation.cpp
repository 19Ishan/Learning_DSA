# include<iostream>

using namespace std;

//1. Using while loop (kind of recursion) -> TWO POINTERS
/*
void reverseString(char ch[], int n){
    int s = 0;
    int e = n - 1;

    while(s <= e){
        swap(ch[s++], ch[e--]);
    }
}
*/

//2. Using the for loop -> FIRST TO LAST APPROACH
void reverseString(char ch[], int n){
    for(int i = 0 ; i < (n / 2) ; i++){
        swap(ch[i], ch[n - i - 1]);
    }
}


int main() {
    
    return 0;
}