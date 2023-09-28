# include<iostream>

using namespace std;

bool linearSearch(int arr[], int size, int key){
    int i = 0;

    while(i<size){

        if(arr[i] == key){
            return 1;
        }
        i++;
    }

    return 0;
}

int main() {

    int arr[10] = {2, 1, -10, 90, -8, 45, 3, -100, 30, 23};

    int key, size;

    cout << "Enter the size of the array: " << " ";
    cin >> size;

    cout << "Enter the element you want to find: " << " ";
    cin >> key;

    if(linearSearch(arr, size, key)){
        cout << "The element is present in the array" << endl;
    }

    else{
        cout << "The element is not present in the array" << endl;
    }



    
    return 0;
}