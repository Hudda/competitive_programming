#include <iostream>
#include <math.h>
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
    for (int j = 0; j < t; j++) {
        int n, k;
        cin >> n >> k;
        int sum = 0, counter = 0;
        int arr[n+1];
        if (n % 2 == 0) {
            for (int i = 1; i <= n; i++) {
                if (i % 2 == 0) {
                    counter++;
                    arr[i] = i;
                }
                else
                    arr[i] = -i;
            }
        } else {
            for (int i = 1; i <= n; i++) {
                if (i % 2 == 0) 
                    arr[i] = -i;
                else {
                    counter++;
                    arr[i] = i;
                }
            }
        }
        int diff = counter - k;
        if (diff > 0) {
            int i = n;
            while (counter != k && i > 0) {
                if (arr[i] > 0) {
                    arr[i] = -i;
                    counter--;
                }
                i--;
            }
        }
        if (diff < 0) {
            int i = n;
            while (counter != k && i > 0) {
                if (arr[i] < 0) {
                    arr[i] = i;
                    counter++;
                }
                i--;
            }
        }
        for (int i = 1; i <= n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}