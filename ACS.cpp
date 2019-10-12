#include <iostream>
#include <vector>
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
    int x, y, z;
    int r[1235], c[5679];
    for (int i = 1; i <= 1234; i++)
    	r[i] = i;
    for (int i = 1; i <= 5678; i++)
    	c[i] = i;
    char input;
    while (cin >> input) {
    	if (input == 'R') {
    		cin >> x >> y;
    		int temp = r[x];
    		r[x] = r[y];
    		r[y] = temp;
    	}
    	else if (input == 'C') {
    		cin >> x >> y;
    		int temp = c[x];
    		c[x] = c[y];
    		c[y] = temp;
    	}
    	else if (input == 'Q') {
    		cin >> x >> y;
    		int result = (r[x]-1)*5678 + c[y];
    		cout << result << endl;
    	}
    	else if (input == 'W') {
    		cin >> z;
    		int row = (z - 1) / 5678 + 1;
    		int col = (z - 1) % 5678 + 1;
    		for (int i = 1; i <= 1234; i++) {
    			if (r[i] == row) {
    				cout << i << " ";
    				break;
    			}
    		}
    		for (int i = 1; i <= 5678; i++) {
    			if (c[i] == col) {
    				cout << i << endl;
    				break;
    			}
    		}
    	}
    }
    return 0;
}