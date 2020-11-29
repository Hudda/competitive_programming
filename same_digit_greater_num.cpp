#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void next_digit(char number[], int n) {
    int i;
    for (i = n - 1; i > 0; i--) {
        if (number[i - 1] < number[i])
            break;
    }

    if (i == 0) {
        cout << "Next number is not possible";
        return;
    }

    int x = number[i - 1];
    int smallest = i;
    for (int j = i + 1; j < n; j++) {
        if (number[j] > x && number[j] < number[smallest]) {
            smallest = j;
        }
    }

    swap(&number[i - 1], &number[smallest]);

    sort(number + i, number + n);

    cout << number;
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
    char digits[] = "534976";
    int n = strlen(digits);
    next_digit(digits, n);
    return 0;
}