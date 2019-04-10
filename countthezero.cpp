#include <bits/stdc++.h>
using namespace std;

int count(int n) {
	int sum = 0, k;
	for (int i = 0; i < n; i++) {
		cin >> k;
		sum += k;
	}
	return n - sum;
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
    cin >>t;
    for (int z = 0; z < t; z++) {
    	int n;
    	cin >> n;
    	cout << count(n) << endl;
    }
    return 0;
}