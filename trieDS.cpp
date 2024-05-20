# include<iostream>

using namespace std;

class TrieNode {
    public:
        char value;
        TrieNode * children[26];
        bool isTerminal;

        TrieNode(char val) {
            this -> value = val;
            for(int i = 0 ; i < 26 ; i++) {
                children[i] = NULL;
            }
            this -> isTerminal = false;
        }
};

//insertion in the Trie
void insertWord(TrieNode * root, string word) {

    // cout << "Received Word: " << word << " for insertion" << endl;

    //base case
    if(word.length() == 0) {
        root -> isTerminal = true;
        return;
    }

    char ch = word[0];
    int index = ch - 'a';
    TrieNode* newNode;

    if(root -> children[index] == NULL) {
        //character not found
        //create a node
        newNode = new TrieNode(ch);
        root -> children[index] = newNode;
    }

    else {
        //character found
        //travel to that character
        newNode = root -> children[index];
    }

    // cout << "Value stored: " << newNode -> value << endl;

    insertWord(newNode, word.substr(1));
}

bool searchWord(TrieNode * root, string word) {
    //base case
    if(word.length() == 0) {
        return root -> isTerminal;
    }

    char ch = word[0];
    int index = ch - 'a';
    TrieNode * child;

    if(root -> children[index] == NULL) {
        return false;
    }

    else {
        child = root -> children[index];
    }

    //recursion call
    return searchWord(child, word.substr(1));
}

void deleteWord(TrieNode* root, string word) {
    //base case
    if(word.length() == 0) {
        root -> isTerminal = false;
        return;
    }

    int index = word[0] - 'a';
    TrieNode* child;

    if(root -> children[index] == NULL) {
        //absent
        cout << "The string does not exists" << endl;
        return;
    }

    else {
        //present
        child = root -> children[index];
    }

    //baaki recursion
    deleteWord(child, word.substr(1));
}

int main() {

    TrieNode * root = new TrieNode('-');

    insertWord(root, "cats");
    insertWord(root, "cad");
    insertWord(root, "cca");
    insertWord(root, "bats");
    insertWord(root, "bed");
    insertWord(root, "dogs");
    // insertWord(root, "cat");

    cout << "Insertion done" << endl;
    
    if(searchWord(root, "bats")) {
        cout << "Found" << endl;
    }

    else {
        cout << "Not Found" << endl;
    }

    deleteWord(root, "cadsss");

    // if(searchWord(root, "bats")) {
    //     cout << "Found" << endl;
    // }

    // else {
    //     cout << "Not Found" << endl;
    // }

    return 0;
}