#include<Bits/stdc++.h>
using namespace std;

// First Method Basic of Euclidean Algorithm
/*
int GCD(int a,int b)
{
    while(a!=b)   // Time Complexity O(n), where n=max(a,b) a=1 and b=5 then loop working 5 time
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    return a;
}
*/
// Second Method Optimized Solution of Euclidean Algorithm
/*
int GCD(int a, int b)
{
    while(a==0 || b==0)
    {
        if(a>b)
        {
            a=a%b;
        }
        else
        {
            b=b%a;
        }
    }
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
*/
int GCD(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return GCD(b,a%b);  // Time complexity O(log(min(a, b))
    }
}

int GCDe(int x, int y) {
    while (x != y) {
        if (x > y)
            x = x-y;
        else
            y = y-x;
    }
    return x;
}

int GCDend (int a, int b) {
    if (b == 0)
        return a;
    return GCDend(b, a%b);
}


main()
{
    cout<<GCDend(2,3);
    return 0;
}
