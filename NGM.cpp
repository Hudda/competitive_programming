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
    int n;
    cin >> n;
    int k = n % 10;
    if (k == 0)
    	cout << 2 << endl;
    else 
    	cout << 1 << endl << k << endl;
    return 0;
}