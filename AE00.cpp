#include <bits/stdc++.h>
using namespace std;

void rectangles(int n) {
	int count = 0;
	for (int i = 1; i <= n; i++) {
		for(int j = i; j <= i*i; j++) 
			count++;
	}
	cout << count;
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
    rectangles(n);
    return 0;
}