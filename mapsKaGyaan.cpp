# include<iostream>
# include<map>

using namespace std;

int main() {

    map<int, string> m;

    //values will come in sorted order 

    m[1] = "Hello";
    m[2] = "Ishan";
    m[10] = "Wow";
    m[4] = "Amazing";

    for(auto i : m){
        cout << "The key is: " <<i.first << " and the value is: " << i.second << endl;
    }

    cout << "Finding a key 2: " << m.count(2) << endl;

    cout << "Finding a key 0: " << m.count(0) << endl;

    cout << endl;

    cout << "before erasing: " << endl;

    for(auto i : m){
        cout << i.first << endl;
    }

    m.erase(4);

    cout << endl;

    cout << "after erasing: " << endl;

    for(auto i : m){
        cout << i.first << endl;
    }

    cout << endl;

    auto it = m.find(2);

    for(auto i = it ; i!=m.end() ; i++){
        cout << (*i).first << endl;
    }

//COMPLEXITIES

    //insert, count, find sabki comp O(log n) hoti hai in case of ordered map, because this is implemented using BST

    //in case of unordered map jiski implementation is using hash table uski O(1)


    
    return 0;
}