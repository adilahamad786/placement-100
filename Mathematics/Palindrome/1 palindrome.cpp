#include <bits/stdc++.h>
using namespace std;

bool Palindrome(int n)
{
    int rev =0;
    int k =n;
    while(k!=0)
    {
        rev = rev*10+k%10;
        k=k/10;
    }
    return (rev==n);
}

// First Method
/*
int Palindrome(int n)
{
    int rev =0;
    int k =n;
    while(k!=0)
    {
        rev = rev*10+k%10;
        k=k/10;
    }

    if(rev==n)
    {
        cout<<"Number is Palindrome";
    }
    else
    {
        cout<<"Number is not Palindrome";
    }
    return 0;
}
*/

// Second Method

/*
int Palindrome(int n)
{
    int k=n;

    string str = to_string(n);

    int rev =0;

    for(int i=0;i<str.length();i++)
    {
        rev =rev*10+k%10;
        k=k/10;
    }
    if(n==rev)
        cout<<"Number is Palindrome !";
    else
    {
        cout<<"Number is Not Palindrome !";
    }

    return 0;
}
*/

main()
{
    cout<<Palindrome(12321);

    return 0;
}
