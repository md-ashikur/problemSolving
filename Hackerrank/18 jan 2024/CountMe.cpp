#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
     cin.ignore();
    while (t--)
    {
       
        string s;
        getline(cin, s);
        string word;
        stringstream ss(s);
        map<string, int> mp;

        string mostWord;
        int maxCount = 0;
       while(ss >> word){
        int &count = mp[word];
        count++;

        if (count > maxCount) {
                maxCount = count;
                mostWord = word;
            }
       }
       
        
    cout << mostWord << " " << maxCount << endl;
        
    }

    return 0;
}
