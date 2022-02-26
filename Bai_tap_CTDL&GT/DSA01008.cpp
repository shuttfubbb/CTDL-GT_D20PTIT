#include <bits/stdc++.h>
using namespace std;

int n, a[1000],k;

void in()
{
    for(int i=1; i<=n; ++i)
        cout << a[i];
    cout << endl;
}
void sinh(int i, int g)
{
    for(int j= n-k+i; j >= g; --j)
    {
        a[j] = 1;
        if(i == k)
            in();
        else
            sinh(i+1, j+1);
        a[j] = 0;
    }
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        sinh(1,1);
    }
    return 0;
}