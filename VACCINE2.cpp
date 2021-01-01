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
    for (int i = 0; i < t; i++) {
        int n, d;
        cin >> n >> d;
        int temp;
        int rcounter = 0, counter = 0;
        for (int j = 0; j < n; j++) {
            cin >> temp;
            if (temp <= 9 || temp >= 80)
                rcounter += 1;
            else
                counter += 1;
        }
        int res = ceil(rcounter * 1.0 / d) + ceil(counter * 1.0 / d);
        cout << res << endl;
    }
    return 0;
}