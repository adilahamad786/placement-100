#include<bits/stdc++.h>
using namespace std;
// First Naive Solution
/*
void getAllDivisors(int n) {  // Time complexity is O(n) and auxillary space O(n)

    for(int i=1;i<=n;i++) {

        if(n%i==0) {
            cout<<i<<" ";
        }
    }
}
*/
// Second Method Optimized solution
/*
void getAllDivisors(int n) {    // Time complexity is O(Root(n))

    for(int i=1;i*i<=n;i++) {

        if(n % i == 0) {
            cout<<i<<" ";

            if(i != n/i) {
                cout<<(n/i)<<" ";
            }
        }
    }
}
*/
// Third Method Fully Efficient

void getAllDivisors(int n) {    // Total Time complexity is O(Root(n))

    int i;
    for(i = 1; i * i < n; i++) {  // Time complexity is O(Root(n))
        if(n % i == 0) {
            cout<<i<<" ";
        }
    }
    for(; i >= 1; i--) {     // Time complexity is O(Root(n))
        if(n % i == 0) {
            cout<<(n/i)<<" ";
        }
    }
}

void printAllDivisors (int n) {
    int i = 1;
    for (; i*i < n; i++)
        if (n%i == 0)
            cout<<i<<endl;
    for (; 1 <= i; i--)
        if (n%i == 0)
            cout<<n/i<<endl;
}
main() {
    printAllDivisors(100);
    return 0;
}
