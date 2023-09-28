# include<iostream>
# include<vector>

using namespace std;


//1. Greatest common divisor (Euclid wala theorem)
/*
int findGCD(int a, int b){

    if(a == 0){
        return b;
    }

    if(b == 0){
        return a;
    }

    while(a != b){
        if(a > b){
            a = a - b;
        }

        else{
            b = b - a;
        }
    }
    return a;    
}
*/

//2. Sieve of Eratosthenes (Find all the primes that come before a particular number)
/*
int countPrimes(int n){

    int count  = 0;

    //create a vector of size n + 1 and initialise all the elements with true assuming all the elements are prime by default

    vector<bool> prime(n + 1, true);

    //we know that 0 and 1 are non prime by default so we'll mark them false stating that they are non prime
    prime[0] = prime[1] = false;

    for(int i = 2 ; i < n ; i++){

        if(prime[i]){
            count++;
        }

        for(int j = 2 * i ; j < n ; j = j + i){

            //elements which come in the table of any element, mark that as false -> non prime
            prime[j] = 0;
        }
    }
    return count;
}
*/

//3. Segmented Sieve of Eratosthenes

// void segmentedSieve(int l, int h, int n){
    
//     //find all the prime numbers from 0 to root(h) using sieve basic algo

//     vector<int> countPrime(int n){
//         vector<bool> prime(n + 1, true);

//         prime[0] = prime[1] = false;

//         int count = 0;
//         for(int i = 2 ; i < n ; i++){
//             if(prime[i]){
//                 count++;
//             }

//             for(int j = 2*i ; j < n ; j = j + i){
//                 prime[j] = 0;
//             }

//             prime.push_back(i);
//         }

//         return count;
        
//     }
// }


int main() {

//1. Find the greatest common divisor
/*
    int a, b;

    cout << "Enter the two number whose gcd has to be found out: " << endl;

    cin >> a >> b;

    int ans = findGCD(a, b);

    cout << "The GCD of the two numbers is: " << ans << endl;
*/

//2. Find all the prime numbers upto a certain number
/*
    int n;

    cout << "Enter the number upto which you need to find the prime numbers: " << endl;

    cin >> n;

    int ans = countPrimes(n);

    cout << "The total number of elements which are less than n are: " << ans << endl;
*/



    return 0;
}