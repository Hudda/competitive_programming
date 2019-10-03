#include <iostream>
#include <algorithm>
using namespace std;

char offside(int a[], int b[], int m , int n) {
	sort(a, a+m);
	sort(b, b+n);
	int attacker = a[0];
	int defender = b[1];
	if (attacker >= defender) 
		return 'N';
	else 
		return 'Y';
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
    int a, d;
    int b[20], c[20];
  	while (cin >> a >> d) {
  		if (a == 0 && d == 0) 
  			break;
  		else {
  			for (int i = 0; i < a; i++)
  				cin >> b[i];
  			for (int j = 0; j < d; j++)
  				cin >> c[j];
  			cout << offside(b, c, a, d) << endl;
  		}
  	}
    return 0;
}