# include<iostream>
# include<queue>

using namespace std;

//1. Find the kth smallest element in an array.

//Approach: 1 -> Make min heap of complete array and do k - 1 pops

// int findKMinElement(int arr[], int n, int k) {
//     priority_queue<int, vector<int>, greater<int> > pq;

//     for(int i = 0 ; i < n ; i++) {
//         int element = arr[i];
//         pq.push(element);
//     }

//     for(int j = 0 ; j < k - 1 ; j++) {
//         pq.pop();
//     }

//     return pq.top();
// }

//Approach: 2 -> Make max heap of k elements in the array and pop the top element if the new element is less than the top element.

int findKMinElement(int arr[], int n, int k) {
    priority_queue<int> pq;

    //for k elements
    for(int i = 0 ; i < k ; i++) {
        int element = arr[i];
        pq.push(element);
    }

    //remaining elements check
    for(int i = k ; i < n ; i++) {
        int element = arr[i];
        if(pq.top() > element) {
            pq.pop();
            pq.push(element);
        }
    }

    return pq.top();

}    

//2. Find the k largest element in the array.

//ALGO: make a min heap of k elements and pop the top element if the new element is greater than the top element.

int findKLargest(int arr[], int n, int k) {

    priority_queue<int, vector<int>, greater<int> > pq;
    
    for(int i = 0 ; i < k ; i++) {
        pq.push(arr[i]);
    }

    for(int i = k ; i < n ; i++) {
        int element = arr[i];
        if(pq.top() < element) {
            pq.pop();
            pq.push(element);
        }
    } 

    return pq.top();
}

//3. Check whether CBT is a heap or not??

//4. 

int main() {

    // int arr[] = {3, 7, 4, 5, 6, 8, 9};
    // int n = 7;
    // int k = 4;

    // cout << "4rth smallest element is: " << findKMinElement(arr, n, k) << endl;

    // cout << "4rth largest element is: " << findKLargest(arr, n, k) << endl;
    
    return 0;
}