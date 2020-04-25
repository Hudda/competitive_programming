#include <iostream>
#include <algorithm>
using namespace std;

void nwin(int n, long long a[], long long b[]) {
	sort(a, a + n);
	sort(b, b + n, greater<long long>());
	long long count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i] >= b[j]) {
				count++;
				b[j] = 0;
				break;
			}
		}
	}
	cout << count << "\n";
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
    for (int z = 0; z < t; z++) {
    	int n;
    	cin >> n;
    	long long a[n], b[n];
    	for (int i = 0; i < n; i++) 
    		cin >> a[i];
    	for (int j = 0; j < n; j++)
    		cin >> b[j];
    	nwin(n, a, b);
	}
    return 0;
}