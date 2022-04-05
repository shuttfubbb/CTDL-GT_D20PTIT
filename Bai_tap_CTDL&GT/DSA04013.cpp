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
        sort(a.begin(), a.end());
        int ans = n, l = n/2 , r = n-1;
        while(l >= 0 && r >= n/2)
        {
            if(a[r] >= a[l] * 2)
            {
                --ans;
                --l;
                --r;
            }
            else
                --l;
        }
        cout << ans << endl;
    }
    return 0;
}