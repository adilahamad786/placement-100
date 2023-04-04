#include<Bits/stdc++.h>

using namespace std;

//First Method
/*
int fun(int n)
{
    int count = 0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    return count;
}
*/

//Second Method
/*
int fun(int n)
{
    if(n==0)
        return 0;
    return 1+fun(n/10);
}
*/

//Third Method
/*
int fun(int n)
{
    return floor(log10(n)+1);
}
*/
main()
{
    cout<<fun(524534);
}
