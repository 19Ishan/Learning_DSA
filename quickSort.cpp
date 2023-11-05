# include<iostream>

using namespace std;

void quickSort(int arr[], int s, int e){

    //base cases
    if(s > e){
        return ;
    }

    if(s == e){
        return;
    }


    int i = s - 1;
    int j = s;

    int pivot = e;

    while(j < pivot){
        if(arr[j] < arr[pivot]){
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }

    i++;
    swap(arr[i], arr[pivot]);

    quickSort(arr, s, i - 1);
    quickSort(arr, i + 1, e);
}

int main() {

    int arr[] = {7, 2, 1, 8, 6, 3, 5, 4};
    int size = 8;
    int s = 0;
    int e = size - 1;

    cout << "Before Quick Sort: " << endl;

    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    quickSort(arr, s, e);

    cout << "After Quick Sort: " << endl;

    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    
    return 0;
}