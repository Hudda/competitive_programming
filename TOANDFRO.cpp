#include <bits/stdc++.h>
using namespace std;

void toandfro(int n, string s) {
	int len = s.size();
	int j = len / n;
	int z = 0;
	for (int i = 0; i < n; i++) {
		for (int k = 1; k <= j; k++) {
			if (k % 2 == 0) {
				cout << s[n*k-1-z];
			}
			else {
				cout << s[n*k-n+z];
			}
		}
		z++;
	}
	cout << endl;
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
    int n;
    string str;
    while (true) {
    	cin >> n;
    	if (n == 0)
    		break;
    	cin >> str;
    	toandfro(n, str);
    }
    return 0;
}