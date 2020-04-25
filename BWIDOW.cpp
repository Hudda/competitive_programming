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
    for (int z = 0; z < t; z++) {
    	int n; 
    	cin >> n;
    	int inr[n], outr[n];
    	for (int i = 0; i < n; i++) {
    		int a, b;
    		cin >> a >> b;
    		inr[i] = a;
    		outr[i] = b;
    	}
    	int found = 0;
    	for (int i = 0; i < n; i++) {
    		for (int j = i + 1; j < n; j++) {
    			if (inr[i] > outr[j]) {
    				found = 1;
    				cout << i + 1 << endl;
    			}
    		}
    	}
    	if (!found)
    		cout << -1 << endl;
    }
    return 0;
}