#include <bits/stdc++.h>
using namespace std;

const int MD = 1000000007;
vector<vector<long long> > donvi;
int n, k;

vector<vector<long long> > taoDV()
{
    vector<vector<long long> > ans (n, vector<long long> (n, 0));
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            if(i == j)
                ans[i][j] = 1;
            else
                ans[i][j] = 0;
        }
    }
    return ans;
}

vector<vector<long long> > nhan(vector<vector<long long> > a, vector<vector<long long> > b)
{
    vector<vector<long long> > ans (n, vector<long long> (n, 0));
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            for(int k=0; k<n; ++k)
            {
                ans[i][j] += a[i][k] * b[k][j];
                ans[i][j] %= MD;
            }
        }
    }
    return ans;
}

vector<vector<long long> > mu(int n, vector<vector<long long> > A)
{
    if(n == 0)
        return donvi;
    vector<vector<long long> > x = mu(n/2, A);
    vector<vector<long long> > tmp = nhan(x, x);
    if(n % 2 == 0)
        return tmp;
    return nhan(tmp, A);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        donvi = taoDV();
        vector<vector<long long> > A (n, vector<long long> (n, 0));
        for(int i=0; i<n; ++i)
            for(int j=0; j<n; ++j)
                cin >> A[i][j];
        vector<vector<long long> > MT = mu(k, A);
        long long ans = 0;
        for(int i=0; i<n; ++i)
        {
            ans += MT[i][n-1];
            ans %= MD;
        }
        cout << ans << endl;
    }
    return 0;
}