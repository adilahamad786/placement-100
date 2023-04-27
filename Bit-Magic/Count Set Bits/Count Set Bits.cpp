#include<bits/stdc++.h>
using namespace std;
// First Method Naive Solution
/*
int countSetBits(int n) {  // Time Complexity O(bits of number)
    int result = 0;
    while(n>0) {
        if(n & 1) {             // if(n%2 != 0) { result ++; }
            result ++;      // result = result + (n & 1);
        }
        n=n/2;          // n >> 1;
    }
    return result;
}
*/
// Second Method "Brian Kerningam's Algorithm"
/*
int countSetBits(int n) {  // Time complexity theta(Count Set Bits)  matalab jitne 1 aaye hai utni hi bar chalega

    int result = 0;
    while(n > 0) {
        n = (n & (n - 1));
        result ++;
    }
    return result;
}
*/
main() {

    cout<<countSetBits(5);
    return 0;
}
