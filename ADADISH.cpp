#include <iostream>
#include <algorithm>
using namespace std;

int time_required(int n, int arr[]) {
    sort(arr, arr + n);
    int i = n - 1;
    if (n == 1) {
        return arr[0];
    }
    int g1 = arr[i--];
    int g2 = arr[i--];
    while (i >= 0) {
        if (g1 < g2)
            g1 += arr[i--];
        else
            g2 += arr[i--];
    }
    return max(g1, g2);
    
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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << time_required(n, arr) << endl;
    }
    return 0;
}