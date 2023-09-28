# include<iostream>
# include<vector>

# include<math.h>

using namespace std;

// int countPrimes(int n){
//     vector<bool> prime(n + 1, true);

//     prime[0] = prime[1] = false;

//     int count = 0;

//     for(int i =2 ; i < n ; i++){
//         if(prime[i]){
//             count++;
//         }

//         for(int j = 2*i ; j < n ; j = j + i){
//             prime[j] = false;
//         }
//     }
//     return count;
// }

vector<long long> prime;

void sieve(int n){
    vector<bool> isPrime(n + 1, true);

    for(int i = 2 ; i < n ; i++){
        if(isPrime[i]){
            prime.push_back(i);

            for(long long j = i * i ; j <= n ; j = j + i){
                isPrime[j] = false;
            }
        }
    }
}


void segmentedSieve(int l, int h){

    long long sq = sqrt(h);

    sieve(sq);

    vector<bool> isPrime(h - l + 1, true);

    for(long long p: prime){
        long long sm = (l / p)*p;
        if(sm < l){
            sm = sm + p;
        }

        for(long long m = sm ; m <= h ; m = m + p){
            isPrime[m - l] = false;
        }
    }

    for(long long i = l ; i <= h ; i++){
        if(isPrime[i - l] == true){
            cout << i << " ";
        }
    }
}

int main() {

    segmentedSieve(5, 9);

    return 0;
}