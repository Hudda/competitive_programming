#include <bits/stdc++.h>
using namespace std;

bool prime(int n) {
    if (n == 1)
        return false;
    if (n == 2) {
        return true;
    }
    for (int i = 2; i < sqrt(n) + 1; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	for (int z = 0; z < t; z++) {
		int a, b;
		cin >> a >> b;
		for (int i = a; i <= b; i++) {
			if (prime(i))
                cout << i << endl;
		}
		cout << endl;
	}
	return 0;
}
