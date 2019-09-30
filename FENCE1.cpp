#include<iomanip>
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
    double n;
    while (cin >> n) {
    	if (n == 0) {
    		break;
    	}
    	else {
    		float result = (n * n) / (2 * M_PI);
    		printf("%.2f\n", result);
    	}
    }
    return 0;
}