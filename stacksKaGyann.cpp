# include<iostream>
# include<stack>

using namespace std;

int main() {

    stack<string> s;

    s.push("Hey");
    s.push("There");
    s.push("Wow");

    cout << s.top() << endl;

    s.pop();

    cout << s.top() << endl;

    cout << "The size of the stack is: " << s.size() << endl;

    cout << "Empty or not: " << s.empty() << endl;
    
    return 0;
}