#include <bits/stdc++.h>
using namespace std;
// First Naive Method
/*
int power(int n, int p) {   // Time Complexity is O(n)

    int result = n;
    for(int i=1;i<p;i++) {
        result=result*n;
    }
    return result;
}
*/
// Second Method Efficient method
/*
int power(int n, int p) {  // Time Complexity is O(log n) and Auxillary space is O(log n)

    if(p==1) { return n; }
    if(p%2==0) { return (pow(n, p/2) * pow(n, p/2)); }
    else { return (pow(n, p-1) * n); }
}

int recPower (int x, int n) {  // time complexity is O(log(n)) and also space complexity is O(n)
    if (n == 1)
        return x;
    int temp = recPower(x, n/2);
    temp *= temp;
    if (n&1)
        return temp*x;
    else
        return temp;
}

*/
// Third Method ( Binary Exponentiation )

int power(int n, int p) {     // Time Complexity is O(log n)

    int result = 1;
    while(p>0) {
        if(p%2 != 0) { result = result * n; }  // if(p & 1)
        n = n * n;
        p = p / 2;   // p = p>>1;
    }
    return result;
}

int efficientPower (int x, int p) { // Time Complexity is O(log n)
    int result = 1;

    while (p) {
        if (p&1)
            result *= x;
        x *= x;
        p = p >> 1;
    }
    return result;
}

main() {

    cout<<efficientPower(3,7
                         );
    return 0;
}
