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
        vector<int> a;
        a.assign(n, 0);
        for(auto &i : a)
            cin >> i;
        int ans = 1e9 + 7;
        for(int i=0; i<n-1; ++i)
        {
            for(int j=i+1; j<n; ++j)
            {
                if(abs(a[i] + a[j]) < abs(ans))
                {
                    ans = a[i] + a[j];
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}