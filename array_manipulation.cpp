#include <iostream>
#include <vector>
#include <climits>
#include <limits>
#include <string>
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
    int n, m;
    cin >> n >> m;
    long maxx = 0;
    vector<long> sum(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b, k;
        cin >> a >> b >> k;
        sum[a] += k;
        if (b + 1 <= n) {
            sum[b + 1] -= k;
        }
        long x = 0;
        for (int i = 1; i < n + 1; i++) {
            x += sum[i];
            if (x > maxx) {
                maxx = x;
            }
        }
    }
    cout << maxx << endl;
    return 0;
}