#include<Bits/stdc++.h>

using namespace std;
//First Method
/*
int Factorial(int n)
{
    int res = 1;
    while(n!=1)    // Time complexity O(n) , constant extra space, Auxiliary space O(1)
    {
        res = res*n;
        n = n-1;
    }
    return res;
}

//Second Method
/*
int Factorial(int n)
{
    if(n==1)
        return 1;
    return n*Factorial(n-1);  Time complexity O(n) , Auxiliary space O(n)
}
*/
main()
{
    cout<<Factorial(10);
}
