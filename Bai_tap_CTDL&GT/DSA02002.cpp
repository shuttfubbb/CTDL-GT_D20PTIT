#include <bits/stdc++.h>
using namespace std;

int n, a[100][100];

void dequy(int i)
{
    if(i != 0)
    {
        int j;
        for(int j=1; j<= i-1; ++j)
            a[i-1][j] = a[i][j] + a[i][j+1];
        dequy(i-1);
        cout << "[";
        for(j=1; j<i; ++j)
            cout << a[i][j] << " ";
        cout << a[i][j] << "] ";
    }
    else return;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i=1; i<=n; ++i)
            cin >> a[n][i];
        dequy(n);
        cout << endl;
    }
    return 0;
}