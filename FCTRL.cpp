#include <bits/stdc++.h>
using namespace std;

int zeroes(long long n) {
    long long d = 5;
    int count = 0;
    while (n >= d) {
        count += n / d;
        d *= 5;
    }
    return count;
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
    for (int z = 0; z < t; z ++) {
        long long n;
        cin >> n;
        cout << zeroes(n) << endl;
    }
    return 0;
}
