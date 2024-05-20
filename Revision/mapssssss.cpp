# include<iostream>
# include<unordered_map>
# include<map>

using namespace std;

void findFreq(map<char, int>& mp, string s) {
    for(int i = 0 ; i < s.length() ; i++) {
        char ch = s[i];
        mp[ch] = mp[ch] + 1;
    }
}

void updateFreq(map<int, int>& mp, vector<int> arr(), int size) {
    for(int i = 0 ; i < size ; i++) {
        mp[arr[i]]++;
    }
}

int main() {

    // map<char, int> mp;

    // mp[0] = "abc";
    // mp[1] = "bcd";
    // mp[2] = "cde";
    // mp[3] = "def";

    // cout << "Size of the map is: " << mp.size() << endl;

    // string s = "aabcbdeddd";

    // findFreq(mp, s);

    // cout << "Before deleting: " << endl;

    // for(auto pr : mp) {
    //     cout << pr.first << " -> " << pr.second << endl;
    // }

    // mp.erase('a');

    // cout << "After deleting: " << endl;

    // for(auto pr : mp) {
    //     cout << pr.first << " -> " << pr.second << endl;
    // }

    map<int, int> mp;
    vector<int> arr(6);

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    arr.push_back(60);

    int size = 6;

    updateFreq(mp, arr, size);

    for(auto i : mp) {
        cout << i.first << " -> " << i.second << endl;
    }

    int last = arr.back();
    
    return 0;
}