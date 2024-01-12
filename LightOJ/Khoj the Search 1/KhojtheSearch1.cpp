// https://lightoj.com/problem/dimik-khoj-the-search-1

#include <bits/stdc++.h>
using namespace std;

int findSubstringStart( string s1, string s2) {

    for (int i = 0; i <= s1.length() - s2.length(); i++) {
     
        if (s1.substr(i, s2.length()) == s2) {
            return i;
        }
    }
   
    return -1;
}

int main() {
   
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        string s1, s2;
        cin >> s1 >> s2;

        int result = findSubstringStart(s1, s2);
        cout << result << endl;
    }

    return 0;
}
