#include <bits/stdc++.h>
using namespace std;

int rev(int n) {
	int rev = 0;
	while (n != 0) {
		rev = rev * 10 + (n % 10);
		n /= 10;
	}
	return rev;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;
        int sum = rev(rev(a) + rev(b));
        cout << sum << endl;
	}
	return 0;
}
