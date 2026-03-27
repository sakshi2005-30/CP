#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int one = 0, maxiOne = 0, zero = 0, maxiZero = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            zero++;
            maxiZero = max(maxiZero, zero);
        } else {
            zero = 0;
        }
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            one++;
            maxiOne = max(maxiOne, one);
        } else {
            one = 0;
        }
    }

    if (maxiZero >= 7 || maxiOne >= 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
