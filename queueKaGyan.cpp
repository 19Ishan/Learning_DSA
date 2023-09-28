# include<iostream>

# include<queue>

using namespace std;

int main() {

    //queue follows FIFO

    queue<string> q;

    q.push("Hey");
    q.push("Hello");
    q.push("Wow");

    cout << q.front() << endl;

    cout << "size before : " << q.size() << endl;

    q.pop();

    cout << q.front() << endl;
    
    cout << "size after : " << q.size() << endl;

    return 0;
}