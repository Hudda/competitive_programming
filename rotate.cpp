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
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int arr[n][n];
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                cin >> arr[j][k];
            }
        }
        for (int j = n - 1; j >= 0; j--) {
            for (int k = 0; k < n; k++) {
                cout << arr[k][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}