# include<iostream>

using namespace std;

//A. Iterative Approach
int binarySearch(int arr[], int size, int key){
    int s = 0;
    int e = size - 1;

    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid] == key){
            return mid;
        }

        else if(key > arr[mid]){
            s = mid + 1;
        }

        else{
            e = mid - 1;
        }

        mid = s + (e - s)/2;
    }

    return -1;
}

//B. Recursive Appraoch
int bSearchRecursion(int arr[], int s, int e, int target){

    //base case
    if(s > e){
        return -1;
    }

    //processing

    //ek case main solve karunga 
    //baaki recursion

    int mid = s + (e - s)/2;

    if(arr[mid] == target){
        return mid;
    }

    //recursive calls

    if(arr[mid] < target){
        //go in right
        bSearchRecursion(arr, mid + 1, e, target);
    }

    else{
        //go in left
        bSearchRecursion(arr, s, mid - 1, target);
    }
}

int main() {

    int arr[5] = {1, 2, 4, 5, 7};
    int size = 5;

    cout << binarySearch(arr, 5, 111);

    return 0;
