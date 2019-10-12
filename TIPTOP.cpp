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
    	unsigned long long n;
    	cin >> n;
    	unsigned long long x = sqrt(n);
    	cout << "Case " << i + 1 << ": ";
    	if (x * x == n)
    		cout << "Yes";
    	else
    		cout << "No";
    	cout << endl;
    }
    return 0;
}