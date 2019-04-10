#include <bits/stdc++.h>
using namespace std;

int num(int a, int b) {
	if (a == 0 and b == 0) {
		cout << 0;
	}
	else if (a < b || (a - b != 0 && a - b != 2)){
		cout << "No Number";
	}
	else if (a % 2 == 0) {
		cout << a + b;
	}
	else if (a % 2 != 0) {
		cout << a + b - 1;
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
    int t;
    cin >> t;
    for (int z = 0; z < t; z++) {
    	int a, b;
    	cin >> a >> b;
    	num(a, b);
    	cout << endl;
    }
    return 0;
}