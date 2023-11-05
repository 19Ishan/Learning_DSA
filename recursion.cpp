# include<iostream>
# include<vector>
# include<limits.h>

using namespace std;

//LeetCode 70 CLIMBING STAIRS
/*
int climbStairs(int n) {

// n = 0 and n = 1 are the base cases

        //base cases
        // if(n == 0){
        //     return 1;
        // }

        // if(n == 1){
        //     return 1;
        // }

        // //recursive relation
        // int ans = climbStairs(n - 1) + climbStairs(n - 2);

        // return ans;

// n = 1 and n = 2 are the base cases

        if(n == 1){
            return 1;
        }

        if(n == 2){
            return 2;
        }

        int ans = climbStairs(n - 1) + climbStairs(n - 2);

        return ans;

    }
*/

// 2. Print the array using recursion

void printArray(int arr[], int size, int index){
    //base cases
    if(index >= size){
        return;
    }

    //processing
    cout << arr[index] << " ";

    //recursive call
    printArray(arr, size, index + 1);
}


//3. Search in an array recursively

bool searchArray(int arr[], int size, int index, int target){
    
    //base case
    if(index >= size){
        //target element is not found
        return false;
    }

    //this is one case which I have solved
    //then after that i called recursion by providing the incremented index
    if(arr[index] == target){
        return true;
    }

    //recursive call
    searchArray(arr, size, index + 1, target);
}

//4. Find the mini number in the array 

int findMinEleArray(int arr[], int size, int index, int& mini){

    //base case
    if(index >= size){
        return mini;
    }

    //processing
    if(arr[index] < mini){
        mini = min(arr[index], mini);
    }

    //recursive call
    return findMinEleArray(arr, size, index + 1, mini);
}

//5. Given an array, copy the even elements of this array into a vector v

void copyEvenArrEles(int arr[], int size, int index, vector<int>& v){

    //base case
    if(index >= size){
        return ;
    }

    //processing
    if((arr[index] & 1) == 0){
        v.push_back(arr[index]);
    }

    //recursive call
    copyEvenArrEles(arr, size, index + 1, v);
}


//6. Factorial
int fact(int n){
    if(n >= 0){
        if(n == 0 || n == 1){
            return 1;
        }

        int recAns = fact(n - 1);
        int finalAns = n * recAns;

        return finalAns;
    }

    else{
        return -1;
    }
    
}

//7. Reverse Counting Print

void printRev(int n){
    //base cases
    if(n == 1){
        cout << "1" << " ";
        return;
    }

    //processing
    cout << n << " ";

    //Recursive Relation
    printRev(n - 1);
}

//8. Power of 2^n

int powerOfTwo(int n){
    //base cases
    // if(n == 1){
    //     return 2;
    // }

    if(n == 0){
        return 1;
    }

    int recAns = powerOfTwo(n - 1);

    int finalAns = 2 * recAns;

    return finalAns;
}

//9. Fibonacci Series

int printFibo(int n){
    //base cases
    if(n == 0){
        return 0;
    }

    if(n == 1){
        return 1;
    }

    int ans = printFibo(n - 1) + printFibo(n - 2);

    return ans;
}

//10. Find the maxi element in an array

int findMaxEleArr(int arr[], int size, int index , int& maxi){

    //base case
    if(index >= size){
        return maxi;
    }

    //processing
    if(arr[index] > maxi){
        maxi = max(arr[index], maxi);
    }

    //recursive call
    return findMaxEleArr(arr, size, index + 1, maxi);
}

//11. Given an array, double each and every element of this array

void doubleEachEleArr(int arr[], int size, int index){

    //base case
    if(index >= size){
        return;
    }

    //processing
    arr[index] = 2 * arr[index];

    //recursive call
    doubleEachEleArr(arr, size, index + 1);
}

//12. Find element in an array, and return the index

int findElementArr(int arr[], int size, int index, int target){

    //base case
    if(index >= size){
        return -1;
    }

    //processing
    if(arr[index] == target){
        return index;
    }

    //recursive call
    return findElementArr(arr, size, index + 1, target);
}

//13. Print all the occurrences of a target element in an array

void printAllOccurrence(int arr[], int size, int target, int index){
    
    //base case
    if(index >= size){
        return ;
    }

    //processing
    if(arr[index] == target){
        cout << index << " ";
    }

    //recursive call
    printAllOccurrence(arr, size, target, index + 1);

}

//14. Given a number, print all its digits

void digitsOfANumber(int n, vector<int>& v){

    //base case
    if(n == 0){
        return ;
    }

    //processing
    int digit = n % 10;

    n = n/10;

    //recursive call
    digitsOfANumber(n, v);

    //processing
    v.push_back(digit);
}

//15. Given a vector containing some digits convert it into a number



//16. Print all the occurrences of a character in a string

void printChars(char ch[], int size, int index, char target, vector<char>& v){

    //base case
    if(index >= size){
        return;
    }

    //processing
    if(ch[index] == target){
        v.push_back(index);
    }

    //recursive call
    printChars(ch, size, index + 1, target, v);
}

//17. Check whether an array is sorted or not?

bool checkSorted(int arr[], int size, int index){

    //base cases
    if((index + 1) >= size){
        return true;
    }

    //processing
    if(arr[index] < arr[index + 1]){
        //recursion ko bulao 
        //aage ka answer store nikalwao
        return checkSorted(arr, size, index + 1);
    }

    else{
        return false;
    }
}

    //Another approach
    
    //in this pass the index value as 1
    //base cases
    // if(index >= size){
    //     return true;
    // }

    // //processing
    // if(arr[index] > arr[index - 1]){
    //     //recursion ko bulao 
    //     //aage ka answer store nikalwao
    //     return checkSorted(arr, size, index + 1);
    // }

    // else{
    //     return false;
    // }

//18. Binary Search



int main() {

    // int arr[5] = {10, 20, 10, 10, 30};

    // int size = 5;
    // int index = 0;

    // int mini = INT_MAX;
    // int maxi = INT_MIN;

    // cout << "Printing the Array: " << " ";

    // printArray(arr, size, index);

    // cout << endl;

    // cout << "901 is present or not? " << " ";
    // cout << searchArray(arr, size, index, 901);

    // cout << "901 is present at? " << "";
    // cout << findElementArr(arr, size, index, 14);

    // cout << endl;

    // cout << "Finding the minimum element in the array: " << "";

    // cout << findMinEleArray(arr, size, index, mini);

    // cout << endl;

    // cout << "Finding the maximum element in the array: " << "";

    // cout << findMaxEleArr(arr, size, index, maxi);

    // cout << endl;

    // vector<int> v;

    // copyEvenArrEles(arr, size, index, v);

    // cout << "Printing the Vector containing the even elements: " << "";

    // for(int i = 0 ; i < v.size() ; i++){
    //     cout << v[i] << " ";
    // }

    // cout << endl;

    // cout << fact(-1) << endl;

    // printRev(9);

    // cout << powerOfTwo(3) << endl;

    // cout << "Doubling each element in this array: " << "";

    // doubleEachEleArr(arr, size, index);

    // for(int n: arr){
    //     cout << n << " ";
    // }

    // cout << "Printing all occurrences of 10 in this array: " << "";
    // printAllOccurrence(arr, size, 10, index);

    // vector<int> v;
    // int n = 4513;

    // digitsOfANumber(n, v);

    // for(auto n: v){
    //     cout << n << " ";
    // }
    
    // char ch[5] = "test";
    // int index = 0;
    // int size = 5;
    // char target = 't';

    // vector<char> v;

    // printChars(ch, size, index, target, v);

    // for(int n : v){
    //     cout << n << " ";
    // }

    // int arr[] = {};
    // int size = 0;
    // int index = 0;

    // bool isSorted = checkSorted(arr, size, index);

    // if(isSorted){
    //     cout << "Array is sorted" << endl;
    // }

    // else{
    //     cout << "Array is not sorted" << endl;
    // }

    return 0;
}