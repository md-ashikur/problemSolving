#include <bits/stdc++.h>
using namespace std;


int main() {
	
    int t;
    cin>>t;
    while(t--) {
       
      
       string s;
        cin >> s;

       int c = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                c++;
            }
        }


          size_t pos = string::npos; 

        if (c == 1) {
            cout << "11" << endl;
          
        }

        if (s.find("1100") != pos || s.find("0011") != pos) {
            cout << "21" << endl;
            
        }

        if (s.find("0110") != pos || s.find("1001") != pos || 
            s.find("1010") != pos || s.find("0101") != pos) {
            cout << "121" << endl;
          
        }

        if (c == 3) {
            cout << "231" << endl;
            
        }

        if (c == 4) {
            cout << "441" << endl;
        }

     
    }


    return 0;

}
