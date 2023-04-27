#include<bits/stdc++.h>

using namespace std;


void Checker(int n, int k) {

    if((n & k) != 0) { printf("Yes"); }
    else { printf("No");}
}


main() {

    Checker(13,3);
    return 0;
}
