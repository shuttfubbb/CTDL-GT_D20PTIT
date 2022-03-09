#include <bits/stdc++.h>
using namespace std;

struct myst
{
    int start;
    int finish;
};

bool cmp (myst x, myst y)
{
    return x.finish < y.finish;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        myst myvt[100005];
        int n;
        cin >> n;
        for(int i=0; i<n; ++i)
            cin >> myvt[i].start >> myvt[i].finish;
        sort(myvt, myvt+n, cmp);
        int ans = 1;
        int i = 0;
        for(int j=1; j < n; ++j)
        {
            if(myvt[j].start >= myvt[i].finish)
            {
                ++ans;
                i = j;
            }
        }
        cout << ans << endl;
    }
    return 0;
}