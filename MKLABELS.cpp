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
    int n;
    int i = 0;
    while (cin >> n) {
    	if (n != 0) {
    		int k = pow(n, i++);
    		printf("Case %d, N = %d, # of different labelings = %d\n", i, n, k);
    	}
    	else 
    		break;
    }
    return 0;
}