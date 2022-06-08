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
        stack<int> myst;
        myst.push(-1);
        int ans = 0;
        for(int i=0; i<str.size(); ++i)
        {
            if(str[myst.top()] == '(' && str[i] == ')' && !myst.empty())
            {
                myst.pop();
                ans = max(ans, i-myst.top());
            }
            else
                myst.push(i);
        }
        cout << ans << endl;
    }
    return 0;
}