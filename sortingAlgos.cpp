# include<iostream>

using namespace std;

void printArr(int arr[], int size){
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
}

/*
//1. Selection Sort
void selectSort(int arr[], int size){

    for(int i = 0 ; i < (size - 1) ; i++){

        int minIndex = i;

        for(int j = i + 1 ; j < size ; j++){

            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }

        }

        swap(arr[i], arr[minIndex ]);
    }

}
*/


/*
//2. Bubble Sort

//A.
void bubbleSort(int arr[], int size){

    for(int i = 0 ; i < size - 1 ; i++){

        for(int j = 0 ; j < size - i - 1 ; j++){

            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }

        }
    
    }

}

//B.

// void bubbleSort(int arr[], int size){
//     for(int i = 1; i < size ; i++){
//         for(int j = 0 ; j < size - i ; j++){
//             if(arr[j] > arr[j + 1]){
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }
*/

//3. Insertion Sort

void insertionSort(int arr[], int size){

    for(int i = 1 ; i < size ; i++){

        int j = i - 1;

        int temp = arr[i];

        for( ; j>=0 ; j--){
            
            if(temp < arr[j]){
                //shift
                arr[j + 1] = arr[j];
            }

            else{
                //rukna hai
                break;
            }

        }

        arr[j + 1] = temp;

    }

}


int main() {

    int arr[6] = {10, 1, 7, 6, 4, 9};

    // selectionSort(arr, 6);

    // bubbleSort(arr, 6);

    insertionSort(arr, 6);

    printArr(arr, 6);
    
    return 0;
    
}