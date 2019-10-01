#include <iostream>
using namespace std;

bool cmp(int arr[], int inv[], int n) {
	for (int i = 0; i < n; i++) {
		if (arr[i] != inv[i])
			return false;
	}
	return true;
}

void perm(int arr[], int n) {
	int inv[n];
	for (int i = 0; i < n; i++) {
		inv[arr[i]-1] = i + 1;
	}
	if (cmp(arr, inv, n))
		cout << "ambiguous" << endl;
	else 
		cout << "not ambiguous" << endl;
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
    while (cin >> n) {
    	if (n == 0) {
    		break;
    	}
    	else {
    		int arr[n];
    		for (int i = 0; i < n; i++)
    			cin >> arr[i];
    		perm(arr, n);
    	}
    }
    return 0;
}