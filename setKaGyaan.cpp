# include<iostream>
# include<set>

using namespace std;

int main() {
    
    //all eles should be unique 
    //implemented using BST
    //cannot modify an ele only add or delete
    //sorted order mein eles are returned
    //set is slower than unordered set
    //unordered set mein random order mein aate hain eles

    set<int> s;

    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(1);
    s.insert(5);
    s.insert(7);
    s.insert(8);

    for(auto i : s){
        cout << i << " ";
    }

    cout << endl;


    // s.erase(s.begin());

    // for(auto i : s){
    //     cout << i << " ";
    // }

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for(auto i : s){
        cout << i << " ";
    }

    cout << endl;

    cout << "Is 0 present?? " << s.count(0) << endl;

    cout << "Is 3 present?? " << s.count(3) << endl;

    //find() if we find the ele then uska iterator return kardeta hai

    set<int>::iterator itr = s.find(3);

    for(auto it = itr ; it!=s.end() ; it++){
        cout << *it << " ";
    }

    cout << endl;



    return 0;
}