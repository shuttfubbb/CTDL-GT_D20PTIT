#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a, b, c;
        a.assign(n, 0);
        b.assign(n, 0);
        c.assign(n, 0);
        for(auto &i : a)
            cin >> i;
        b[0] = a[0];
        c[n-1] = a[n-1];
        for(int i=1; i<n; ++i)
            b[i] = a[i] + b[i-1];
        for(int i=n-2; i>=0; --i)
            c[i] = a[i] + c[i+1];
        a.insert(a.begin(), 0);
        b.insert(b.begin(), 0);
        c.insert(c.begin(), 0);
        b.push_back(0);
        c.push_back(0);
        int ans = -1;
        for(int i=1; i<=n; ++i)
        {
            if(b[i-1] == c[i+1])
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}