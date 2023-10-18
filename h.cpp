# include<iostream>
# include<math.h>
#include<vector>

using namespace std;

int main() {
    //DECIMAL TO BINARY +ve number
    
    int n;

    cout << "Enter a number you want to convert: " << endl;

    cin >> n;
    vector<int> v;
    for(int i=2;i<=n;i++){
        if(i==2||i==3||i==5||i==7){
            v.push_back(i);
        }
        else {
            for(int j=0;j<v.size();j++){
                if(i%v[j]!=0){
                    v.push_back(i);
                }
            }
        }
    }

}