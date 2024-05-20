# include<iostream>
# include<stack>

using namespace std;

class Stack {
    public:
        int * arr;
        int size;
        int top;

        Stack(int size) {
            arr = new int[size];
            this -> size = size;
            this -> top = -1;
        }
};

int findMid(stack<int> &st, int position, int& ans) {
    //base case
    if(position == 1) {
        //middle element found
        ans = st.top();
        return ans;
    }

    //ek case mera baaki recursion ka
    position--;
    int temp = st.top();
    st.pop();

    //recursion call
    ans = findMid(st, position, ans);

    //backtracking
    //wapas element push kardo
    st.push(temp);

    return ans;
}

int getMidElement(stack<int> &st, int size) {

    //check for underflow condition
    if(size == 0) {
        cout << "Stack is empty" << endl;
        return -1;
    }

    else {
        int position = 0;

        if(size & 1) {
            //odd
            position = (size / 2) + 1;
        }

        else {
            //even
            position = (size / 2);
        }

        int ans = -1;
        
        findMid(st, position, ans);

        return ans;
    }
}

int main() {

    stack<int> st;

    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // st.push(50);
    // st.push(60);

//1. Find the middle element present in the stack

    int middleElement = getMidElement(st, st.size());

    cout << "The middle element in the stack is: " << middleElement << endl;
    
    return 0;
}