#include <bits/stdc++.h>
using namespace std;

int c[100][100], n, fopt, cmin, cost;
int a[100], b[100]={0};
void quaylui(int i)
{
    for(int j=2; j<= n; ++j)
    {
        if(b[j] == 0)
        {
            a[i] = j;
            b[j] = 1;
            cost += c[a[i-1]][a[i]];
            if(i == n)
            {
                cost += c[a[i]][1];
                fopt = min(fopt, cost);
                cost -= c[a[i]][1];
            }
            else if(fopt >  cost + cmin*(n-i+1))
            {
                quaylui(i+1);
            }
            b[j] = 0;
            cost -= c[a[i-1]][a[i]];
        }
    }
}

int main()
{
    a[1] = 1;
    fopt = 1e9;
    cmin = 1e9;
    cost = 0;
    cin >> n;
    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j <=n ;++j)
        {
            cin >> c[i][j];
            if(i != j)
                cmin = min(cmin, c[i][j]);
        }
    }
    quaylui(2);
    cout << fopt;
    return 0;
}