#include <bits/stdc++.h>
using namespace std;

bool banco[100][100];
long long ans;
int n;

void init()
{
    ans = 0;
    for(int i=1; i<=n; ++i)
        for(int j=1; j<=n; ++j)
            banco[i][j] = true;
}

void inbanco()
{
    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=n; ++j)
            cout << banco[i][j] << " ";
        cout << endl ;
    }
    cout << endl;
}

int check(int i, int j)
{
    int ii = max(i,j);
    int jj = min(i,j);
    for(int k=1; k<=n; ++k)
        if(!(banco[i][k] && banco[k][j] && banco[ii-jj+k][k]))
            return 0;
    return 1;
}

void timchoquanthu(int num)
{
    inbanco();
    if(num > n)
        return;
    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=n; ++j)
        {
            if(check(i, j))
            {
                banco[i][j] = false;
                if(num == n)
                {
                    ++ans;
                }
                timchoquanthu(num + 1);
                banco[i][j] = true;
                inbanco();
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        init();
        timchoquanthu(1);
        cout << ans;
    }
    return 0;
}