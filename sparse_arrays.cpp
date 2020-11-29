#include <iostream>
#include <vector>
#include <climits>
#include <limits>
#include <string>
using namespace std;

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> counter(queries.size());
    for (int i = 0; i < queries.size(); i++) {
        for (int j = 0; j < strings.size(); j++) {
            if (strings[j] == queries[i]) {
                counter[i]++;
            }
        }
    }
    return counter;
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
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    int q;
    cin >> q;
    vector<string> queries(q);
    for (int i = 0; i < n; i++) {
        cin >> queries[i];
    }
    vector<int> counter = matchingStrings(s, queries);
    for (int i = 0; i < q; i++) {
        cout << counter[i] << " " << endl;
    }
    return 0;
}