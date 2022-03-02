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
        priority_queue<int, vector<int>, greater<int>> mypq;
        for(int i=0; i<n; ++i)
        {
            int num;
            cin >> num;
            mypq.push(num);
        }
        long long ans = 0;
        while(mypq.size() != 1)
        {
            long long tmp = mypq.top();
            mypq.pop();
            tmp += mypq.top();
            mypq.pop();
            ans += tmp;
            mypq.push(tmp);
        }
        cout << ans << endl;
    }
    return 0;
}