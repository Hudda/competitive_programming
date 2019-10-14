#include <iostream>
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
    	int n;
    	cin >> n;
    	int k, sum = 0;
    	for (int i = 0; i < n; i++) {
    		cin >> k;
    		sum += k;
    	}
    	int d = sum % n;
    	if (d == 0) {
    		cout << n;
    	}
    	else
    		cout << n - 1;
    	cout << endl;
    }
    return 0;
}