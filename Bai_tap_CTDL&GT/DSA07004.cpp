#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        stack<char> myst;
        int ans = 0;
        for(auto it : str)
        {
            if(myst.empty() && it == ')')
            {
                ++ ans;
                myst.push(')');
            }
            else if(it == '(')
                myst.push(it);
            else if(!myst.empty() && it == ')')
                myst.pop();
        }
        cout << ans + myst.size()/2 << endl;
    }
    return 0;
}