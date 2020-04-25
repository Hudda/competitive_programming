#include <iostream>
using namespace std;

int gcd(int m, int n) {
    if (n == 0)
        return m;
    return gcd(n, m % n);
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
    for (int i = 0; i < t; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        if (z > x && z > y)
            cout << "NO";
        else {
            if (x < y) {
                if (x < y) {
                    if ((y + (z % x)) % x == 0)
                        cout << "YES";
                    else
                        cout << "NO";
                }
            }
            else {
                if ((x + (z % y)) % y == 0)
                    cout << "YES";
                else
                    cout << "NO";
            }
        }
        cout << endl;
    }
    return 0;
}