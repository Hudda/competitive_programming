#include <iostream>
#include <math.h>
using namespace std;

long long even_pair_sum(long long a, long long b) {
    long long total = 0;
    if (a % 2 == 0) {
        if (b % 2 == 0) {
            total += (a / 2) * (b / 2);
            return total * 2;
        }
        else {
            total += (a / 2) * (b / 2);
            total += (a / 2) * (b - (b / 2));
            return total;
        }
    } else {
        if (b % 2 == 0) {
            total += (a - (a / 2)) * (b / 2);
            total += (a / 2) * (b / 2);
            return total;
        }
        else {
            total += (a / 2) * (b / 2);
            total += (a - (a / 2)) * (b - (b / 2));
            return total;
        }
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
    for (int i = 0; i < t; i++) {
        long long a, b;
        cin >> a >> b;
        cout << even_pair_sum(a, b) << endl;
    }
    return 0;
}