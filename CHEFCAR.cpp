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
        long long n, v;
        cin >> n >> v;
        long long min = 0, max = 0;
        max = ((n-1) * (n)) / 2;
        if (v >= n) {
            min = n - 1;
        } else {
            min = (((n-v) * (n-v+1)) / 2)-1 + v;
        }
        cout << max << " " << min << endl;
    }
    return 0;
}