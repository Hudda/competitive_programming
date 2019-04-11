#include <bits/stdc++.h>
using namespace std;

int digit(int a, long long b) {
	int p, mod;
	mod = b % 4;
	if (mod == 0 && b != 0)
		p = pow(a, 4);
	else 
		p = pow(a, mod);
	return p % 10;
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
    int a;
    long long b;
    for (int z = 0; z < t; z++) {
    	cin >> a >> b;
    	cout << digit(a, b) << endl;
    }
    return 0;
}