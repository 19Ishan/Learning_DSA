# include<iostream>

using namespace std;

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

int main() {

    int arr[5] = {1, 2, 4, 5, 7};
    int size = 5;

    cout << binarySearch(arr, 5, 111);

    return 0;
