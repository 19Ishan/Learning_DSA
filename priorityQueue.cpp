# include<iostream>
# include<queue>

using namespace std;

int main() {

    //aisi queue jiska first ele always greatest hoga
    //default priotiy queue max heap hoga
    //when taking out eles from a prori queue which is max heap then max ele aayega else agar min heap hai to min ele aayega


    priority_queue<int> maxi;
     //bana hai based on max heap, jab bhi ele fetch karenge tab wo always max wala aayega

    priority_queue<int, vector<int>, greater<int> > mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(0);

    int n = maxi.size();
    
    for(int i = 0 ; i<n ; i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    //always max ele aayega every time

    mini.push(0);
    mini.push(4);
    mini.push(2);
    mini.push(1);

    int m = mini.size();

    for(int i = 0 ; i<m ; i++){
        cout << mini.top() << " ";
        mini.pop();
    }

    cout << endl;

    
    return 0;
}