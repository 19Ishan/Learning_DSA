# include<iostream>
# include<set>

using namespace std;

int main() {

    set<char> s;

    s.insert('a');
    s.insert('z');
    s.insert('c');
    s.insert('v');
    
    cout << "Size of the set is: " << s.size() << endl;

    for(auto i : s) {
        cout << i << " ";
    }

    while(s.find('a') != s.end()) {
        cout << 
    }

    return 0;
}