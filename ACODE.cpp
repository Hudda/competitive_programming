#include <iostream>
#include <string>
using namespace std;

int acode(string n, int k, int arr[100000]) {
	if (k == 0)
		return 1;
	int s = n.length() - k;
	if (n[s] == '0')
		return 0;
	if (arr[k])
		return arr[k];
	int result = acode(n, k - 1, arr);
	if (k >= 2 and stoi(n.substr(s, 2)) <= 26)
		result += acode(n, k - 2, arr);
	arr[k] = result;
	return result;
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
    string n;
    while (true) {
    	cin >> n;
    	if (n != "0") {
    		long long num;
    		int arr[100000];
    		fill_n(arr, 100000, NULL);
    		num = acode(n, n.length(), arr);
    		cout << num << endl;
    	}
    	else
    		break;
    }
    return 0;
}