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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unsigned long long k = 2;
        cout << "1 1 ";
        for (int i = 1; i < n; i++) {
            cout << pow(k, i) << " ";
        }
        cout << endl;
    }
    return 0;
}