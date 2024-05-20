# include<iostream>
using namespace std;

class cQueue {
    public:
        int *arr;
        int size;
        int front;
        int rear;

        cQueue(int size) {
            arr = new int[size];
            this -> size = size;
            this -> front = -1;
            this -> rear = -1;
        }

        void push(int data) {
            //Overflow Condition
            if ((front == 0 && rear == size - 1) || (rear + 1 == front)) { //isme second condition bhool jaunga
                cout << "Queue is full, cannot insert a new element" << endl;
                return;
            }
 
            //Single element (Yeh wala case hi bhool jaunga)
            else if (front == rear) {
                front++;
                rear++;
                arr[rear] = data;
            }

            //Circular Nature
            else if (rear == size - 1 && front != 0) {
                rear = 0;
                arr[rear] = data;
            }

            else {
                rear++;
                arr[rear] = data;
            }
        }

        void pop(int data) {
            //Underflow Condition
            if (front == -1 && rear == -1) {
                cout << "Queue is empty, cannot pop any element" << endl;
                return;
            }

            //Single element
            else if (front == rear) {
                arr[front] = -1;
                front = -1;
                rear = -1;
            }
            
            //Circular Nature
            else if (front == size - 1) {
                front = 0;
                arr[front] = -1;
            }

            else {
                arr[front] = 1;
                front++;
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

    cQueue q(5);
    q.printQueue();

    q.push(10);
    q.printQueue();
    
    return 0;
}