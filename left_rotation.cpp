#include <iostream>
#include <vector>
#include <climits>
#include <limits>
using namespace std;

vector<int> rotateLeft(int d, vector<int> arr) {
    int len = arr.size();
    vector<int> output(len);
    for (int i = 0; i < len; i++) {
        int new_index = i - d;
        if (new_index < 0) {
            output[len + new_index] = arr[i];
        }
        else {
            output[new_index] = arr[i];
        }
    }
    return output;
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
    int n, d;
    cin >> n >> d;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int elem;
        cin >> elem;
        arr.push_back(elem);
    }
    vector<int> out;
    out = rotateLeft(d, arr);
    for (int i = 0; i < n; i++) {
        cout << out[i] << " ";
    }
    return 0;
}