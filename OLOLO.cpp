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
    int t;
    cin >> t;
    int result = 0;
    for (int i = 0; i < t; i++) {
    	int n;
    	cin >> n;
    	result ^= n;
    }
    cout << result << endl;
    return 0;
}