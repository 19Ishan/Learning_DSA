# include<iostream>
# include<limits.h>
# include<math.h>
# include<vector>
#include<string>
# include<algorithm>

using namespace std;

void print2DArr(int arr[][3], int row, int col){
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void printArr(int arr[], int n){
    for(int i = 0 ; i < n ;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool findElement(int arr[][4], int row, int col, int target){
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

int findMaxElement(int arr[][4] , int row, int col){
    int maxi = INT_MIN;

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}

int findMiniElement(int arr[][4] , int row, int col){
    int mini = INT_MAX;

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            if(arr[i][j] < mini){
                mini = arr[i][j];
            }
        }
    }
    return mini;
}

void findRowWiseSum(int arr[][4], int row, int col){
    for(int i = 0 ; i < row ; i++){
        int sum = 0;
        for(int j = 0 ; j < col ; j++){
            sum += arr[i][j];
        }
        cout << "The sum of row " << i + 1 << " is: " << sum << endl;
    }
}

void findColWiseSum(int arr[][4], int row, int col){
    for(int c = 0 ; c < col ; c++){
        int sum = 0;
        for(int r = 0 ; r < row ; r++){
            sum += arr[c][r];
        }
        cout << "The sum of col " << c + 1 << " is: " << sum << endl;

    }
}

void findTranspose(int arr[][4], int row, int col){
    for(int i = 0 ; i < row ; i++){
        for(int j = i ; j < col ; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int decimalToBinary(int n){
    int ans = 0;
    int i = 0;

    while(n > 0){
        int bit = (n & 1);

        cout << bit << endl;

        ans = (bit * pow(10, i) + ans);

        n = n >> 1;

        i++;
    }
    return ans;
}

int decimalToBinaryNew(int n){
    int ans = 0;
    int i = 0;

    while(n > 0){
        int bit = (n % 2);

        ans = (bit * pow(10, i) + ans);

        n = n/2;

        i++;
    }
    return ans;
}

void binaryToDecimal(int n){
    int ans = 0;
    int i = 0;

    while(n != 0){
        int digit = (n % 10);
        ans = (digit * pow(2, i++) + ans);
        n = (n / 10);
    }
    cout << ans << endl;
}

int firstOccurrence(int arr[], int n, int target){
    int s = 0;  
    int e = n - 1;
    int ans = -1;

    int mid = s + (e - s)/2;

    while(s <= e){
        if(arr[mid] == target){
            ans = mid;

            e = mid - 1;
        }

        else if(target > arr[mid]){
            s = mid + 1;
        }

        else{
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int lastOccurrence(int arr[], int n, int target){
    int s = 0;
    int e = n - 1;

    int ans = -1;

    int mid = s + (e - s)/2;

    while(s <= e){
        if(arr[mid] == target){
            ans = mid;

            s = mid + 1;
        }

        else if(target > arr[mid]){
            s = mid + 1;
        }

        else{
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int totalOccurr(int arr[], int n, int target){
    return (lastOccurrence(arr, n, target) - firstOccurrence(arr, n, target) + 1);
}

int findMissingNo(int arr[], int n){
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s)/2;

    int ans = -1;

    while(s <= e){
        int diff = arr[mid] - mid;

        if(diff == 1){
            s = mid + 1;
        }

        else{
            ans = mid;
            e = mid - 1;
        }

        mid = s + (e - s)/2;

        cout << "Value of ans is: " << ans << endl;
    }
    return (ans + 1);
}

void countZeroesAndOnes(int arr[], int n){
    int zeroCount = 0;
    int oneCount = 0;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 0){
            zeroCount++;
        }

        else{
            oneCount++;
        }
    }

    cout << "Total number of zeroes are: " << zeroCount << " and the total number of ones are: " << oneCount << endl;

}

int minimumElementInArray(int arr[], int n){
    int mini = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    return mini;
}

void reverseArray(int arr[], int n){
    int s = 0;
    int e = n - 1;

    while(s < e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void printExtreme(int arr[], int n){
    int s = 0;
    int e = n - 1;

    while(s < e){
        cout << arr[s] << " " << arr[e] << " ";
        s++;
        e--;
    }

    if(s == e){
        cout << arr[s] << endl;
    }
}

int getUniqueElement(int arr[], int n){
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

void printAllPairsInArray(int arr[], int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << arr[i] << " " << arr[j] << " ";
        }
        cout << endl;
    }
}

bool linearSearch2DArray(int arr[][3], int row, int col, int target){
    for(int row = 0 ; row < 3 ; row++){
        for(int col = 0 ; col < 3 ; col++){
            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}

int findMaxiElementIn2DArray(int arr[][3], int row, int col){
    int maxi = INT_MIN;
    for(int row = 0 ; row < 3 ; row++){
        for(int col = 0 ; col < 3 ; col++){
            if(arr[row][col] > maxi){
                maxi = arr[row][col];
            }
        }
    }
    return maxi;
}

int findMiniELementIn2DArray(int arr[][3], int row, int col){
    int mini = INT_MAX;
    for(int row = 0; row < 3 ; row++){
        for(int col = 0 ; col < 3 ; col++){
            if(arr[row][col] < mini){
                mini = arr[row][col];
            }
        }
    }
    return mini;
}

void findRowWiseSum(int arr[][3], int row, int col){
    for(int row = 0 ; row < 3 ; row++){
        int sum = 0;
        for(int col = 0 ; col < 3 ; col++){
            sum += arr[row][col];
        }
        cout << "Sum of the: " << row << " row is: " << sum << endl;
    }
}

void findColWiseSum(int arr[][3], int row, int col){
    for(int col = 0 ; col < 3 ; col++){
        int sum = 0;
        for(int row = 0 ; row < 3 ; row++){
            sum += arr[row][col];
        }
        cout << "Sum of the: " << col << " col is: " << sum << endl;
    }
}

void printReverseDiag(int arr[][3], int row, int col){
    for(int row = 0 ; row < 3 ; row++){
        for(int col = 0 ; col < 3 ; col++){
            if((row + col) == 2){
                cout << arr[row][col] << " ";
            }
        }
        cout << endl;
    }
}

void transpose2DArray(int arr[][3], int row, int col){
    for(int row = 0 ; row < 3 ; row++){
        for(int col = 0 ; col < row + 1 ; col++){
            swap(arr[row][col], arr[col][row]); 
        }
    }
    print2DArr(arr, row, col);
}

int findPivotElement(int arr[], int n){
    int s = 0;
    int e = n - 1;
    
    int mid = s + (e - s)/2;

    while(s <= e){
        if((arr[mid - 1] > arr[mid]) && arr[mid] < arr[mid + 1]){
            return arr[mid];
        }

        else{
            s = mid + 1;
        }

        mid = s + (e - s)/2;
    }
    return -1;
}

void shiftNegativeToOneSide(int arr[], int n){
    int index = 0;
    int s = 0;

    while(index < n){
        if(arr[index] < 0){
            swap(arr[index], arr[s]);
            s++;
            index++;
        }

        else{
            index++;
        }
    }
}


void sortZeroOneTwo(int arr[], int n){
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
        cout << zeroCount << endl;
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

/*
void sortZeroOneTwo(int arr[], int n){
    int s = 0;
    int e = n - 1;
    int index = 0;

    while(index < e){
        if(arr[index] == 0){
            swap(arr[index], arr[s]);
            s++;
            index++;
        }

        else if(arr[index] == 2){
            swap(arr[index], arr[e]);
            e--;
            index++;
        }

        else{
            index++;
        }
    }
}
*/

int findRepeatedNumber(vector<int> &arr){
    int n = arr.size();

    for(int i = 0 ; i < n ; i++){
        int count = 0;
        for(int j = 0 ; j < n ; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 2){
            return (arr[i]);
        }
    }
    return -1;
}


void shiftElementsRightByOne(int arr[], int n){
   
    int temp = arr[n - 1];
    int index = (n - 1);

    while(index > 0){
        arr[index] = arr[index - 1];
        index--;
    }

    arr[0] = temp;
}

void shiftElementsLeftByOne(int arr[], int n){
    int temp = arr[0];
    int index = 0;

    while(index < (n - 1)){
        arr[index] = arr[index + 1];
        index++;
    }

    arr[n - 1] = temp;
}

int getLengthOfString(char ch[], int n){
    int length = 0;

    for(int i = 0 ; i < n ; i++){
        if(ch[i] == '\0'){
            break;
        }

        else{
            length++;
        }
    }

    return length;
}

void reverseString(char ch[], int n){
    int i = 0;
    int j = n - 1;

    while(i <= j){
        swap(ch[i++], ch[j--]);
    }
}

void transposeMatrix(int arr[][3], int row, int col){
    for(int i = 0 ; i < row ; i++){
        for(int j = i ; j < col ; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}





int main() {

    // int arr[6] = {3, 1, 0, 10, 8, 9};

    // int n = 6;

    // vector<int> v;

    // v.push_back(10);
    // v.push_back(0);
    // v.push_back(2);
    // v.push_back(40);
    // v.push_back(3);
    // v.push_back(5);

    // int size = v.size();

    // sort(v.begin(), v.begin() + 5);

    // for(int n: v){
    //     cout << n << " ";
    // }

    // int arr[6] = {2, 0, 1, 2, 0, 1};
    // int arr[6] = {0, 2, 1, 2, 1, 0};
    // int n = 6;


    // sortZeroOneTwo(arr, n);

    // sortZeroOneTwo(arr, n);


    // int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    // int n = 7;
    
    // shiftElementsLeftByOne(arr, n);
    // printArr(arr, n);

    // cout << endl;

    // shiftElementsLeftByOne(arr, n);
    // printArr(arr, n);


    // int row = 4;
    // int col = 4;

    // printArr(arr, row, col);

    // if(findElement(arr, row, col, 12)){
    //     cout << "Element is present" << endl;
    // }

    // else{
    //     cout << "Element is not present" << endl;
    // }

    // int ansMax = findMaxElement(arr, row, col);

    // cout << "The maximum element in this 2d array is: " << ansMax << endl;

    // int ansMini = findMiniElement(arr, row, col);

    // cout << "The minimum element in this 2d array is: " << ansMini << endl;

    // findRowWiseSum(arr, row, col);

    // findColWiseSum(arr, row, col);

    // findTranspose(arr, row, col);

    // cout << endl;

    // printArr(arr, row, col);

    // int value = decimalToBinary(5);
    // cout << value << endl;  


    // int valueNew = decimalToBinaryNew(5);
    // cout << valueNew << endl;

    // binaryToDecimal(10100);

    // cout << findMissingNo(arr, n) << endl;

    // int ans = firstOccurrence(arr, n, 1);
    // cout << ans << endl;

    // int ansNew = lastOccurrence(arr, n, 30);
    // cout << ansNew << endl;

    // int total = totalOccurr(arr, n, 30);
    // cout << total << endl;

    // int N = 3;
    // int S = 20;

    // string ans = findLargest(N, S);

    // cout << ans << endl;

    // int arr[7] = {1, 0, 2, 9, 3, 4, 5};
    // int n = 7;

    // countZeroesAndOnes(arr, n);

    // cout << minimumElementInArray(arr, 8) << endl;

    // reverseArray(arr, n);

    // printArr(arr, n);    

    // printExtreme(arr, n);

    // cout << getUniqueElement(arr, n) << endl;

    // printAllPairsInArray(arr, n);

    // int arr[5] = {2, 3, 4, 0, 1};
    // int n = 5;

    // cout << findPivotElement(arr, n) << endl;


    // for(int i = 0 ; i < 4 ; i++){
    //     if(i == 0 || i == 3){
    //         for(int j = 0 ; j < 4 ; j++){
    //             cout << "*" << " ";
    //         }
    //     }

    //     else{
    //         for(int j = 0 ; j < 4 ; j++){
    //             if(j == 0 || j == 3){
    //                 cout << "*" << " ";
    //             }

    //             else{
    //                 cout << " " <<  " ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }


    // for(int row = 0 ; row < 5 ; row++){
    //     for(int col = 0 ; col < 5 ; col++){
    //         if((row == 0) || (row == 4)){
    //             cout << "*" << " ";
    //         }

    //         else{
    //             if((col == 0) || (col == 4)){
    //                 cout << "*" << " ";
    //             }

    //             else{
    //                 cout << " " << " ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }

//     int longgg = 10;
//     int * ptr = &longgg;

//     cout << sizeof(long);

//     int n = 6;
//     int N = n/2;

//     for(int i = 0 ; i < N ; i++){
//         for(int j = 0 ; j < N - i - 1 ; j++){
//             cout << " ";
//         }

//         for(int j = 0 ; j < i + 1 ; j++){
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }

//     for(int i = 0 ; i < N ; i++){
//         for(int j = 0 ; j < i ; j++){
//             cout << " ";
//         }

//         for(int j = 0 ; j < N - i ; j++){
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }

// //2D Arrays
//     int arr[3][3] = {
//         {1, 2, 3},
//         {5, 6, 7},
//         {9, 10, 11}
//     };

//     int row = 3;
//     int col = 3;

    // transposeMatrix(arr, row, col);
    // print2DArr(arr, row, col);

    // transpose2DArray(arr, row, col);

    // printReverseDiag(arr, row, col);

    // int target = 20;
    // if(linearSearch2DArray(arr, row, col, target)){
    //     cout << "Element is present." << endl;
    // }

    // else{
    //     cout << "Element is not present." << endl;
    // }

    // cout << "Maximum element is: " << findMaxiElementIn2DArray(arr, row, col) << endl;

    // cout << "Minimum element is: " << findMiniELementIn2DArray(arr, row, col) << endl;

    // findRowWiseSum(arr, row, col);

    // findColWiseSum(arr, row, col);

    int n = 3;

    int i = 0;
    while(i < n){
        //spaces
        int j = 0;
        while(j < i){
            cout << " " << " ";
            j++;
        }

        while(j < n - i){
            cout << "*" << " ";
            j++;
        }
        i++;

        cout << endl;
    }


    return 0;
}
