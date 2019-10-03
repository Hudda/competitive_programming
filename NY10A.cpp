#include <iostream>
#include <string.h>
using namespace std;

void game(int k, string str) {
	int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0;
	for (int i = 0; i < 38; i++) {
		string s = str.substr(i, 3);
		if (!s.compare("TTT"))
			c1++;
		if (!s.compare("TTH"))
			c2++;
		if (!s.compare("THT"))
			c3++;
		if (!s.compare("THH"))
			c4++;
		if (!s.compare("HTT"))
			c5++;
		if (!s.compare("HTH"))
			c6++;
		if (!s.compare("HHT"))
			c7++;
		if (!s.compare("HHH"))
			c8++;
	}
	cout << k << " " << c1 << " " << c2 << " " << c3 << " " << c4 << " " << c5 << " " << c6 << " " << c7 << " " << c8 << endl;
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
    int n, k;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
    	cin >> k >> s;
    	game(k, s);
    }
    return 0;
}