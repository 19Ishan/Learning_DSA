# include<iostream>
# include<limits.h>
#include<vector>
# include<array>

using namespace std;

void inputArray(int arr[], int size){

    std::cout << "Enter the elements in your array: " << " ";

    int i = 0;
    while(i<size){
        std::cin >> arr[i];
        i++;
    }
}

void printArray(int arr[], int size){
    int i = 0;
    while(i<size){
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}

/*

int getMax(int arr[], int size){

    int maxEle = INT_MIN;

    // instead of writing the code written in the for loop we can use the inbuilt function i.e. max(first element, second element)


    for(int i = 0 ; i<size ; i++){

        maxEle = max(maxEle, arr[i]);
    //     if(arr[i] > max){
    //         max = arr[i];
    //     }
    }

    return maxEle;
}

int getMin(int arr[], int size){

    int min = INT_MAX;

    for(int i = 0 ; i<size ; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    return min;
}
*/

//2. Find the sum of elements in the given array
/*
int printSum(int arr[], int size){

    int i = 0;
    int sum = 0;
    while(i<size){
        sum = sum + arr[i];
        i++;
    }

    return sum;
}
*/

//3. Reverse an array
/*
void reverseArr(int arr[], int size){

    int s = 0;
    int e = size - 1;

    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
*/

//CODE HELP

//4. Find the total number of 0's and 1's in an array 
/*
void countNoOf0and1(int arr[], int size){
    int sum0 = 0, sum1 = 0;

    for(int i = 0 ; i < size ; i++){
        if(arr[i] == 0){
            sum0++;
        }
        else{
            sum1++;
        }
    }
    cout << "The number of zeroes are: " << sum0 << endl;
    cout << "The number of ones are: " << sum1 << endl;
}
*/

//6. Find the minimum element in the array
/*
void findMiniElement(int arr[], int n){
    int maxi = INT_MAX;
    int index = -1;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] < maxi){
            maxi = arr[i];
            index = i;
        }
    }
    cout << "The minimum element is: " << maxi << ", and is present at the index: " << index << endl;
}
*/

//6. Print the extremes in a given array
/*
void printExtremeInArray(int arr[], int size){
    int s = 0, e = size - 1;

    while(s < e){
        cout << arr[s] << " " << arr[e] << " ";
        swap(arr[s++], arr[e--]);
    }

    if(s == e){
        cout << arr[s] << " ";
    }
}
*/

//7. Print all the pairs in an array
/*
void printPairsInArray(int arr[], int n){

    for(int i = 0 ; i < n ; i++){
        for(int j = n - 1 ; j >= 0 ; j--){
            cout << arr[i] << "," << arr[j] << " ";
        }
        cout << endl;
    }
}
*/


//8. Arrange all the 0's and 1's in a given array 

//A. Method 1 using for loops
/*
void sortZeroAndOne(int arr[], int n){

    int countZero = 0;
    int countOne = 0;

    //count zeroes and ones
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 0){
            countZero++;
        }

        else{
            countOne++;
        }
    }

    // cout << countZero << " " << countOne << endl;

    //arrange the zeroes

    int i = 0;
    for(i = 0 ; i < countZero ; i++){
        arr[i] = 0;
    }

    //arrange the ones
    for(int j = i ; j < n ; j++){
        arr[j] = 1;
    }

    printArray(arr, n);

}
*/

//B. Method 2 using while loops
/*
void sortZeroAndOne(int arr[], int n){
    int zeroCount = 0;
    int oneCount = 0;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 0){
            zeroCount++;
        }

        if(arr[i] == 1){
            oneCount++;
        }
    }

    int index = 0;
    while(zeroCount--){
        arr[index] = 0;
        index++;
    }

    while(oneCount--){
        arr[index] = 1;
        index++;
    }

    printArray(arr, n);
}
*/

//C. Using two pointers approach
/*
void sortZeroAndOne(int arr[], int n){
    int l = 0; //for holding the zeroes in the array
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 0){
            swap(arr[i], arr[l]);
            l++;
        }
    }

    printArray(arr, n);
}
*/


//9. Find the Unique elements in an array
/*
int findUniqueInArray(int arr[], int n){

    int ans = 0;

    for(int i = 0 ; i < n ; i++){
        ans = ans ^ arr[i];
    }

    return ans;
}
*/

//10. move all the negative to one side and the positives to one side
/*
void changePosiInArray(int arr[], int n){
    int index = 0;
    int j = 0; //j holds negative

    while(index < n){
        if(arr[index] > 0){
            index++;
        }

        else{
            swap(arr[index], arr[j]);
            index++;
            j++;
        }
    }
}
*/
/*
void changePosiInArray(int arr[], int n){
    int l = 0;
    int r = n - 1;
    int index = 0;

    while(index <= r){
        if(arr[index] < 0){
            swap(arr[index], arr[l]);
            index++;
            l++;
        }

        else if(arr[index] >= 0){
            swap(arr[index], arr[r]);
            r--;
            index++;
            //index++ nhi karna because we dont know which element has been swapped at the index
            //wali position
        }
    }
}
*/

//11. Find the missing element in a sorted array

// numbers are input from 1 to n and the array size is (n - 1)

/*
int findMissingEle(int arr[], int n){
    int s = 0;
    int e = n - 1;
    int ans = -1;

    int mid = s + (e - s)/2;

    while(s <= e){
        int diff = arr[mid] - mid;

        if(diff == 1){
            s = mid + 1;
        }

        else{
            ans = mid; //store the index
            e = mid - 1;            
        }
        mid = s + (e - s)/2;
    }

    //edge case
    if((ans + 1) == 0){
        return (n + 1);
    }

    return (ans + 1);
}
*/

//12. Two sum
//given an array and a sum, if there are any two elements in the array whose sum is equal to sum then return 1, otherwise return 0

/*
int twoSum(int arr[], int n, int x){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(arr[i] + arr[j] == x){
                return 1;
            }
        }
    }
    return 0;
}
*/

//13. Shift array elements by 1
//A. Shift to the right
/*
void shiftElementsRightByOne(int arr[], int n){
   
    int temp = arr[n -1];

    int index = n - 1;

    while(index > 0){
        arr[index] = arr[index - 1];
        index--;
    }

    arr[0] = temp;

    printArray(arr, n);
}
*/

//B. Shift to the left
/*
void shiftElementsLeftByOne(int arr[], int n){
    int temp = arr[0];
    int index = 0;

    while(index < (n - 1)){
        arr[index] = arr[index + 1];
        index++;
    }

    arr[n - 1] = temp;
}
*/

//14. 

int main() {

//1. Find the max and min element in an array
    /*
    int size;

    std::cout << "Enter the size: " << endl;
    std::cin >> size;

    int a[100];

    //taking input in the array
    for(int i = 0 ; i<size ; i++){
        std::cin >> a[i];
    }

    std::cout << "The maximum element in this array is: " << getMax(a, size) << endl;

    std::cout << "The minimum element in this array is: " << getMin(a, size) << endl;
    */

//2. Find the sum of all the elements in an array
    /*
    int arr[100];

    int size;

    std::cout << "Enter the size of the array: " << endl;

    std::cin >> size;

    inputArray(arr, size);

    int ans = printSum(arr, size);

    cout << ans;
    */

//3. Reverse an array
/*
    int arr[100];

    int size;
    cin >> size;

    inputArray(arr, size);

    int brr[100];

    int size1;
    cin >> size1;

    inputArray(brr, size1);

    reverseArr(arr, size);
    reverseArr(brr, size1);

    printArray(arr, size);
    printArray(brr, size1);
*/

//CODE HELP

//4. Find the number of 0's and 1's in an input array
/*
    int arr[8] = {0, 1, 1, 1, 0, 1, 0, 0};

    countNoOf0and1(arr, 8);
*/

//5. Find the minimum element in the given array
/*
    int arr[7] = {20, 4, 15, 2, 6, 8, 11};

    findMiniElement(arr, 7);
*/

//6. Print the extremes in a given array
/*
    int arr[6] = {10, 20, 30, 40, 50, 60};

    printExtremeInArray(arr, 6);
*/

//7. Print all the pairs in an array
/*
    int arr[3] = {10, 20, 30};

    printPairsInArray(arr, 3);
*/

//8. Arrange all the 0's and 1's in a given array

    // int arr[5] = {1, 0};

    // sortZeroAndOne(arr, 5);

//9. Find the unique element in an array
/*
    int arr[9] = {2, 10, 11, 13, 10, 2, 15, 13, 15};

    int ans = findUniqueInArray(arr, 9);

    cout << "The unique element is: " << ans << endl;
*/

//10. Move the negative elements to left side and the positive elements to the right side
/* 
    int arr[7] = {2, -1, 0, -2, -1, 1, 0};
    int n = 7;

    changePosiInArray(arr, n);

    printArray(arr, n);
*/


//11. Find the missing element
/*
    int arr[6] = {1, 2, 3, 4, 5, 6};

    cout << findMissingEle(arr, 6) << endl;
*/

//12. Two Sum
/*
    int arr[5] = {0, -1, 2, -3, 1};
    int n = 5;
    int sum = -2;

    cout << twoSum(arr, n, sum) << endl;
*/

//13. Shift the elements by 1
/*
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;

    shiftElementsByOne(arr, n);
*/




    return 0;
}