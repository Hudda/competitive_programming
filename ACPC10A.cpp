#include <bits/stdc++.h>
using namespace std;

int main(void) {
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    while (true) {
    	cin >> a >> b >> c;
    	if (a == 0 && b == 0 && c == 0) {
    		break;
    	}
    	else {
    		int d = b - a;
    		int r = b / a;
    		if (b + d == c) {
    			cout << "AP " << c + d;
    		}
    		else
    			cout << "GP " << c * r;
    		cout << endl;
    	}
    }
    return 0;
}