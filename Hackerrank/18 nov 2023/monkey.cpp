#include <bits/stdc++.h>
using namespace std;


int main(){
   char s[100001];
   while(cin.getline(s,100001)){
        int namelen = strlen(s);
        sort(s, s+namelen);
        for(int i=0; i<namelen; i++){
           if(s[i]==' '){
            continue;
           }
           else{
            cout<<s[i];
           }
        }
        cout<<endl;
        
   }
    return 0;
}