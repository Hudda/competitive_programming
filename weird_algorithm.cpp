#include <bits/stdc++.h>
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
    long long n;
    cin >> n;
    while (n != 1) {
    	cout << n << " ";
    	if (n % 2 == 0) {
    		n = n / 2;
    	} else {
    		n = n * 3 + 1;
    	}
    }
    cout << n;
    return 0;
}