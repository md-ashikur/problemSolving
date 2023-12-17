#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> s;
    string n;

    while (true)
    {
        cin >> n;
        if (n == "end")
            break;
        s.push_back(n);
    }

    int q;
    cin >> q;

    list<string>::iterator it = s.begin();

    while (q--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "visit")
        {
            string address;
            cin >> address;

            auto found = find(s.begin(), s.end(), address);
            if (found != s.end())
            {
                cout << *found << endl;
                it = found;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmd == "next")
        {
            if (next(it) != s.end())
            {
                it++;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmd == "prev")
        {
            if (it != s.begin())
            {
                it--;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
