#include<bits/stdc++.h>
using namespace std;

void powerSets (string str) {
    int strLength = str.length();
    int powerSet = pow(2,strLength);

    cout<<" "; // print for empty set
    for (int counter = 0; counter < powerSet; counter++) {
        for (int j = 0; j < strLength; j++) {
            if (counter & (1 << j))
                cout<<str[j];
        }
        cout<<endl;
    }
}




int main(){

    string str = "abc";
    int powSize = pow(2,str.length());
    powerSets(str);

    return 0;

}
