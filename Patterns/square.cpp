#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); // create input.txt file in current dir and put all inputs inside input.txt file 
    freopen("output.txt", "w", stdout); // see all output inside output.txt
    #endif

	int size;
    cin>>size;
    string strip(size, '*');

    for (int i = 0; i < size; i++) {
        cout<<strip<<endl;
    }
	
	return 0;
}