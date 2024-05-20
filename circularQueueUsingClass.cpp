# include<iostream>

using namespace std;

class CQueue {

    public:
        int * arr;
        int size;
        int front;
        int rear;

        CQueue(int size) {
            arr = new int[size];
            this -> size = size;
            this -> front = -1;
            this -> rear = -1;
        }

        void push(int data) {
            if(rear == size -1) {
                //overflow condition
                cout << "Cannot insert new data" << endl;
            }

            else if(front == -1 && rear == -1) {
                //single element ka case
                front++;
                rear++;
                arr[rear] = data;
            }

            else if(front != 0 && rear == size - 1) {
                //circular nature
                rear = rear % size;
                arr[rear] = data;
            }

            else {
                //normal case
                rear++;
                arr[rear] = data;
            }
        }

};

int main() {
    
    return 0;
}