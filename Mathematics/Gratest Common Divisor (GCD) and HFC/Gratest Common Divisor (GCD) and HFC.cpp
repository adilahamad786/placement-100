#include<Bits/stdc++.h>
using namespace std;

int GCD(int a,int b)
{
    int small =min(a,b);

    while(small>0)   // Time complexity O(small)
    {
        if(a%small == 0 && b%small == 0)
        {
            break;
        }
        small--;
    }
    return small;
}

main()
{
    cout<<GCD(12,18);
    return 0;
}

// Time Complexity O(min(a,b))
