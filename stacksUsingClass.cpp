# include<iostream>

using namespace std;

class Stack {

    public:
        int* arr;
        int size;
        int top;

        Stack(int size) {
            arr = new int[size];
            this -> size = size;
            this -> top = -1;
        }
    
        void push(int data) {
            if(top == size - 1) {
                cout << "Stack is already full. Overflow condition" << endl;
                return;
            }

            else {
                top++;
                arr[top] = data;
            }
        }

        void pop() {
            if(top == -1) {
                cout << "Stack is empty. Underflow condition" << endl;
                return;
            }

            else {
                top--;
            }
        }

        bool isEmpty() {
            if(top == -1) {
                return true;
            }

            else {
                return false;
            }
        }

        int sizeOfStack() {
            return (top + 1);
        }

        int getTop() {
            if(top == -1) {
                cout << "Stack is empty" << endl;
            }

            else {
                return arr[top];
            }
        }

        void printStack() {

            cout << endl;

            cout << "Value of top is : " << top << endl; 

            cout << "Stack: " << endl;

            for(int i = 0 ; i < sizeOfStack() ; i++) {
                cout << arr[i] << " ";
            }

            cout << endl;
        }
};

int main() {

    //declaration
    Stack st(6);

    //insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(60);
    st.push(100);
    st.push(200);

    st.printStack();

    cout << "The value at the top is: " << st.getTop() << endl;

    st.pop();

    st.printStack();

    cout << "The value at the top is: " << st.getTop() << endl;
    
    return 0;
}