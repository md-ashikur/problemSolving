#include <bits/stdc++.h>
using namespace std;

void convert(string s) {
   
    int h1 = (int)s[0] - '0';
    int h2 = (int)s[1] - '0';
 
    int hh = h1 * 10 + h2;
 
    string m;

    if (hh < 12) {
        m = "AM";
    } else {
        m = "PM";
    }
 
    hh %= 12;
 

    if (hh == 0) {
        cout << "12";
    } 
    else if( hh < 10){
        cout<<"0"<<hh;
    }
    else {
        cout << hh;
    }
 

    for (int i = 2; i < 5; i++) {
        cout << s[i];
    }
 
    cout << " " << m << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        convert(s);
    }
    return 0;
}
