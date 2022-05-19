#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        vector<int> a, sorta;
        a.assign(n, 0);
        for(auto &it : a)
        {
            cin >> it;
            sorta.push_back(it);
        }
        sort(sorta.begin(), sorta.end());
        int ans = 0;
        for(int i=0; i<n; ++i)
        {
            if(a[i] == sorta[i])
                ++ans;
        }
        
    }
    return 0;
}