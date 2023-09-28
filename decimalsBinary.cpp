# include<iostream>
# include<math.h>

using namespace std;

int main() {
    //DECIMAL TO BINARY +ve number
    
    int n;

    cout << "Enter a number you want to convert: " << endl;

    cin >> n;

    int ans = 0;
    int i = 0;

    while(n!=0){
        int bit = n&1;
        //doing bit wise "and" with a number gives us the bit 0 or 1

        ans = (bit * pow(10, i)) + ans;

        //this formula prints the digits in the reverse order 
        //ex 1,2,3 digits will be printed as 321

        n = n >> 1; //n/2
        //we do right shift to update the number so that different bit can come on the unit place
        //ex 101 >> 1 becomes 010 then it becomes 001

        i++;
    }

    cout << "The binary representation of the number is: " << ans << endl;
    

    
    //DECIMAL TO BINARY -ve number

    /*
    int n;

    cout << "Enter a -ve decimal number: " << endl;

    cin >> n;

    int ans = 0;

    int i = 0;

    while(n>=0){
        int bit = n&1;

        n = n>>1;

        ans = (bit * pow(10, i)) + ans;

        i--;
    }

    cout << "ans is: " << ans << endl;

    int ones;
    */

    //BINARY TO DECIMAL
    /*
    int n;

    cout << "Enter a binary number: " << endl;

    cin >> n;

    int ans = 0;
    int i = 0;

    while(n!=0){

        int digit = n % 10;

        //here int bit = n&1; is wrong 
        //because bas hume pata hai that we are giving a binary as input but comp ko nhi usko lagta hai that it is a decimal

        if(digit){
            ans = (digit * pow(2, i)) + ans;
        }

        n = n/10;

        //similarly yaha par n = n>>1; is wrong
        //because hume digits par kaam karna hai so why we will use right shift?? theek hai!!

        i++;
    }

    cout << "The decimal is: " << ans << endl;
    */


        
    return 0;
}