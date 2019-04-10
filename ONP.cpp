#include <bits/stdc++.h>
using namespace std;

void rpn(string str) {
	stack <char> s;
	for (string::iterator it = str.begin(); it != str.end(); ++it) {
		if (*it == '(')
			continue;
		else if (*it == ')') {
			cout << s.top();
			s.pop();
		}
		else if (*it >= 'a' && *it <= 'z') {
			cout << *it;
		}
		else
			s.push(*it);
	}
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
    int t;
    cin >> t;
    for (int z = 0; z < t; z++) {
    	string s;
    	cin >> s;
    	rpn(s);
    	cout << endl;
    }
    return 0;
}