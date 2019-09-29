#include <iostream>
#include <algorithm>
#include <vector>
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
    for (int i = 0; i < t; i++) {
    	unsigned long n, sum = 0, k;
    	vector <unsigned long long> v;
    	vector <unsigned long long>::iterator it;
    	cin >> n;
    	for (unsigned long long j = 0; j < n; j++) {
    		cin >> k;
    		v.push_back(k);
    		sum += k;
    	}
    	if (sum % n == 0) {
    		unsigned long long f = sum / n;
    		it = find(v.begin(), v.end(), f);
    		if (it != v.end()) {
    			cout << it - v.begin() + 1 << endl;
    		}
    		else {
    			cout << "Impossible" << endl;
    		}
    	}
    	else {
    		cout << "Impossible" << endl;
    	}
    }
    return 0;
}