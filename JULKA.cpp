#include <iostream>
using namespace std;

void apples(string a, string b) {
	int l1 = a.length();
	int l2 = b.length();
	int k[200], n[200], j = 0;
	for (int i = l1-1; i >= 0; i--) {
		k[j++] = a[i];
	}
	j = 0;
	for (int i = l2-1; i >=0; i--) {
		n[j++] = a[i];
	}
	for (int i = 0; i < l1; i++) {
		cout << k[i];
	}
	cout << endl;
	for (int i = 0; i < l2; i++) {
		cout << n[i];
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
    string a, b;
    for (int i = 0; i < 1; i++) {
    	cin >> a >> b;
    	apples(a, b);
    }
    return 0;
}