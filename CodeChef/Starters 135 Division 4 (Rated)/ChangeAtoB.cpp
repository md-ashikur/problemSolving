#include <bits/stdc++.h>
using namespace std;

int solver(int a, int b, int k){
    int ops=0; 
        while(true){
            if(b/k>=a && b%k==0){ 
                ops++; 
                b/=k; 
            } 
            else if(b%k==0){ 
                ops+=(b-a); 
                break; 
            }   
        else{ 
            ops+=(b%k); 
            b=b-b%k; 
            } 
        } 
        return ops;
}

int main(){ 
    int t; 
    cin>>t; 
    while(t--){ 
        int a,b,k; 
        cin>>a>>b>>k; 
        cout<<solver(a,b,k)<<endl; 
    }  
return 0; 
}