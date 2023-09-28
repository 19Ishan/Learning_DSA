# include<iostream>
# include<vector>
# include<array>

using namespace std;

void printArr(int arr[], int size){
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printVector(vector<int> v, int n){
    for(int i = 0 ; i < n ; i++){
        cout << v[i] << " ";
    }

    cout << endl;
}


//1. Reverse array after the index number given i.e. 'm'

/*
void reverseArr(int arr[], int size, int m){
    int s = m + 1;
    int e = size - 1;

    while(s <= e){
        swap(arr[s], arr[e]);
        m++;
        e--;
    }
}

//m ke peeche wale elements are reversed
// void reverseArr(int arr[], int size, int m){
//     int s = 0;
//     int e = m - 1;

//     while(s <= e){
//         swap(arr[s], arr[e]);
//         m++;
//         e--;
//     }
// }

*/

//2. Merge two sorted arrays
//given two sorted arrays and unko merge karke ek thrid sorted array banao

/*
void mergeTwoArr(int arr1[], int m, int arr2[], int n, int arr3[]){

    int i = 0, j = 0;
    int k = 0;

    while(i < m && j < n){
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

    //copy the left eles in 3rd array from 1st array
    while(i < m){
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    //copy the left eles in 3rd array from 2nd array
    while(j < n){
        arr3[k] = arr2[j];
        k++;
        j++;
    }

}
*/

//3. Move zeroes of an array and shift them to the right but preserve the order of the elements in the array
//means ----> 0, 1, 0, 12, 2 should become 1, 12, 2, 0, 0

/*
void moveZero(int arr[], int size){
    int nonZeroIndex = 0;

    int zeroIndex = 0;

    while(zeroIndex < size){
        if(arr[zeroIndex] != 0){
            swap(arr[zeroIndex], arr[nonZeroIndex]);
            nonZeroIndex++;
            zeroIndex++;
        }

        else{
            zeroIndex++;
        }
    }
}
*/


//4. leetCode 88: two arrays sorted given, merge the two arrays in the first array itself


//5. Rotate an array
/*
vector<int> rotateVector(vector<int> nums, int n, int k){
    
    vector<int> temp(nums.size());

    for(int i = 0 ; i<n ; i++){

        temp[(i + k) % n] = nums[i];

    }

    //copy the values back into the main array

    nums = temp;

    return nums;

}

//OR

// void rotateVector(vector<int>& nums, int n, int k){
    //we have to pass the reference of the vector because unlike array iska impact main vectr mein nahi aata
//     vector<int> temp(nums.size());

//     for(int i = 0 ; i<n ; i++){

//         temp[(i + k) % n] = nums[i];

//     }

//     //copy the values back into the main array

//     nums = temp;

//     return nums;

// }
*/

//6. Check if an array is rotated as well as sorted??

/*
bool isRotatedSorted(int arr[], int n){
    int count = 0;

    for(int i = 1 ; i<n ; i++){
        if(arr[i- 1] > arr[i]){
            count++;
        }

        if(arr[n - 1] > arr[0]){
            count++;
        }
    }

    return (count <= 1);
}
*/

//7. Add two arrays


int main() {

//1. Reverse array

    // int arr[5] = {10, 9, 8, 7, 6};

    // reverseArr(arr, 5, 2);
    // printArr(arr, 5);


//2. Merge two sorted arrays

    // int arr1[5] = {1, 3, 5, 7, 9};
    // int arr2[3] = {2, 4, 6};

    // int arr3[8] = {0};

    // mergeTwoArr(arr1, 5, arr2, 3, arr3);
    // printArr(arr3, 8);

//3. Move zeroes

    // int arr[5] = {0, 1, 0, 12, 2};

    // moveZero(arr, 5);
    // printArr(arr, 5);

//4. two arrays sorted given, merge the two arrays in the first array itself


//5. Rotate an array

    // vector<int> v;

    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);

    // vector<int> ans = rotateVector(v, 5, 2);
    // printVector(ans, 5);    

//6. Check if an array is rotated as well as sorted??

    // int arr[5] = {3, 4, 5, 1, 2};

    // if(isRotatedSorted(arr, 5) == 1){
    //     cout << "Array is rotated and sorted" << endl;
    // }

    // else{
    //     cout << "Array is neither rotated nor sorted" << endl;
    // }


//7. Add two arrays

    


    
    return 0;
}


