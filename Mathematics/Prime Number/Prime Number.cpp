#include<bits/stdc++.h>
using namespace std;
// First Method
/*
bool Prime(int a)
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
*/
// Second Method Optimized Solution
/*
bool Prime(int n) // Time Complexity O(root(n))
{
    for(int i=2;i*i<=n;i++) // i*i=a mean i= root(n) then complexity O(root(n))
    {
        if(n%i==0)
            return false;
    }
    return true;
}
*/
// Third Method More Optimized and efficient Solution

bool Prime(int n)
{
    if(n==1)
    {
        return false;
    }
    if(n==1 || n==3)
    {
        return true;
    }
    if(n%2==0 || n%3==0)
    {
        return false;
    }

    for(int i=5;i*i<=n;i=i+6)
    {
        if(n%i==0 || n%(i+2)==0)
        {
            return false;
        }
    }
    return true;
}

int primeNumber(int n) {
    if (n <= 1) { return false; }
    if (n == 2 || n == 3) { return true; }
    if (n%2 == 0 || n%3 == 0) { return false; }

    for (int i = 5; i*i <= n; i = i+6)
        if (n%i == 0 || n%(i+2) == 0)
            return false;

    return true;
}

main()
{
    cout<<(primeNumber(41)? "Number is Prime" : "Number is notPrime");
    return 0;
}
