# include<iostream>

using namespace std;

void print(int *p){
    cout << p << endl;
}

void updateAddress(int *p){
    p = p + 1;

    //this change in address is only limited to this function scope only

    cout << "Inside the function: " << p << endl;
}

void updateValue(int *p){

    *p = *p + 1;

    //this change will affect the whole value stored at p
}

int getSum(int arr[], int n){

    //gives 4 as output i.e. yeh ek address hi hai
    cout << "Size of the array is: " << sizeof(arr) << endl;

    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main() {

    int value = 5;

    int *p = &value;

    // print(p);

    // cout << "Before function call: " << p << endl;

    // updateAddress(p);

    // cout << "After function call: " << p << endl;

    // cout << "Before value update call: " << *p << endl;

    // updateValue(p);

    // cout << "After value update call: " << *p << endl;

    int arr[6] = {1, 2, 3, 4, 5, 6};

    cout << "Sum is: " << getSum(arr, 3) << endl;

    
    return 0;
}