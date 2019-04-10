#include <bits/stdc++.h>
using namespace std;

long long coins(long long n, long long c[]) {
	if (n < 10) {
		c[n] = n;
	}
	else if (n < 1000000) {
		if (c[n])
			return c[n];
		else
			c[n] = max(n, coins(n/2, c) + coins(n/3, c) + coins(n/4, c));
	}
	else {
		return max(n, coins(n/2, c) + coins(n/3, c) + coins(n/4, c));
	}
	return c[n];
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
    long long n, c[1000000];
    while (cin >> n) {
    	cout << coins(n, c) << endl;
    }
    return 0;
}