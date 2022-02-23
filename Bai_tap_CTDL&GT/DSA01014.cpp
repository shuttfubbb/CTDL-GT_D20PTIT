#include <bits/stdc++.h>
using namespace std;

int C[100], n, k, s, dem;

void xuly()
{
    int t=0;
    for(int i=1; i<=k; i++)
    {
        t += C[i];
    }
    if(t == s)
    {
        ++dem;
    }
        
}

void quaylui(int i)
{
    for(int j=C[i-1]+1; j<=n-k+i; ++j)
    {
        C[i] = j;
        if(i == k)
            xuly();
        else
            quaylui(i+1);
    }
}

int main()
{
    while(1)
    {
        cin >> n >> k >> s;
        if(n == 0 && k == 0 && s == 0)
            break;
        dem = 0;
        C[0] = 0;
        quaylui(1);
        cout << dem << endl;
    }
    return 0;
}