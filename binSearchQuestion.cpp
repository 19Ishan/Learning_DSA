# include<iostream>

using namespace std;

//1. First and last Occurrence
/*
int firstOccur(int arr[], int size, int key){

    int s = 0, e = size - 1;

    int mid = s + (e - s)/2;

    int ans = -1;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }

        else if(key > arr[mid]){
            s = mid + 1;
        }

        else{
            e = mid - 1;
        }

        mid = s + (e - s)/2;
    }
    return ans;

}

int lastOccur(int arr[], int size, int key){

    int s = 0, e = size - 1;

    int mid = s + (e - s)/2;

    int ans = 0;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }

        else if(key > arr[mid]){
            s = mid + 1;
        }

        else{
            e = mid - 1;
        }

        mid = s + (e - s)/2;
    }

    return ans;

}
*/

//2. Find the peak index in a mountain array
/*
int peakMountain(int arr[], int size){

    int s = 0;

    int e = size - 1;

    int mid = s + (e - s)/2;

    while(s<e){
        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }

        else{
            e = mid;
        }

        mid = s + (e - s)/2;
    }

    return s;

}
*/

//3. Find the pivot element in a sorted rotated array
/*
int pivotSortedRotated(int arr[], int size){

    int s = 0;
    int e = size - 1;

    int mid = s + (e - s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid + 1;
        }

        else{
            e = mid;
        }

        mid = s + (e - s)/2;
    }

    return s;

}
*/

//4. Search an element in a rotated and sorted array

/*
int binarySearch(int arr[], int s, int e, int size, int key){

    int start = s, end = e;

    int mid = start + (end - start)/2;

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }

        else if(key > arr[mid]){
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }

    return -1;
}

int pivotElement(int arr[], int size){

    int s = 0, e = size - 1;

    int mid = s + (e - s)/2;

    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }

        else{
            e = mid;
        }

        mid = s + (e - s)/2;
    }

    return s;
}

int searchInRotated(int arr[], int size, int key){

    int pivot = pivotElement(arr, size);
    
    if(key >= arr[pivot] && key <= arr[pivot]){
        return binarySearch(arr, pivot, size - 1, size, key);
    }

    else{
        return binarySearch(arr, 0, pivot - 1, size, key);
    }
    
}
*/

//5. Find the square root of a number using binary search

/*
long long int squareBinary(int n){
    int s = 0;
    int e = n;

    long long int mid = s + (e - s)/2;
    long long int ans = -1;


    while(s<=e){
        long long int square = mid * mid;

        

        if(square > n){
            e = mid - 1;
        }

        else if(square < n){
            ans = mid;
            s = mid + 1;
        }

        else{
            return mid;
        }

        mid = s + (e - s)/2;
    }

    return ans;
}

//for precision values

double precisionSquare(int n, int precision, int sol){

    double factor = 1;
    double ans = sol;

    for(int i = 0 ; i < precision ; i++){
        factor = factor/10;

        for(double j = ans ; j*j < n ; j = j + factor){
            ans = j;
        }
    }
    return ans;
}

*/

//6. Book allocation problem

//isPossible solution
/*
bool isPossible(int arr[], int size, int std, int mid){
    int stdCount = 1;
    int pgSum = 0;

    for(int i = 0 ; i<size ; i++){
        
        if((arr[i] + pgSum) <= mid){
            pgSum = pgSum + arr[i];
        }

        else{
            stdCount++;

            if((arr[i] > mid) || (stdCount > std)){
                return false;
            }

            pgSum = arr[i];
        }
    }
    return true;
}


int bookAllocate(int arr[], int size, int std){
    
    int s = 0;
    int sum = 0;
    int ans = -1;

    //to calculate sum
    for(int i = 0 ; i<size ; i++){
        sum = sum + arr[i];
    }

    int e = sum;

    int mid = s + (e - s)/2;

    while(s<=e){
        if(isPossible(arr, size, std, mid)){
            ans = mid;
            e = mid - 1;
        }
i
        else{
            s = mid + 1;
        }

        mid = s + (e - s)/2;
    }

    return ans;

}
*/

//7. Aggressive cows



int main() {

//1. First and Last occurrence
/*
    int arr[6] = {1, 2, 3, 3, 3, 5};

    cout << firstOccur(arr, 6, 3) << endl;

    cout << lastOccur(arr, 6, 3) << endl;

    int total = lastOccur(arr, 6, 3) - firstOccur(arr, 6, 3)+ + 1;

    cout << total << endl;
*/

//2. Find the peak index in a mountain array
/*
    int arr[5] = {0, 6, 10, 5, 2};

    int size = 5;

    cout << peakMountain(arr, 5);
*/

//3. Find the pivot element in a sorted array or sorted rotated array
/*
    int arr[6] = {2, 4, 6, 8, 0, 1};

    int size = 8;

    cout << pivotSortedRotated(arr, 6);
*/

//4. Search for an element in a sorted and rotated array
/*
    int arr[5] = {12, 15, 18, 2, 4};

    int size = 5;

    cout << searchInRotated(arr, 5, 2);
*/

//5. Find square root of a number
/*
    int n;

    cin >> n;

    int sol = squareBinary(n);

    cout << "The square root with decimals is: " << precisionSquare(n, 3, sol);
*/


//6. Book allocation problem
/*
    int arr[4] = {10, 20, 30, 40};
    int size = 4;

    int std = 2;

    int ans = bookAllocate(arr, 4, 2);

    cout << "The maximum minimum number of pages alloted to a student is: " << ans << endl;
*/

//7. Aggressive cows




    return 0;
}