#include<bits/stdc++.h>
using namespace std;

// Note :-  x^0 == x, x^x == 0, x^y == y^x, x^(y^z) == (x^y)^z

void twoOdd (int arr[], int n) {
    int xorOfTwo = 0, res1 = 0, res2 = 0;
    for (int i = 0; i<n; i++) { xorOfTwo ^= arr[i]; }
    int sn = xorOfTwo & (~(xorOfTwo-1));

    for (int i = 0; i<n; i++) {
        if (arr[i] & sn)
            res1 ^= arr[i];
        else
            res2 ^= arr[i];
    }
    cout<<res1<<" "<<res2;
}

int main(){

    int array[] = {3,4,3,4,8,8,4,4,32,7,7};
    int sizeOfArray = sizeof(array) / sizeof(array[0]);
    int xorOfTwoOdd = 0, onePart = 0, secondPart = 0;
    twoOdd(array, sizeOfArray);
/*
    for(int i = 0; i < sizeOfArray; i++) {
        xorOfTwoOdd = xorOfTwoOdd ^ array[i];
    }

    int sn = xorOfTwoOdd & ( ~ (xorOfTwoOdd - 1));

    for(int i = 0; i < sizeOfArray; i++) {

        if( (array[i] & sn) != 0) {
            onePart = onePart ^ array[i];
        }
        else {
            secondPart = secondPart ^ array[i];
        }
    }

    cout<<onePart<<" "<<secondPart;
*/
    return 0;
}
