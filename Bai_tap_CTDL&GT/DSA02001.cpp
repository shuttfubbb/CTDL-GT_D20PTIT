#include <bits/stdc++.h>
using namespace std;

int n, a[100][100];

void dequy(int i)
{
    int j;
    if(i >= 1)
    {
        cout << "[";
        for(j=1; j<i; ++j)
            cout << a[n-i][j] << " ";
        cout << a[n-i][j] << "]";
    }
    else    return;
    cout << endl;
    for(int j=1; j<= i-1; ++j)
        a[n-i+1][j] = a[n-i][j] + a[n-i][j+1];
    dequy(i-1);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i=1; i<=n; ++i)
            cin >> a[0][i];
        dequy(n);
    }
    return 0;
}