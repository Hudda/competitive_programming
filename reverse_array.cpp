#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArray(vector<int> a) {
    int end = a.size() - 1;
    int start = 0;
    while (start <= end) {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
    return a;
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
    cin >> n;
    vector <int> arr;
    int elem;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        arr.push_back(elem);
    }
    vector<int> rev_arr = reverseArray(arr);
    for (int i = 0; i < n; i++) {
        cout << rev_arr[i] << " ";
    }
    return 0;
}