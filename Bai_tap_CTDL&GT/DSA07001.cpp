#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> ans;
    string str;
    while(getline(cin, str))
    {
        string token;
        stringstream ss(str);
        ss >> token;
        if(token == "push")
        {
            ss >> token;
            ans.push_back(token);
        }
        else if(token == "show")
        {
            if(ans.empty())
                cout << "empty";
            else
                for(auto it : ans)
                    cout << it << " ";
            cout << endl;
        }
        else if(token == "pop")
            ans.pop_back();
    }
    return 0;
}