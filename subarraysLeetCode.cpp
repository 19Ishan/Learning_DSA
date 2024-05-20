# include<iostream>
# include<vector>

using namespace std;

//Generating all sub arrays for a given array
void printSubarrays(vector<int> arr) {
    int n = arr.size();

    for (int i = 0 ; i < n ; i++) {
        for (int j = i ; j < n ; j++) {
            for (int k = i ; k <= j ; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
    return;
}

int main() {
    vector<int> arr = {10, 20, 30};

    printSubarrays(arr);
    
    return 0;
}