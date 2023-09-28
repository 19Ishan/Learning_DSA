# include<iostream>

using namespace std;

int countNoDiv(int n){
    int count = 0;

    //check divisibility by 2
    for(int i = 2 ; i < n ; i = i + 2){
        count++;
    }

    //check by 3
    for(int i = 3 ; i < n ; i = i + 3){
        count++;
    }

    //check by 5
    for(int i = 5 ; i < n ; i = i + 5){
        count++;
    }

    //check by 2 and 3 i.e. 5
    for(int i = 6 ; i < n ; i = i + 6){
        count--;
    }

    //check by 3 and 5 i.e. 15
    for(int i = 15 ; i < n ; i = i + 15){
        count--;
    }

    //check by 5 and 2
    for(int i = 10 ; i < n ; i = i + 10){
        count--;
    }

    //check by 2 3 5 i.e. 30
    for(int i = 30 ; i < n ; i = i + 30){
        count++;
    }

    return count;
}

int main() {

    int n;

    cout << "Enter the number upto which you want to check the total count of numbers div by 2 3 5: " << endl;
    cin >> n;

    int ans = countNoDiv(n);

    cout << ans << endl;
    
    return 0;
}