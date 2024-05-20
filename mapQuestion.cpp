# include<iostream>
# include<string>
# include<map>
# include<unordered_map>

using namespace std;

// 1. I have an input string , print the freqs of all the characters in this sting using map
void countCharacters(map<char, int> &mapping, string str) {
    for(int i = 0 ; i < str.length() ; i++) {
        char ch = str[i];
        mapping[ch] = mapping[ch] + 1;
    }
}

int main() {

    string str = "IshanAnwar";
    map<char, int> mapping;

    countCharacters(mapping, str);

    for(auto i: mapping) {
        cout << i.first << " -> " << i.second << endl;
    }
    
    return 0;
}