#include <bits/stdc++.h>
using namespace std;

int countdigit(long long int n)
{
    int count = 0;

    while(n)   // Time complexity is O(numberOfDigit in a Integer) // O((log10) n)
    {
        n=n/10;

        ++count;
    }

    return count;
}

main()
{
    long long int n = 7307748057;

    cout<<"Number of Digit : "<<countdigit(n);

    return 0;
}
