#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        stack<string> myst;
        scanf("\n");
        getline(cin, str);
        reverse(str.begin(), str.end());
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
            	myst.push(a + b + c);
			}
        }
        cout << myst.top() << endl;
    }
    return 0;
}
