
#include <bits/stdc++.h>

#include <ext/pb_ds/tree_policy.hpp>
using namespace std;

// Types
#define ui unsigned int
#define us unsigned short
#define ull unsigned long long
#define ll long long
#define ld long double
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vii vector<pair<int, int>>
#define pii pair<int, int>

void SieveOfEratosthenes(int n)
{
   
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++) {
        
        if (prime[p] == true) {
            
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

     
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}

void solve(){

}

int manin(){


    return 0;
}
