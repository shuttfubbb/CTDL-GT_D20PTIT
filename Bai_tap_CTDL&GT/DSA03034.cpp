#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) 
    {
        int n, m, k;
        int *a = new int[100005], *b = new int[100005], *c = new int[100005];
        cin >> n >> m >> k;
        for(int i=0; i<n; ++i)
            cin >> a[i];
        for(int i=0; i<m; ++i)
            cin >> b[i];
        for(int i=0; i<k; ++i)
            cin >> c[i];

        int i=0, j=0, p=0;

        vector<int> ans;
        ans.clear();

        while(i < n && j < m && p < k)
        {
            if(a[i] < b[j] && i < n)
                ++i;
            else if(b[j] < a[i] && j < m)
                ++j;
            if(a[i] < c[p] && i < n)
                ++i;
            else if(c[p] < a[i] && p < k)
                ++p;
            if(b[j] < c[p] && j < m)
                ++j;
            else if(c[p] < b[j] && p < k)
                ++p;
            if(a[i] == b[j] && a[i] == c[p])
            {
                ans.push_back(a[i]);
                ++i; 
                ++j;
                ++p;
            }
        }
        if(ans.empty())
            cout << "NO\n";
        else
        {
            for(auto it : ans)
                cout << it << " ";
            cout << endl;
        }
    }
    return 0;
}