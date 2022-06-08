#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        scanf("\n");
        string str , token;
        getline(cin, str);
        stack<string> myst;
        stringstream ss(str);
        while(ss >> token)
        {
            myst.push(token);
        }
        while(!myst.empty())
        {
            token = myst.top();
            cout << token << " ";
            myst.pop();
        }
        cout << endl;
    }
    return 0;
}