#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
	int m[n], f[n], t;
	for (int i = 0; i < n; i++) {
		cin >> t;
		m[i] = t;
	}
	for (int i = 0; i < n; i++) {
		cin >> t;
		f[i] = t;
	}
	sort(m, m + n);
	sort(f, f + n);
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += m[i] * f[i];
	return sum;
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
    	int n;
    	cin >> n;
    	cout << sum(n) << endl;
    }
    return 0;
}