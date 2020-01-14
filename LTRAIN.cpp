#include <iostream>
#include <algorithm>
using namespace std;

void ntrain(long long arr[]) {
	long long orig[5] = {1, 2, 3, 6, 10};
	long long nt[5];
	for (int i = 0; i < 5; i++) {
		nt[i] = arr[i] / orig[i];
	}
	long long *n = min_element(nt, nt + 5);
	cout << *n << endl;
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
    for (long long z = 0; z < t; z++) {
    	long long arr[5];
    	for (int i = 0; i < 5; i++) {
    		cin >> arr[i];
    	}
    	ntrain(arr);
    }
    return 0;
}