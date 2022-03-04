#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string input;
        cin >> input;
        stack<char> mystack;
        for(int i=0; i<input.length(); ++i)
        {
            if(mystack.empty())
                mystack.push(input[i]);
            else
            {
                char a = input[i];
                char b = mystack.top();
                if(b == '(' && a == ')' || b == '{' && a == '}' || b == '[' && a == ']')
                    mystack.pop();
                else
                    mystack.push(a);
            }
        }
        if(mystack.empty())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}