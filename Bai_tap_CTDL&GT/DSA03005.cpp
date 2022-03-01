#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<int> myvt;
        int n,k;
        cin >> n >> k;
        for(int i=0; i<n; ++i)
        {
            int num;
            cin >> num;
            myvt.push_back(num);
        }
        sort(myvt.begin(), myvt.end());
        int M = min(k, n-k);
        long long ans = 0;
        for(int i=0; i<M; ++i)
            ans -= myvt[i];
        for(int j=M; j<n; ++j)
            ans += myvt[j];
        cout << ans << endl;
    }
    return 0;
}