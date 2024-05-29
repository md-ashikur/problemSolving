#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> arr){

int mx = 0;
for (int i=0; i<n; i++){
    int sum = 0;
    for(int j=i; j<n; j++){
        sum += arr[j];
        if(sum%2==0){
            mx = max(mx, j-i+1);
        }
    }
}

return mx;


}

int main() {
	
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        cout<<solve(n, arr)<<endl;
    }


    return 0;

}
