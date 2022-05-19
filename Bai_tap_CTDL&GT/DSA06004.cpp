#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 1e5 + 1;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a, ans;
        a.assign(MAX_SIZE, -1);
        for(int i=0; i<n; ++i)
        {
            int x;
            cin >> x;
            a[x] = x;
        }
        for(int i=0; i<m; ++i)
        {
            int x;
            cin >> x;
            if(a[x] != -1)
                ans.push_back(x);
            else
                a[x] = x;
        }
        for(auto it : a)
            if(it != -1)
                cout << it << " ";
        cout << endl;
        for(auto it : ans)
            if(it != -1)
                cout << it << " ";
        cout << endl;
    }
    return 0;
}