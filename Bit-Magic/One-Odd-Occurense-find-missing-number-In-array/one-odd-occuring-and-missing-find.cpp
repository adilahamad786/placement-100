#include<bits/stdc++.h>
using namespace std;

// Note :-  x^0 == x, x^x == 0, x^y == y^x, x^(y^z) == (x^y)^z

int main(){

    // find missing number
    int arr[] = {1,2,4,5,6};
    int sizeOfArray = sizeof(arr)/sizeof(arr[0]);
    int result = 0;
    int a = arr[0], b = 1;

    for(int i = 1; i <= sizeOfArray; i++) {
        a = a ^ arr[i];
        b = b ^ (i+1);
    }

    cout<< (a^b);
    return 0;

}



/*
    // odd Occuring number
    int arr[] = {4,3,4,4,4,5,5,3,3,3,5};
    int sizeOfArray = sizeof(arr)/sizeof(arr[0]);
    int result = 0;

    for(int i = 0; i < sizeOfArray; i++){
        result = result ^ arr[i];
    }
    cout<<result;

    return 0;
    */
