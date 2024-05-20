# include<iostream>
# include<vector>
# include<limits.h>
# include<unordered_map>
# include<math.h>

using namespace std;

void printCount(int n) {
    if(n == 0){
        return;
    }

    cout << n << " ";

    printCount(n-1);

}

void fib(int n) {
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    int sum = 0;

    for(int i = 2 ; i <= n ; i++) {
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
}

void getMin(int arr[], int index, int size, int& mini) {
    //base case
    if(index >= size) {
        return ;
    }

    mini = min(arr[index], mini);

    return getMin(arr, index + 1, size, mini); 
}

void copyEvenNumbers(int arr[], int n,  int index, vector<int>& v) {
    //base case
    if(index >= n) {
        return;
    }

    if((arr[index] & 1) == 0)  {
        v.push_back(arr[index]);
    }

    return copyEvenNumbers(arr, n, index + 1, v);
}

void doubleTheNumbers(int arr[], int n, int index) {
    //base case
    if(index >= n) {
        return;
    }

    arr[index] = 2 * arr[index];

    return doubleTheNumbers(arr, n, index + 1);
}

void getMax(int arr[], int n, int index, int& maxi) {
    //base case
    if(index >= n) {
        return;
    }

    maxi = max(arr[index], maxi);

    return getMax(arr, n, index + 1, maxi);    
}

void findElement(int arr[], int size, int index, int target, int& ans) {
    //base case
    if(index >= size) {
        return;
    }

    if(arr[index] == target) {
        ans = index;
    }

    return findElement(arr, size, index + 1, target, ans);
}

void printOccur(int arr[], int size, int index, int target) {
    //base case
    if(index >= size) {
        return;
    }

    if(arr[index] == target) {
        cout << index << " ";

    }

    return printOccur(arr, size, index + 1, target);
}

vector<int> storeOccur(int arr[], int size, int index, int target) {
    vector<int> ans;
    if(index >= size) {
        return ans;
    }

    if(arr[index] == target) {
        ans.push_back(index);
    }

    return storeOccur(arr, size, index + 1, target);
}

void printOccurString(string s, int size, int index, char target, unordered_map<char, int>& mapping) {
    if(index >= size) {
        return;
    }

    // if(s[index] == target) {
        // cout << "t is present at: " << index << " ";
        mapping[target] = mapping[target] + 1;
    // }

    return printOccurString(s, size, index + 1, target, mapping);
}

void digitToNumber(vector<int>& v, int n, int index, int& ans) {
    if(index >= n) {
        return;
    }

    ans = ans * 10 + v[index];

    return digitToNumber(v, n, index + 1, ans);
}

bool checkSorted(int arr[], int size, int index) {
    //base case
    if(index == size - 1) {
        // if(arr[index] >= arr[index + 1]) {
        //     return true;
        // }

        // else {
        //     return false;
        // }
        return true;
        
    }

    if(arr[index] <= arr[index + 1]) {
        bool recKaAns = checkSorted(arr, size, index + 1);
        return recKaAns;
    }

    else {
        return false;
    }
}

// bool checkSorted(int arr[], int size, int index) {
//     // Base case
//     if (index >= size - 1) {
//         return true;
//     }

//     // Check if the current element is greater than the next one
//     if (arr[index] > arr[index + 1]) {
//         return false;
//     }

//     // Recursively check the rest of the array
//     bool recKaAns = checkSorted(arr, size, index + 1);
//     return recKaAns;
// }

void findSubsequences(string str, string output, int index) {
    //base case
    if(index >= str.length()) {
        cout << output << endl;
        return;
    }

    char ch = str[index];

    //include
    output.push_back(ch);
    findSubsequences(str, output, index + 1);

    //exclude
    output.pop_back();
    findSubsequences(str, output, index + 1);
}

int main() {

    // int arr[] = {1, 2, 3};
    // int size = 3;
    // int index = 0;
    // int maxi = INT_MIN;
    // int ans = -1;

    // if(checkSorted(arr, size, index)) {
    //     cout << "Sorted" << endl;
    // }

    // else {
    //     cout << "Not Sorted" << endl;
    // }


    string str = "abc";
    string output = "";
    int index = 0;
    findSubsequences(str, output, index);

    // int n = 4;
    // int index = 0;
    // int ans = 0;

    // digitToNumber(v, n, index, ans);

    // cout << ans << endl;

    // findElement(arr, n, index, 42, ans);

    // cout << ans << endl;

    // printOccur(arr, n, index, 10);

    // cout << endl;

    // string s = "text";
    // int n = s.length();
    // char target = 't';
    // int index = 0;
    // // vector<char> ans;
    // unordered_map<char, int> mapping;

    // printOccurString(s, n, index, target, mapping);

    // for(auto i : mapping) {
    //     cout << i.first << " -> " << i.second << endl;
    // }
    // cout << endl;

    // vector<int> v;

    // copyEvenNumbers(arr, n, index, v);

    // for(auto i : v) {
    //     cout << i << " ";
    // }

    // doubleTheNumbers(arr, n, index);

    // for(auto i : arr) {
    //     cout << i << " ";
    // }

    // getMax(arr, n, index, maxi);

    // cout << maxi << endl;
    
    return 0;
}