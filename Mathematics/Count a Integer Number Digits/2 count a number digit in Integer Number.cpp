#include <bits/stdc++.h>
using namespace std;

int countdigit1(long long int n)
{
    if (n/10==0)
        return 1;

    return 1 + countdigit1(n/10);  // Time complexity is O(numberOfDigit in a Integer) // O((log10) n)
}


int countdigit (int n) {
    if (!n)
        return 0;
    return 1+ countdigit(n/10);
}

main()
{
    long long int n =1789383217;

    cout<<"Number of Digit : " <<countdigit(n);

    return 0;
}
