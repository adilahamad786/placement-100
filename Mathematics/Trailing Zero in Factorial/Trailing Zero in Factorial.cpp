#include<Bits/stdc++.h>
using namespace std;

int Trailing(int n)  // complete Time complexity O(n) , "ISSU (Problem) of OVERFLOW"
{
    int res =1;
    while(n)  // Time complexity O(n)
    {
        res=res*n;
        n--;
    }

    int flag =0;

    while(!(res%10)) // or while((res%10)==0)  // Time complexity O(number of Zero)
    {
        res=res/10;
        flag++;
    }
    return flag;
}

main()
{
    cout<<Trailing(5);
    return 0;
}
