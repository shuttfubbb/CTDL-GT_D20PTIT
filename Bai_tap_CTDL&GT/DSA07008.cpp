#include <bits/stdc++.h>
using namespace std;

int priority(char x)
{
    if(x == '+' || x == '-')
        return 1;
    if(x == '^')
        return 3;
    if(x == '(')
        return 0;
    return 2;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string P;
        stack<char> myst;
        cin >> P;
        for(auto x : P)
        {
            if(x == '(')
                myst.push(x);
            else if((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'))
                cout << x;
            else if(x == ')')
            {
                while(myst.size() && myst.top() != '(')
                {
                    cout << myst.top();
                    myst.pop();
                }
                myst.pop();
            }
            else
            {
                while (myst.size() && priority(myst.top()) >= priority(x))
                {
                    /* code */
                    cout << myst.top();
                    myst.pop();
                }
                myst.push(x);
            }
            
        }
        while(!myst.empty())
        {
            char y = myst.top();
            if(y != '(')
                cout << y;
            myst.pop();
        }
    }
    return 0;
}