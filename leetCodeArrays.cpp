# include<iostream>
# include<vector>
# include<limits.h>

using namespace std;

void printArray(int arr[], int size){

    for(int i = 0 ; i<size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


//1. Swap alternate numbers in an array
/*
void swapAlternate(int arr[], int size){

    // for(int i = 0 ; i<size ; i = i + 2){
    //     if(i+1 < size){
    //         swap(arr[i], arr[i+1]);
    //     }
    // }

    int i = 0;

    while(i<size){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
        i = i + 2;
    }

}
*/


//2. Count the frequencies of occurrence of each element in array
/*
void countFreq(int arr[], int size){

    for(int i = 0 ; i<size ; i++){

        int count = 0;

        for(int j = 0 ; j<size ; j++){
            if(arr[j] == arr[i]){
                count++;
            }
        }

        if(count == 1){
            // cout << "element " << arr[i] << " occurs only " << count << " time " << endl;
            cout << arr[i];
        }

        // else{
        //     cout << "element " << arr[i] << " occurs " << count << " times" << endl;
        // }
    }
    cout << endl;
}
*/

//3. Print the element occurring only once in an array where array is of the form 2m+1
// ====> 'm' elements occur twice and '1' element occurs once only
/*
int findUnique(int arr[], int size){

    int ans = 0;

    for(int i = 0 ; i<size ; i++){
        ans = ans^arr[i];
    }

    return ans;    
}
*/

//4. Find the duplicate element in the array
/*
void findDuplicate(int arr[], int size){

    for(int i = 0 ; i<size ; i++){

        int count = 0;
        for(int j = 0 ; j<size ; j++){


            if(arr[i] == arr[j]){

                count++;

            }

        }

        if(count == 2){
            cout << arr[i] << endl;
        }

        cout << endl;
    }
}
*/

//4. Method 2 using XOR wala OG tareeka

int findDupUsingXOR(int arr[], int size){
    
    int ans = 0;

    for(int i = 0 ; i<=size - 1 ; i++){
        ans = ans^arr[i];
    }

    for(int i = 1 ; i<size ; i++){
        ans = ans^i;
    }

    return ans;
}


//5. Print the duplicate element in the array whose size is n+2
/*
void findDup(int arr[], int size){

    for(int i = 0 ; i<size ; i++){
        
        // int count = 0;

        for(int j = i + 1 ; j<size ; j++){

            int count = 0;

            if(arr[i] == arr[j]){
                count++;
            }
    
            if(count == 1){
                cout << arr[i] << " at i = " << i << " and at j = " << j << " " << endl;
            }
        }
    }
}
*/

//6. duplicate element in array where size is n but elements are from 1 to n-1 means 1 element is twice 
// 1 2 3 4 2 or 1 2 3 4 1 etc
/*
void findDup(int arr[], int size) {
    cout << "Repeating elements are: ";
    for(int i = 0 ; i<size ; i++){
        

        for(int j = i + 1 ; j<size ; j++){
            int count = 0;
            if(arr[i] == arr[j]){
                count++;
            }

            if(count == 1){
                cout << arr[i] << " at i = " << i << " and at j = " << j << " " << endl;
            }
        }
    }
}
*/

//CODE HELP
//7. Sort 0, 1, 2 in an array 
// LeetCode 75
//Approaches -> two pointers, counting, temp array, sorting(pending)

//Counting Approach
/*
void sortZeroesAndOnes(int arr[], int n){
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 0){
            zeroCount++;
        }

        else if(arr[i] == 1){
            oneCount++;
        }

        else{
            twoCount++;
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

    while(twoCount--){
        arr[index] = 2;
        index++;
    }
}
*/

//Two Pointer approach
/* 
void sortZeroesAndOnes(int arr[], int n){
    int s = 0;
    int e = n - 1;

    int index = 0;
    while(index <= e){
        if(arr[index] == 0){
            swap(arr[index], arr[s]);
            index++;
            s++;
        }

        else if(arr[index] == 2){
            swap(arr[index], arr[e]);
            e--;
            //index++;
            //no need for index++;
        }

        else{
            //one mil gya
            index++;
        }        
    }
}
*/


//8. Rotate the Arrays
// LeetCode - 
//Approaches -> 

//9. Find the missing number in an array
// LeetCode 268
//Approaches -> counting (O(n^2)), sorting (pending), sum 

//Counting Approach
/*
int missingNumber(int arr[], int n){
    int missNumber = -1;
    for(int i = 1 ; i <= n ; i++){
        bool flag = false;

        for(int j = 0 ; j < n ; j++){
            if(arr[j] == i){
                flag = true;
                break;
            }
        }

        if(!flag){
            missNumber = i;
            break;
        }
    }
    return missNumber;
}
*/

//Sum method
/*
int missingNumber(int arr[], int n){
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
    }

    int totalSum = ((n) * (n + 1) / 2);

    return (totalSum - sum);
}
*/

//10. Return the maximum no of ones count and the row index in which they are present
// LeetCode 2643
//Approach -> standard method of accessing the matrix row wise
/*
vector<int> rowWithMaxOnes(vector< vector<int> >& nums){
    vector<int> ans;
    int rowIndex = -1;
    int oneCount = INT_MIN;

    for(int i = 0 ; i < nums.size() ; i++){
        int count = 0;
        for(int j = 0 ; j < nums[i].size() ; j++){
            if(nums[i][j] == 1){
                count++;
            }
        }

        if(count > oneCount){
            oneCount = count;
            rowIndex = i;
        }
    }

    ans.push_back(oneCount);
    ans.push_back(rowIndex);
    return ans;
}
*/

//11. Rotate image by 90 degrees
//LeetCode 48
//Approach -> Transpose and then reverse the rows

void reverseVector(vector<int>& arr){
    int s = 0, e = arr.size() - 1;

    while(s < e){
        swap(arr[s++], arr[e--]);
    }
}

void rotateImage(vector< vector<int> >& matrix){
    
    //transpose
    for(int i = 0 ; i < matrix.size() ; i++){
        for(int j = i ; j < matrix[i].size() ; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    //reverse
    for(int i = 0 ; i < matrix.size() ; i++){
        // reverseVector(matrix[i]);
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    
//1. Swap alternate arrays
    /*
    int odd[10] = {12, 3, 6, 90, 10};

    int size = 5;

    swapAlternate(odd, 5);

    printArray(odd, 5);

    cout << endl;

    int even[10] = {12, 4, 90, 78, -1, 0};

    size = 6;

    swapAlternate(even, 6);

    printArray(even, 6);
    */

//2. Find unique occurrences of an element in an array
    /*
    int arr[10] = {2, 7, 1, 2, 7};

    int size = 5;

    int arr[10] = {1, 3, 4, 1, 3};

    int size = 5;

    countFreq(arr, 5);

    printArray(arr, 5);
    */
    
//3. find unique wala function

    // int arr[10] = {1, 2, 4, 1, 2};

    // int size = 5;

    // int ans = findUnique(arr, 5);

    // cout << ans << endl;

//4. Find the duplicate element in an array
/*
    int arr[10] = {1, 2, 3, 4, 4};

    int size = 5;   

    int ans = findDupUsingXOR(arr, 5);

    cout << ans;
*/

//5. 
    /*
    int arr[10] = {1, 2, 3, 4, 5, 2, 4};

    int size = 7;

    findDup(arr, 7);
    */

//6. 

    // int arr[10] = {1, 2, 3, 5, 2};
    // int size = 5;

    // findDup(arr, 5);

//7. Sort 0, 1, 2 in an array 

//8. Rotate the Arrays

//9.  Find the missing number in an array
/*
    int arr[7] = {1, 3, 5, 6, 4, 8, 7};
    int n = 7;

    cout << missingNumber(arr, n) << endl;
*/

//10. 


    return 0;
}   