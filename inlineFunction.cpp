# include<iostream>

using namespace std;

inline int getMax(int& a, int& b){
    return ( (a > b) ? a : b);
}

int main() {

    int a = 5, b = 9;

    int ans = getMax(a, b);

    cout << "Max is: " << ans << endl;

    a++;
    b++;

    ans = getMax(a, b);
    
    cout << "Max is: " << ans << endl;

    
    return 0;
}