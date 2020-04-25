#include <iostream>
using namespace std;



void moves(int n) {
	cout << 1 << endl;
}

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
    	int n, j;
    	cin >> n;
    	int a[n][n];
    	for (int i = 0; i < n; i++) {
    		for (int j = 0; j < n; j++) {
    			cin >> a[i][j];
    		}
    	}
    	moves(n);
    }
    return 0;
}