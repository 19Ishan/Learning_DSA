# include<iostream>
# include<queue>
using namespace std;

int main() {

    queue<int> q;

    q.push(10);
    q.push(15);
    q.push(19);
    q.push(20);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);

    cout << "The element at the front of the queue is: " << q.front() << endl;

    cout << "The element at the rear of the queue is: " << q.back() << endl;

    cout << "The size of the queue is: " << q.size() << endl;

    q.pop();
    q.pop();
    q.pop();
    
    cout << "The element at the front of the queue is: " << q.front() << endl;

    cout << "The element at the rear of the queue is: " << q.back() << endl;

    cout << "The size of the queue is: " << q.size() << endl;

    return 0;
}