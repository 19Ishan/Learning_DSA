# include<iostream>
# include<queue>

using namespace std;

class Heap {
    public:
        int * arr;
        int size;
        int capacity;

        Heap(int capacity) {
            this -> arr = new int[capacity];
            this -> size = 0;

            this -> capacity = capacity;
        }

        int deleteFromHeap() {
            int ans = arr[1];
            arr[1] = arr[size];
            size--;

            int index = 1;
            while(index < size) {
                int leftIndex = 2 * index;
                int rightIndex = ((2 * index) + 1);

                int smallIndex = index;

                if(leftIndex <= size && arr[leftIndex] < arr[smallIndex]) {
                    smallIndex = leftIndex;
                }

                if(rightIndex <= size && arr[rightIndex] < arr[smallIndex]) {
                    smallIndex = rightIndex;
                }

                if(smallIndex == index) {
                    break;
                }

                else {
                    swap(arr[index], arr[smallIndex]);
                    index = smallIndex;
                }
            }

            return ans;
        }
};

void maxHeapify(int * arr, int n, int index) { //for max heap
    int leftIndex = 2 * index;
    int rightIndex = ((2 * index) + 1);

    int largestIndex = index;

    if(leftIndex <= n && arr[largestIndex] < arr[leftIndex]) {
        largestIndex = leftIndex;
    }

    if(rightIndex <= n && arr[largestIndex] < arr[rightIndex]) {
        largestIndex = rightIndex;
    }

    if(index != largestIndex) {
        swap(arr[largestIndex], arr[index]);
        index = largestIndex;
        maxHeapify(arr, n, index);
    }
}

//1. Build a heap out of a given array -> T.C. O(n) not O(n * log n)
void buildMaxHeap(int * arr, int n) {
    for(int index = n / 2 ; index > 0 ; index--) {
        maxHeapify(arr, n, index); 
    }
}

//2. Heap Sort
void heapSort(int arr[], int n) {
    
    while(n > 1) {
        swap(arr[1], arr[n]);
        n--;
        maxHeapify(arr, n, 1);
    }

}

//3. Min heap heapify method
void minHeapify(int * arr, int n, int index) {
    int leftIndex = 2 * index;
    int rightIndex = ((2 * index) + 1);

    int smallIndex = index;

    if(leftIndex <= n && arr[leftIndex] < arr[smallIndex]) {
        smallIndex = leftIndex;
    }

    if(rightIndex <= n && arr[rightIndex] < arr[smallIndex]) {
        smallIndex = rightIndex;
    }

    if(index != smallIndex) {
        swap(arr[index], arr[smallIndex]);
        index = smallIndex;

        minHeapify(arr, n, index);
    }
} 

void buildMinHeap(int arr[], int n) {
    for(int index = n / 2 ; index > 0 ; index--) {
        minHeapify(arr, n, index);
    }
}


int main() {

    return 0;
}