#include <iostream>
#include <math.h>
using namespace std;

int days(int d1, int v1, int d2, int v2, int &p) {
    while (d1 < d2 && p > 0) {
        d1 += 1;
        p -= v1;
    }
    return d1 - 1;
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
    int d1, v1, d2, v2, p;
    cin >> d1 >> v1 >> d2 >> v2 >> p;
    int ndays;
    if (d1 < d2) {
        ndays = days(d1, v1, d2, v2, p);
    }
    else if (d2 < d1) {
        ndays = days(d2, v2, d1, v1, p);
    } else if (d1 == d2) {
        ndays = d1 - 1;
    }
    while (p > 0) {
        ndays += 1;
        p -= v1 + v2;
    }
    cout << ndays;
    return 0;
}