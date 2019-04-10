#include <bits/stdc++.h>
using namespace std;

int candy(int n) {
	int arr[n];
	int count = 0, t;
	for (int i = 0; i < n; i++) {
		cin >> t;
		arr[i] = t;
		count += t;
	}
	if (count % n == 0) {
		int c = count / n;
		int n_count = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] < c) {
				n_count += c - arr[i];
			}
		}
		return n_count;
	}
	else 
		return -1;
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
    int n;
    while (true) {
    	cin >> n;
    	if (n == -1) {
    		break;
    	}
    	else
    		cout << candy(n) << endl;
    }
    return 0;
}