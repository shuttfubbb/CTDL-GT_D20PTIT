#include <bits/stdc++.h>
using namespace std;

const int MD = 1000000007;
vector<vector<long long> > donvi {{1, 0}, {0, 1}};
vector<vector<long long> > X {{1, 1}, {1, 0}};

vector<vector<long long> > nhan(vector<vector<long long> > a, vector<vector<long long> > b)
{
    vector<vector<long long> > ans {{0, 0}, {0, 0}};
    ans[0][0] = (a[0][0] * b[0][0] % MD + a[0][1] * b[1][0] % MD) % MD;
    ans[0][1] = (a[0][0] * b[0][1] % MD + a[0][1] * b[1][1] % MD) % MD;
    ans[1][0] = (a[1][0] * b[0][0] % MD + a[1][1] * b[1][0] % MD) % MD;
    ans[1][1] = (a[1][0] * b[0][1] % MD + a[1][1] * b[1][1] % MD) % MD;
    return ans;
}

vector<vector<long long> > mu(int n)
{
    if(n == 0)
        return donvi;
    vector<vector<long long> > x = mu(n/2);
    vector<vector<long long> > tmp = nhan(x, x);
    if(n % 2 == 0)
        return tmp;
    return nhan(tmp, X);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<vector<long long> > A = mu(n);
        cout <<  A[1][0] << endl;
    }
    return 0;
}