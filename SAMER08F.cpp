#include <bits/stdc++.h>
using namespace std;

int squares(int n) {
	int squares = 0;
	for (int i = 1; i <=n; i++) {
		squares += i * i;
	}
	return squares;
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
    while (true) {
    	cin >> n;
    	if (n == 0) {
    		break;
    	}
    	else 
    		cout << squares(n) << endl;
    }
    return 0;
}