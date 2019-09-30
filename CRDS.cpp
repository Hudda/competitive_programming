#include <iostream>
using namespace std;

long long cards(long long n) {
	return (3 * n * n + n) / 2; 
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
    long long t;
    cin >> t;
    for (long long i = 0; i < t; i++) {
    	long long n;
    	cin >> n;
    	cout << cards(n) % 1000007 << endl;
    }
    return 0;
}