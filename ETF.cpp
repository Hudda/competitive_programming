#include <iostream>
using namespace std;

void coprime(int n) {
	int result = n;
	for (int p = 2; p*p <= n; p++) {
		if (n % p == 0) {
			while (n % p == 0)
				n /= p;
			result -= result / p;
		}
	}
	if (n > 1) {
		result -= result / n;
	}
	cout << result << endl;
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
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
    	cin >> n;
    	coprime(n);
    }
    return 0;
}