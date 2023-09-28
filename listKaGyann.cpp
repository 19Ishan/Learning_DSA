# include<iostream>

# include<list> 

using namespace std;

int main() {

    //doubly ll se we implement list

    //double LL has two ptrs one for front and one for back

    //no direct access for the element we need to traverse upto that element to access

    list<int> l;

    l.push_back(3);

    l.push_front(2);

    for(int i:l){
        cout << i << " ";
    }

    cout << endl;

    l.erase(l.begin());

    cout << "after erase: " << endl;

    for(int i:l){
        cout << i << " ";
    }

    cout << endl;

    list<int> n(5, 100);

    for(int i:n){
        cout << i << " ";
    }

    cout << endl;



    
    return 0;
}