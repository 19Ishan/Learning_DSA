# include<iostream>

using namespace std;

int main() {

    int row;
    cin >> row;

    int col;
    cin >> col;

    int**arr = new int*[row];
    for(int i = 0 ; i < row ; i++){
        arr[i] = new int[col];
    }

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Printing the array: " << endl;

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Freeing up the memory: " << endl;

    for(int i = 0 ; i < row ; i++){
        delete [] arr[i];
    }

    delete [] arr;

    
    return 0;
}