# include<iostream>
# include<string>
# include<vector>
#include<limits>

using namespace std;

void printArr(int arr[], int n){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int miniOfArray(int arr[], int n){
    int mini = 1000;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    return mini;
}

int maxiOfArray(int arr[], int n){
    int maxi = -1;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}

// void mergeArrays(int arr1[], int n, int arr2[], int m, int arr3[]){

//     int i = 0, j = 0;
//     int k = 0;

//     while(i < n && j < m){
//         if(arr1[i] < arr2[j]){
//             arr3[k] = arr1[i];
//             k++;
//             i++;
//         }

//         else{
//             arr3[k] = arr2[j];
//             k++;
//             j++;
//         }
//     }

//     while(i < n){
//         arr3[k] = arr1[i];
//         k++;
//         i++;
//     }

//     while(j < m){
//         arr3[k] = arr2[j];
//         k++;
//         j++;
//     }
// }

// int mergeArrays(int arr1[], int n, int arr2[], int m, int arr3[]){

//     int i = 0, j = 0;
//     int k = 0;

//     while(i < n && j < m){
//         if(arr1[i] < arr2[j]){
//             arr3[k] = arr1[i];
//             k++;
//             i++;
//         }

//         else{
//             arr3[k] = arr2[j];
//             k++;
//             j++;
//         }
//     }

//     while(i < n){
//         arr3[k] = arr1[i];
//         k++;
//         i++;
//     }

//     while(j < m){
//         arr3[k] = arr2[j];
//         k++;
//         j++;
//     }
//     return arr3[8];
// }

vector<int> mergeArrays(vector<int>& v1, int n, vector<int>& v2, int m, vector<int>& v3){

    int i = 0, j = 0;
    int k = 0;

    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }

        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    while(i < n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while(j < m){
        arr3[k] = arr2[j];
        k++;
        j++;
    }
    return arr3[8];
}

int main() {

    // int arr[5] = {3, 5, 4, 1, 9};

    // int ans = miniOfArray(arr, 5);

    // int ans2 = maxiOfArray(arr, 5);

    // cout << ans << endl;
    // cout << ans2 << endl;

    int arr1[5] = {1, 2, 4, 6, 7};
    int arr2[3] = {2, 5, 9};
    int arr3[8];

    int ans[8];

    ans[8] = mergeArrays(arr1, 5, arr2, 3, arr3);

    printArr(ans, 8);
    
    // char name[20];
    // cin >> name;

    // int len = getLength(name);

    // string s;
    // cout << "Enter the line: ";
    // getline(cin, s);

    // string temp = revString(s);
    // cout << temp;

    // cout<<"enter the number : "<<endl;
    // int n;
    // cin>>n;
    // int temp=sqrt(n);
    // cout<<"sqrt of the given number is : "<<precision(n,3,temp)<<endl;  

    // string s;
    // cout << "Enter the line: ";
    // getline(cin, s);

    // mainRevWords(s);

    // vector<int> v;
    // v.push_back(1);
    // v.push_back(3);
    // v.push_back(7);
    // v.push_back(9);

    // cout << *v.begin() << endl;
    // cout << lower_bound(*v.begin(), *v.end(), 6) << endl;

    // cout << s;

    return 0;
}

