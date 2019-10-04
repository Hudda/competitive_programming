#include <iostream>
#include <map>
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
    	string t1, t2;
    	int g1, g2;
    	map<string, int> mp;
    	for (int i = 0; i < 16; i++) {
    		cin >> t1 >> t2 >> g1 >> g2;
    		if (g1 > g2) {
    			mp[t1] += 1;
    			mp[t2] -= 1;
    		}
    		else {
    			mp[t2] += 1;
    			mp[t1] -= 1;
    		}
    	}
    	int max = -10;
    	auto it = mp.begin();
    	for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
    		if (itr->second > max) {
    			max = itr->second;
    			it = itr;
    		}
    	}
    	cout << it->first << endl;
    }
    return 0;
}