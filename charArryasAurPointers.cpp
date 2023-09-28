# include<iostream>

using namespace std;

int main() {

int arr[5] = {1, 2, 4, 5, 6};

    cout << *(arr + 2) << endl;

    char ch[6] = "abcde";

    cout << &ch[0] << endl;

    char qh[6] = "abcde";

    char *q = "abcde";

    cout << qh << endl;

    cout << q << endl;
    
    return 0;
}