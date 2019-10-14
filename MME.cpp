#include <iostream>
#include <map>
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
    map <int, int> a;
    int n;
   	cin >> n;
   	for (int i = 0; i < n; i++) {
   		int k;
   		cin >> k;
   		a[k] += 1;
   	}
   	int z;
   	cin >> z;
   	for (int i = 0; i < z; i++) {
   		int k;
   		cin >> k;
   		if (a[k])
   			cout << a[k];
   		else
   			cout << "NOT PRESENT";
   		cout << "\n";
   	}
    return 0;
}