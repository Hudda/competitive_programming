#include <iostream>
#include <vector>
using namespace std;

string multiply(string num1, string num2) {
    int len1 = num1.length();
    int len2 = num2.length();
    vector<int> result(len1 + len2, 0);

    if (len1 == 0 || len2 == 0) {
        return "0";
    }

    int i_n1 = 0;
    int i_n2 = 0;
    for (int i = len1 - 1; i >= 0; i--) {
        int carry = 0;
        int n1 = num1[i] - '0';
        i_n2 = 0;

        for (int j = len2 - 1; j >= 0; j--) {
            int n2 = num2[j] - '0';
            int sum = result[i_n1 + i_n2] + n1 * n2 + carry;
            carry = sum / 10;
            result[i_n1 + i_n2] = sum % 10;
            i_n2++;
        }
        if (carry > 0) {
            result[i_n1 + i_n2] += carry;
        }
        i_n1++;
    }
    int i = result.size() - 1;

    while (i >= 0 && result[i] == 0) {
        i--;
    }

    if (i == -1) {
        return "0";
    }

    string s = "";
    while (i >= 0) {
        s += to_string(result[i--]);
    }

    return s;
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
    string n1 = "1235421415454545454545454544";
    string n2 = "1714546546546545454544548544544545";
    cout << multiply(n1, n2);
    return 0;
}