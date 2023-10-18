# include<iostream>
# include<vector>

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
/*
void printArray(int arr[], int size, int index){

    //base case
    if(index >= size){
        return ;
    }

    //processing
    cout << arr[index] << " ";

    //recursive call
    printArray(arr, size, index + 1);
}
*/

//3. Search in an array recursively

//4. Find the mini number in the array 

//5. 

void solve(int arr[], int size, int index, vector<int> &v){

    //base case
    if(index >= size){
        return ;
    }

    //processing
    if((arr[index] & 1) == 0){
        v.push_back(arr[index]);
    }


    //recursive call
    solve(arr, size, index + 1, v);
}


int main() {

    // int size = 10;
    // int index = 0;

    // printArray(arr, size, index);

    int arr[10] = {101, 20, 301, 40, 501, 60, 701, 80, 901, 100};
    int size = 10;
    int index = 0;

    vector<int> v;

    solve(arr, size, index, v);

    for(int n: v){
        cout << n << " ";
    }

    
    return 0;
}