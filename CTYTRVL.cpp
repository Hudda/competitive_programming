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
    int s, x, n;
    cin >> s >> x >> n;
    map<int, int> mp;
    int t, y;
    for (int i = 0; i < n; i++) {
    	cin >> t >> y;
    	mp.insert({t, y});
    }
    long long dist = 0, day = 0, temp = 0;
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
    	long long tp = (itr->first - temp - 1);
    	tp = tp * x;
    	if (tp == 0) {
    		day += 1;
    		dist += itr->second;
    		if (dist >= s) 
    		break;
    	}

    	else {
    		long long tmp = dist + tp + itr->second - s;
    		if (tmp > x && itr->first - temp != 1) {
    			while (dist < s) {
    				day += 1;
    				dist += x;
    			}
    		}
    		else {
    			dist += tp + itr->second;
    			day += itr->first - temp;
    		}
    		if (dist >= s) {
    				break;
    			}
    	}
    	temp = itr->first;
    }
    while (dist < s) {
    	day += 1;
    	dist += x;
    }
    cout << day;
    return 0;
}