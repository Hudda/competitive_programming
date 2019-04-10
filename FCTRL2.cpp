#include <bits/stdc++.h>
using namespace std;

int multiply(int x, int res[], int res_size);

void fact(int n) {
	int res[500];
	res[0] = 1;
	int res_size = 1;
	for (int x = 2; x <= n; x++)
		res_size = multiply(x, res, res_size);
	for (int i = res_size-1; i >= 0; i--) {
		cout << res[i];
	}
}

int multiply(int x, int res[], int res_size) {
	int carry = 0;
	for (int i = 0; i < res_size; i++) {
		int prod = res[i] * x + carry;
		res[i] = prod % 10;
		carry = prod / 10;
	}
	while (carry) {
		res[res_size] = carry % 10;
		carry /= 10;
		res_size++;
	}
	return res_size;
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
    	fact(n);
    	cout << endl;
    }
    return 0;
}