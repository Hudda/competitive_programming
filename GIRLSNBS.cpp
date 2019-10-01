#include <iostream>
#include <math.h>
using namespace std;

int reg(int n, int m) {
	int total = m + n;
	if (n < m) {
		n += 1;
		return ceil(total / n);
	}
	else {
		m += 1;
		return ceil(total / m);
	}
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
    int n, m;
    while (cin >> n >> m) {
    	if (n == -1) 
    		break;
    	else {
    		cout << reg(n, m) << endl;
    	}
    }
    return 0;
}