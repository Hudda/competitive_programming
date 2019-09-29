#include <iostream>
using namespace std;

char bnum(int n) {
	int x = 1;
	int sn = 0;
	while (sn <= n) {
		sn = 3 * x * x - 3 * x + 1;
		if (sn == n)
			return 'Y';
		x++;
	}
	return 'N';
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
    while (true) {
    	long long n;
    	cin >> n;
    	if (n == -1) 
    		break;
    	else {
    		char result = bnum(n);
    		cout << result << endl;
    	}
    }
    return 0;
}