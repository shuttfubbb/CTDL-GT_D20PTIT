#include <bits/stdc++.h>
using namespace std;

const int MD = 1000000007;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        priority_queue<long long, vector<long long>, greater<long long> > mypq;
        for(int i=0; i<n; ++i)
        {
            long long num;
            cin >> num;
            mypq.push(num);
        }
        long long ans = 0;
        while(mypq.size() != 1)
        {
            long long tmp = mypq.top();
            mypq.pop();
            tmp += mypq.top();
            tmp %= MD;
            mypq.pop();
            ans += tmp;
            ans %= MD;
            mypq.push(tmp);
        }
        cout << ans << endl;
    }
    return 0;
}