#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> ans;
    int t;
    cin >> t;
    while(t--)
    {
        scanf("\n");
        string str;
        cin >> str;
        if(str == "PUSH")
        {
            int num;
            cin >> num;
            ans.push_back(num);
        }
        else if(str == "POP")
        {
            if(!ans.empty())
                ans.pop_back();
        }
        else
        {
            if(!ans.empty())
                cout << ans.back();
            else
                cout << "NONE";
            cout << endl;
        }

    }
}