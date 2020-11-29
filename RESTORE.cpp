#include <iostream>
#include <algorithm>
using namespace std;

void restore(int n, int arr[]) {
    int out[n+1] = {0};
    for (int i = 1; i <=n; i++) {
        out[i] += 1;
        out[arr[i]] += 1;
    }
    for (int i = 1; i <= n; i++) {
        cout << out[i] << " ";
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
        int n;
        cin >> n;
        int arr[n+1];
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        restore(n, arr);
        cout << endl;
    }
    return 0;
}