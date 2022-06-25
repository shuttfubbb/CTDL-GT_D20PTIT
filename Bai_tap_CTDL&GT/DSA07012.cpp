#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        scanf("\n");
        string str;
        stack<string> myst;
        getline(cin, str);
        for(auto c : str)
        {
            if(c >= 'A' && c <= 'Z')
                myst.push(string(1, c));
            else
            {
                string a = myst.top();
                myst.pop();
                string b = myst.top();
                myst.pop();
                myst.push("(" + b + c + a + ")");
            }
        }
        cout << myst.top() << endl;
    }
    return 0;
}