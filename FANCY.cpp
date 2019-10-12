#include <iostream>
#include <math.h>
using namespace std;

int main(void) {
	#ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
	    string str;
	    cin >> str;
	    int count = 0;
	    int n = 1;
	    for (int i = 1; i < str.length(); i++) {
	    	if (str[i] == str[i-1]) {
	    		n *= 2;
	    	}
	    }
	    cout << n << endl;
	}
    return 0;
}