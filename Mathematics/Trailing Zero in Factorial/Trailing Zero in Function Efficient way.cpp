#include<Bits/stdc++.h>
using namespace std;

int TrailingZero(int n) // complexity is O(log n)
{
    int result = 0;
    for (int i = 5; i <= n; i = i*5) { // i=5,i=i*5 then 5^k where k=1,2,3,... (k is iteration) and i<=n mean 5^k <= n so after log k=((log5) n)
        result = result + n/i;
    }
    return result;
}

main()
{
    cout<<TrailingZero(256);
    return 0;
}
