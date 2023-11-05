# include<iostream>
# include<string>
# include<vector>

using namespace std;

//1. Print all the subsequences of a string

void printSubsequences(string str, string output, int index){

    //base case
    if(index >= str.length()){
        //answer has been build in the output string
        //just print kardo ab
        cout << "Subsequences: " << output << endl;
        return;
    }


    char ch = str[index];

    //exclude the current character of the string
    printSubsequences(str, output, index + 1);

    //include the current character of the string
    output.push_back(ch);
    printSubsequences(str, output, index + 1);

//OR FIRST WE CAN INCLUDE THEN EXCLUDE

    // output.push_back(ch);
    // printSubsequences(str, output, index + 1);

    // //now remove bhi karna hai 
    // output.pop_back();
    // printSubsequences(str, output, index + 1);

}

//2. Find all the subsequences of a string and store them in a vector

void findSubsequences(string str, string output, int index, vector<string>& v){

    //base cases
    if(index >= str.length()){
        //answer has been build up in the O/P string
        //store the string in the vector
        v.push_back(output);
        return ;
    }

    char ch = str[index];

    output.push_back(ch);
    findSubsequences(str, output, index + 1, v);

    output.pop_back();
    findSubsequences(str, output, index + 1, v);
    
}

int main() {

    string str = "abc";
    int index = 0;
    string output = "";

    vector<string> v;

    // printSubsequences(str, output, index);    

    findSubsequences(str, output, index, v);

    for(auto n: v){
        cout << n << endl;
    }

    return 0;
}