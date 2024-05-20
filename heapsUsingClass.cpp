# include<iostream>

using namespace std;

class Heap {
    public:
        int * arr;
        int size;
        int capacity;

        Heap(int capacity) {
            this -> arr = new int[capacity];
            this -> size = 0;
            //size denotes the current number of elements in the heap
            this -> capacity = capacity;
        }

        void insert(int val) {
            //overflow condition
            if(size == capacity) {
                cout << "Heap is full, no more insertion possible" << endl;
            }

            //insert the element at the available position
            size++;
            int index = size;
            arr[index] = val;

            //heapification
            while(index > 1) {
                int parentIndex = index / 2;

                if(arr[index] > arr[parentIndex]) {
                    swap(arr[index], arr[parentIndex]);
                    index = parentIndex;
                }

                else {
                    break;
                }
            }
        }

        void printHeap() {
            cout << "Printing the content of the heap: " << endl;
            for(int i = 1 ; i <= size ; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        int deleteFromHeap() {

            //store the rootNode and replace it with the lastNode
            int ans = arr[1];

            arr[1] = arr[size];

            size--;
            //to indicate that the rootNode has been deleted

            //heapification -> jo new rootNode bani hai, we need to check if the rootNode is greater than its children

            int index = 1;

            while(index < size) {
                int leftIndex = 2 * index;
                int rightIndex = ((2 * index) + 1);

                int largestIndex = index;
                //to store the index of the largest index among the three at the top

                if(leftIndex <= size && arr[largestIndex] < arr[leftIndex]) {
                    largestIndex = leftIndex;
                }

                if(rightIndex <= size && arr[largestIndex] < arr[rightIndex]) {
                    largestIndex = rightIndex;
                }

                //if index par jo element hai wahi bigger hai then
                if(index == largestIndex) {
                    break;
                }

                else {
                    swap(arr[index], arr[largestIndex]);
                    index = largestIndex;
                }
            }

            return ans;

        }
};

void heapify(int * arr, int n, int index) {
    int leftIndex = 2 * index;
    int rightIndex = ((2 * index) + 1);

    int largestIndex = index;

    //check and compare the largestIndex from left and right nodes
    if(leftIndex <= n && arr[leftIndex] > arr[largestIndex]) {
        largestIndex = leftIndex;
    }

    if(rightIndex <= n && arr[rightIndex] > arr[largestIndex]) {
        largestIndex = rightIndex;
    }

    //ab iske baad largestIndex will be pointing to the node which has the greatest value
    //if index == largestIndex hua then no swap
    //but if index != largestIndex hua then swap

    if(index != largestIndex) {
        swap(arr[index], arr[largestIndex]);
        index = largestIndex;
        heapify(arr, n, index);
    }

}

int main() {

    Heap h(20);

    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(11);
    h.insert(6);

    h.printHeap();

    h.deleteFromHeap();

    h.printHeap();
    
    return 0;
}