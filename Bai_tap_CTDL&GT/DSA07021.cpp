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
        if(str.empty())
        {
            cout << 1 << endl;
            continue;
        }
        for(auto it : str)
        {
            if(it == '(')
                myst.push(it);
            else
            {
                if(!myst.empty() && myst.top() == '(')
                {
                    myst.pop();
                    ++ans;
                }
                else
                    myst.push(it);
            }
        }
        cout << ans * 2 << endl;
    }
    return 0;
}