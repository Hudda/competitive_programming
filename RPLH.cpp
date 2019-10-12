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
    	int d, s;
    	cin >> d >> s;
    	float theta;
    	theta = (d * 9.806) / (s * s);
    	theta = asin(theta);
    	theta = theta * 45 / acos(0.0);
    	if (theta !=theta || theta > 45)
	    	printf("Scenario #%d: %.d\n", i+1, -1);
	    else
    		printf("Scenario #%d: %.2f\n", i+1, theta);
    }
    return 0;
}