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
    int p = 2;
    for (int z = 0; z < t; z++) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int i = 0, j = 1;
        int new_arr[n] = {0};
        for (int i = 0; i < n - 1; i++) {
            x--;
            int p1 = pow(p, log2(arr[i]));
            int p2 = pow(p, log2(arr[j]));
            int temp1 = arr[i] ^ p1;
            cout << p1 << endl;
            int temp2 = arr[i] ^ p1;
            cout << p2 << endl;
            if (new_arr[i] > temp1)
                new_arr[i] = temp1;
            if (new_arr[j] > temp2)
                new_arr[j] = temp2;
            i++;
            j++;
            if (x == 0)
                break;
        }
        for (int i = 0; i < n; i++) {
            cout << new_arr[i] << " ";
        }
        cout << endl;

    }
    return 0;
}