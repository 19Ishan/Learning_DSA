# include<iostream>

using namespace std;

//making function pass by value of variable
void update1(int n){
    cout << "Address is: " << &n << endl;
    n = n + 1;
}

//making function pass by reference of variable
void update2(int& n){
    cout << "Address is: " << &n << endl;
    n = n + 1;
}

int getSum(int *arr, int n){
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
    }
    return sum;
}

int main() {

/*
    int i = 5;

    //creating a ref variable
    int &j = i; //or int& j = i;

    cout << i << endl;
    i++;

    cout << j << endl;
    j++;

    cout << &i << " " << &j << endl;

    cout << i << " " << j << endl;
*/

    // int n = 5;

//Pass by Value
    // cout << "Address of n in main is: " << &n << endl;
    
    // cout << "Before function call: " << n << endl;

    // update1(n);

    // cout << "After function call: " << n << endl;

//Pass by Reference
    // cout << "Address of n in main is: " << &n << endl;

    // cout << "Before function call: " << n << endl;

    // update2(n);

    // cout << "After function call: " << n << endl;

//Creating an array dynamically or at run time

    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    int ans = getSum(arr, n);

    cout << "Sum is: " << ans << endl;
    
    return 0;
}