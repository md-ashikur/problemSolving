#include <bits/stdc++.h>
using namespace std;


string find( string s){
    stringstream ss(s);
    string word;

    while(ss>>word){
      if ( word == "Jessica") return "YES";
    }
return "NO";
}

int main(){

    string s;
    getline(cin, s);
   
   string r = find( s );
   
   cout<<r<<endl;

    return 0;
}