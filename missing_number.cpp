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
    int n;
    cin >> n;
    vector<bool> arr(n);
    arr[0] = true;
    for (int i = 0; i < n - 1; i++) {
        int k;
        cin >> k;
        arr[k] = true;
    }
    for (int i = 1; i <= n; i++) {
        if (!arr[i]) {
            cout << i;
            break;
        }
    }
    return 0;
}