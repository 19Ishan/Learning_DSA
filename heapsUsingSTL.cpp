# include<iostream>
# include<queue>

using namespace std;

int main() {

    priority_queue<int> pq; //Max Heap

    // priority_queue<int, vector<int>, greater<int> > pq; //Min Heap

    // pq.push(10);
    // pq.push(20);
    // pq.push(30);
    // pq.push(40);
    // pq.push(50);

    // cout << "Element at the top is: " << pq.top() << endl;

    // pq.pop();

    // cout << "Element at the top is: " << pq.top() << endl;

    pq.push(3);
    pq.push(7);
    pq.push(4);
    pq.push(5);
    // pq.push(6);
    // pq.push(8);
    // pq.push(9);

    cout << pq.top() << endl;

    pq.pop();
    
    cout << pq.top() << endl;

    pq.push(6);

    cout << pq.top() << endl;

    
    return 0;
}