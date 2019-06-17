#include <iostream>
using namespace std;

int multiply(int n[], int l) {
	int carry = 0;
	for (int i = 0; i < l; i++) {
		int mul = n[i] * 2 + carry;
		n[i] = mul % 10;
		carry = mul / 10;
	}
	while (carry) {
		n[l] = carry;
		carry /= 10;
		l++;
	}
	return l;
}

int sub(int n[], int l) {
	int carry;
	if (n[0] >= 2) {
		n[0] -= 2;
		carry = 0;
	}
	else {
		n[0] += 8;
		carry = 1;
	}
	int j = 1;
	while (carry) {
		if (n[j] > 0) {
			n[j++] -= 1;
			carry = 0;
			if (j == l and n[j-1] == 0) {
				return --l;
			}
		}
		else
			n[j++] = 9;
	}
	return l;
}

void bishops(string s) {
	int l = s.length(), j = 0;
	int n[200];
	for (int i = l-1; i >= 0; i--) {
		n[i] = s[j++] - '0'; 
	}
	l = multiply(n, l);
	l = sub(n, l);
	for (int i = l-1; i >= 0; i--) {
		cout << n[i];
	}
	cout << endl;
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
    while (cin >> n) {
    	if (n == "1") 
    		cout << n << endl;
    	else
    		bishops(n);
    }
    return 0;
}