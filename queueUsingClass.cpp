# include<iostream>

using namespace std;

class Queue {

    public:

        int *arr;
        int size;
        int front;
        int rear;

        Queue(int size) {
            arr = new int[size];
            this -> size = size;
            this -> front = -1;
            this -> rear = -1;
        }

        void push(int data) {
            //overflow condition
            if(rear == size - 1) {
                cout << "Queue is overflow, cannot insert a new element" << endl;
                return;
            }

            //empty queue
            else if(front == -1 && rear == -1) {
                front++;
                rear++;
                arr[rear] = data;
            }

            //normal case
            else {
                rear++;
                arr[rear] = data;
            }
        }

        void pop() {
            //underflow condition
            if(front == -1 && rear == -1) {
                cout << "Queue is empty, cannot pop any element" << endl;
                return;
            }

            //single element (yaha galti karunga)
            else if(front == rear) {
                arr[front] = -1; //-1 is an indication that element is not present at that index
                front = -1;
                rear = -1;
            }

            //normal case
            else {
                arr[front] = -1;
                front++;
            }
        }

        bool isEmpty() {
            if(front == -1 && rear == -1) {
                return true;
            }

            else {
                return false;
            }
        }

        int getSize() {
            //corner case -> if queue is empty 
            if(front == -1 && rear == -1) {
                return 0;
            }

            else {
                return (rear - front + 1);
            }
        }

        int getFront() {
            //corner case => if queue is empty
            if(front == -1) {
                cout << "Queue is empty" << endl;
                return -1;
            }

            else {
                return arr[front];
            }
        }

        int getRear() {
            if(rear == - 1) {
                cout << "Queue is empty" << endl;
                return -1;
            } 

            else {
                return arr[rear];
            }
        }

        void printQueue() {
            cout << "Printing the Queue: ";
            for(int i = 0 ; i < size ; i++) {
                cout << arr[i] << " ";
            }

            cout << endl;
        }

        
};

int main() {

    Queue q(6);
    // q.printQueue();

    q.push(6);
    q.push(9);
    q.push(10);

    // q.printQueue();

    q.push(11);
    q.push(12);
    q.push(14);

    q.printQueue();

    cout << "Size of the queue is: " << q.getSize() << endl;

    q.pop();
    q.printQueue();

    q.push(100);
    q.printQueue();

    cout << "Front element is: " << q.getFront() << endl;

    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.printQueue();

    q.pop();
    q.printQueue();

    cout << "Size of the queue is: " << q.getSize() << endl;

    return 0;
}