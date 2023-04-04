#include<bits/stdc++.h>
#include<vector>
using namespace std;


bool prime(int a)
{
    if(a==1)
    {
        return false;
    }

    for(int i=2;i<a;i++) // Time Complexity O(a)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}

// First Method Nive solution
/*
void primeNumberUntilN(int n) {   // Time complexity is O(n Root(n))

    for(int i = 2; i <= n; i++) {  // Time complexity is O(n)
        if(prime(i)) {             // Time complexity is O(Root(n))
            cout<<i<<" ";
        }
    }
}
*/

// Second Method  "SIEVE ERATOSTHENES" Algorithm
/*
void primeNumberUntilN(int n) {        // Time complexity is O(n log log(n))

    vector<bool> isPrime (n+1, true);

    for(int i=2;i*i<=n;i++) {
        if(isPrime[i]) {
            for(int j=i*2;j<=n;j=j+i) {   // for(int j=i*i;j<=n;j=j+i) more optimize solution
                    isPrime[j] = false;
            }
        }
    }
    for(int i=2;i<=n;i++) {
        if(isPrime[i]) { cout<<i<<" "; }
    }
}
*/
// Third Method shorter implementation

void primeNumberUntilN(int n) {  // Time complexity is O(n log log(n))

    vector<bool> isPrime(n+1, true);

    for(int i=2; i<=n; i++) {
        if(isPrime[i]) {
            cout<<i<<" ";
            for(int j=i*i; j<=n; j=j+i) {
                isPrime[j] = false;
            }
        }
    }
}

main()
{
    primeNumberUntilN(134);
    return 0;
}
