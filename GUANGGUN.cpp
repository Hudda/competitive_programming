#include <iostream>
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
    unsigned long long n;
    while (cin >> n) {
        unsigned long long result = 0;
        result += 81 * (n / 9);
        unsigned long long temp = n % 9;
        result += temp * temp;
        cout << result << endl;
    }
    return 0;
}