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
    int a, b;
    cin >> a >> b;
    int l, w;
    int k = pow(pow(4 - a, 2) - 16 * b, 0.5);
   	l = (a + 4 + k) / 4;
   	w = (a + 4 - k) / 4;
    if (l > w)
    	printf("%d %d", l, w);
    else
    	printf("%d %d", w, l);
    return 0;
}