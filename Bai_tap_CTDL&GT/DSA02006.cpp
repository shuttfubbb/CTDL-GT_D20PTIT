#include <bits/stdc++.h>
using namespace std;

int n, k, c[1000], check;
int a[1000];

void in(int len)
{
    cout << "[";
    for(int i=1; i<len; ++i)
        if(a[i])
            cout << c[i] << " ";
    if(a[len])
        cout << c[len] << "] ";
}

void quaylui(int i, int sum)
{
    for(int j=1; j>=0; --j)
    {
        a[i] = j;
        if(sum + a[i]*c[i] == k)
        {
            ++check;
            in(i);
        }
        else if(sum + a[i]*c[i] < k && i < n)
        {
            quaylui(i+1, sum + a[i]*c[i]);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        check = 0;
        cin >> n >> k;
        for(int i=1; i<= n; ++i)
            cin >> c[i];
        sort(c+1, c+n+1);
        quaylui(1, 0);
        if(!check)
            cout << -1;
        cout << endl;
    }
    return 0;
}