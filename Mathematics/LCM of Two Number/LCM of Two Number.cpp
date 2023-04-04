#include <bits/stdc++.h>
using namespace std;
// First Method Simple Method
/*
int LCM(int a, int b)
{
    int result = max(a,b);
    while(!(result%a == result%b)) // for(int result=max(a,b);result<=(a*b);result++)  // Time complexity O(result-max(a,b)) OR O((a*b)-max(a,b))
    {
        result ++;
    }
    return result;
}
*/
// Second Method Optimized Solution implement formula ( a*b == HCF/GCD(a,b) * LCM(a,b))

int HCF(int a, int b)
{
   if(b==0)
   {
       return a;
   }
   else
   {
       return HCF(b,a%b);
   }
}

int LCM(int a, int b)
{
    return (a*b)/HCF(a,b); // Time Complexity O(log(min(a,b)))
}

int LCMend (int a, int b) {
    int maxNum = max(a, b);
    int result = maxNum;
    while (result%a != result%b) {
        result = result + maxNum;
    }
    return result;
}
main()
{
    cout<<LCMend(2,3);
    return 0;
}
