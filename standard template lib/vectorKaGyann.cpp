# include<iostream>

# include<vector>

using namespace std;

int main() {

//1D VectorSssssssssssssssss
/*
    vector<int> v;

    //yeh ek dynamic array hai which basically doubles it size once the size is full matlab agar maine starting mein 4 size ka vector banaya and maine chaaro eles bhar diye then wo automatically ek new vector banyega with double the size, usme saare 4 eles copy karega and then old vector ko dump kardega

    //it can grow it size according to the needs

    //v.size() give the total elements it currently holds

    //v.capcity() gives the total memory it has been allocated till now

    cout << "memory assigned to this vector: " << v.capacity() << endl;

    v.push_back(1);
    cout << "memory assigned to this vector: " << v.capacity() << endl;

    v.push_back(2);
    cout << "memory assigned to this vector: " << v.capacity() << endl;

    v.push_back(3);
    cout << "memory assigned to this vector: " << v.capacity() << endl;

    //yaha pe it shows capa --> 4 means originally iski capacity 2 thi fir isne double kardi upto 4

    cout << "The size of this vector is: " << v.size() << endl;

    cout << "Element at: " << v.at(2) << endl;

    cout << "Element at the front is: " << v.front() << endl;

    cout << "Element at the back is: " << v.back() << endl;

    //before popping the elements

    for(int i = 0 ; i<v.size() ; i++){
        cout << v[i] << " ";
    }

    cout << endl;

    v.pop_back();

    //after popping the element

    for(int i = 0 ; i<v.size() ; i++){
        cout << v[i] << " ";
    }

    cout << endl;

    //v.clear() se we can clear the vector size

    //after using this method humari capacity wont be zero , just size zero hojayega

    cout << "The size before clear() is: " << v.size() << endl;

    v.clear();

    cout << "after clearing the size is: " << v.size() << endl;

//initialisation

    vector<int> a(5, 1);

    //means a vector 'a' with size of '5' and all eles are initialised with '1'

    cout << "eles of 'a' are : " << endl;

    for(int i = 0 ; i<5 ; i++){
        cout << a[i] << " ";
    }

    cout << endl;

    //we can even copy the elements of one vector into another 

    vector<int> copy(a);

    cout << "The eles of copy are: " << endl;

    for(int i = 0 ; i<5 ; i++){
        cout << copy[i] << " ";
    }

    cout << endl;
*/

//CODE HELP

//2D Vectorssssssssssss

    vector< vector<int> > arr(5, vector<int> (10, -1));

    //In 2D array, row size is given by arr.size() -> main array.size()
    for(int i = 0 ; i < arr.size() ; i++){
        //In 2D array, the column size is given by arr[i].size() -> current row of array.size()
        for(int j = 0 ; j < arr[i].size() ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

//Jagged Array

    vector< vector<int> > brr;

    vector<int> v1(5, 0);
    vector<int> v2(2, 1);
    vector<int> v3(6, 4);
    vector<int> v4(3, -1);
    vector<int> v5(9, 10);

    brr.push_back(v1);
    brr.push_back(v2);
    brr.push_back(v3);
    brr.push_back(v4);
    brr.push_back(v5);

    for(int i = 0 ; i < brr.size() ; i++){
        for(int j = 0 ; j < brr[i].size() ; j++){
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}