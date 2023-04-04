#include<bits/stdc++.h>
#include <iostream>
using namespace std;
// First Method
/*
bool isPrime(int n)  // assume time complexity is O(n) but is not true
{
    if(n==1) // 1 not prime nor complex
    {
        return false;
    }
    if(n==3 || n==2)
    {
        return true;
    }
    if(n%2==0 || n%3==0)
    {
        return false;
    }
    for(int i=5;i*i<n;i+6)
    {
        if(n%i==0 || n%(i+2)==0)
        {
            return false;
        }
    }
    return true;
}


void primeFactor(int n)  //total Time complexity is O(n^2 log(n)) // O(n*n log(n))
{
    for(int i=1;i<n;i++) // for(int i=1;i*i<=n;i++) // assume time complexity O(n)
    {
        if(isPrime(i)) // assume time complexity O(n)
        {
            int temp =n;// int x=i;
            while(temp%i==0)  // assume n log(n)
            {
                cout<<i<<" ";
                temp=temp/i;//x=x*i;   // run log(n) time
            }
        }
    }
}

// Second Method efficient way

void primeFactor(int n)
{
    if(n<=1) { return; }

    for(int i=2;i*i<=n;i++) {

        while(n%i==0) {
            cout<<i<<" ";
            n=n/i;
        }
    }
    if(n>1)
    {
        cout<<n<<" ";
    }
}

*/
// More Efficient Method

void primeFactor(int n) {      // Total Time complexity is O(Root(n))

    if(n<=1) { return; }

    while(n%2==0) {
        cout<<2<<" ";
        n=n/2;
    }

    while(n%3==0) {
        cout<<3<<" ";
        n=n/3;
    }
    for(int i=5;i*i<=n;i++) {     // Time complexity is O(Root(n))
        while(n%i==0) {           // negligible
            cout<<i<<" ";
            n=n/i;
        }
        while(n%(i+2)==0) {       // negligible
            cout<<(i+2)<<" ";
            n=n/(i+2);
        }
    }
    if(n>1) { cout<<n; }
}


void primeFactor1 (int n) {
    if (n < 2) { return; }
    if (n >= 2) { cout<<2<<endl; }
    if (n >= 3) { cout<<3<<endl; }

    int count = 1;
    int currentPrime = 5;

    while (currentPrime <= n) {
        currentPrime = (6*count)-1;
        if (currentPrime <= n && currentPrime%5 != 0)
            cout<<currentPrime<<endl;
        int nextPrime = currentPrime+2;
        if (nextPrime <= n && nextPrime%5 != 0)
            cout<<(nextPrime)<<endl;
        count ++;
    }
}

int main() {
	// your code goes here
	primeFactor(50);
	return 0;
}
