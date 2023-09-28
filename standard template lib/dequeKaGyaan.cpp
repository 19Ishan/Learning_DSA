# include<iostream>

# include<deque>

using namespace std;

int main() {

    //deque or doubly ended queue yeh dynamically sized arrays

    //implemented using multiple fixed sized arrays to store the eles unlike, arrays and vectors where contiguous location hoti hain

    //random access of eles can be done and also these are dynamic in nature

    deque<int> d;

    d.push_back(3);

    d.push_front(2);

    d.push_back(4);

    d.push_front(1);

    for(int i = 0 ; i<d.size() ; i++){
        cout << d[i] << " ";
    }

    cout << endl;

    d.pop_back();

    cout << "after popping : " << " ";

    for(int i = 0 ; i<d.size() ; i++){
        cout << d[i] << " ";
    }

    cout << endl;

    cout << "Element at 2nd index is: " << d.at(2) << endl;

    cout << "At front: " << d.front() << endl;

    cout << "At back: " << d.back() << endl;

    cout << "Deque is empty: " << d.empty() << endl;

    //d.erase() 
    //function we need to specify the range of eles to be erased from the deque or a particular ele has to be deleted


    // cout << (*d.begin()) << endl;

    //is method ko always use by dereferencing because it doesn't returns a value , it an iterator of type T meaning the type can vary and can be anything
    //cannot be printed directly, use pointer to dereference it

    cout << "Before erasing: " << d.size() << endl;

    d.erase(d.begin(), d.begin() + 1);

    cout << "After erasing: " << d.size() << endl;

    for(int i = 0 ; i<d.size() ; i++){
        cout << d[i] << " ";
    }


    return 0;
}