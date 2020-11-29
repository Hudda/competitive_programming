#include <iostream>
#include <vector>
#include <climits>
#include <limits>
using namespace std;

int hourglassSum(vector<vector<int>> arr) {
    int max = INT_MIN;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int new_max = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            if (new_max > max) {
                max = new_max;
            }
        }
    }
    return max;
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
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << hourglassSum(arr);
    return 0;
}