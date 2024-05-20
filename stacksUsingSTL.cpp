# include<iostream>
# include<stack>

using namespace std;

int main() {

    //declaration
    stack<int> st;

    //insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << "The size of the stack is: " << st.size() << endl;

    cout << "Element present at the top is: " << st.top() << endl;

    st.pop();
    st.pop();
    
    cout << "The size of the stack is: " << st.size() << endl;

    cout << "Element present at the top is: " << st.top() << endl;
    
    return 0;
}