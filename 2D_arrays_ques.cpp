# include<iostream>
# include<vector>

using namespace std;

//1. Linear search in 2d array
/*
bool isPresent(int arr[][4], int target, int row, int col){
    for(int row = 0 ; row < 3 ; row++){
        for(int col = 0 ; col < 4 ; col++){
            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}
*/

//2. Row wise and Column wise -> sum print for each row and column in a 2d array
/*
//A.
void printSum(int arr[][3], int row, int col){
    for(int row = 0 ; row < 3 ; row++){
        int sum = 0;
        for(int col = 0 ; col < 3 ; col++){
            sum = sum + arr[row][col];
        }
        cout << sum << endl;
    }
}


//B.

void printRowSum(int arr[][3], int row, int col){
    for(int col = 0 ; col < 3 ; col++){
        int sum = 0;
        for(int row = 0 ; row < 3 ; row++){
            sum += arr[row][col];
        }
        cout << sum << endl;
    }
}
*/

//3. Largest row sum problem
/*
//A. using void
void printLargestRowIndex(int arr[][3], int row, int col){
    int ans = -1;
    int index = -1;
    for(int i = 0 ; i < 3 ; i++){
        int sum = 0;
        for(int j = 0 ; j < 3 ; j++){
            sum = sum + arr[i][j];
        }
        if(sum > ans){
            ans = sum;
            index = i;
        }
    }
    cout << "Largest row is: " << index << " and the sum is: " << ans << endl;
}

//B. using int
int printLargestRowIndex(int arr[][3], int row, int col){
    int ans = INT_MIN;
    int index = -1;
    for(int i = 0 ; i < 3 ; i++){
        int sum = 0;
        for(int j = 0 ; j < 3 ; j++){
            sum = sum + arr[i][j];
        }
        if(sum > ans){
            ans = sum;
            index = i;
        }
    }
    cout << "The maximum sum is: " << ans << endl;
    return index;
}
*/

//4. Wave print problem
/*
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols){

    vector<int>ans;

    for(int j = 0 ; j < mCols ; j++){
        
        if(j&1){
            //odd cols ki baat ho rhi hai
            for(int i = nRows - 1 ; i >= 0 ; i--){
                ans.push_back(arr[i][j]);
            }
        }

        else{
            //even cols ki baat hai
            for(int i = 0 ; i < nRows ; i++){
                ans.push_back(arr[i][j]);
            }
        }

    }
    return ans;
}
*/

//5. Spiral problem
/*
vector<int> spiralOrderPrint(vector<vector<int>>& matrix){

    vector<int> ans;

    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int totalEle = row * col;

    //initialize the indices of the rows and cols
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while(count < totalEle){

        //starting row
        for(int index = startingCol ; index <= endingCol && count < totalEle ; index++){
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        //ending column
        for(int index = startingRow ; index >= endingRow && count < totalEle; index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        //ending row print
        for(int index = endingCol ; index >= startingCol && count < totalEle; index--){
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        //starting col
        for(int index = endingRow ; index >= startingRow && count < totalEle; index--){
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }
}
*/

//CODE HELP

//6. Find the maximum and the minimum element in the 2D array
/*
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
*/

//7. Print the diagonal and its sum
/*
void printDiagAndSum(int arr[][3], int row, int col){
    int sum = 0;
    for(int row = 0 ; row < 3 ; row++){
        cout << arr[row][row] << " ";
        sum += arr[row][row];
    }
    cout << endl;
    cout << "Sum of the diagonal is: " << sum << endl;
}
*/

//8. Print the opposite diagonal
/*
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
*/

//9. 





int main() {

    int arr[3][3] = {
        {1, 2, 3},
        {5, 6, 7},
        {9, 10, 11}
    };

    int row = 3;
    int col = 3;

    
//Taking row wise input
/*
    for(int row = 0 ; row < 3 ; row++){
        for(int col = 0 ; col < 3 ; col++){
            cin >> arr[row][col];
        }
    }
*/


//1. Linear Search
/*
    int target;

    cout << "Enter the element you want to search for: " << endl;

    cin >> target;

    if(isPresent(arr, target, 3, 4)){
        cout << "Element found" << endl;
    }

    else{
        cout << "Element not found" << endl;
    }
*/

//2. row wise sum print karo in a 2d array

    // printRowSum(arr, 3, 3);

//3. Largest row sum problem

    // printLargestRowIndex(arr, 3, 3);

//4. Wave print problem


//CODE HELP

//7. Print the diagonal and its sum

    // printDiagAndSum(arr, row, col);

    
    return 0;
}