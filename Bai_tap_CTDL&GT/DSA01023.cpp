#include <bits/stdc++.h>
using namespace std;

int C[100], A[100], n, k, s, dem;

void in()
{
    for(int i=1; i<=k; ++i)
        cout << C[i] << " ";
    cout << endl;
}

int xuly()
{
    for(int i=1; i<=k; ++i)
        if(A[i] != C[i])
            return 0;
    return 1;
}

void quaylui(int i)
{
    for(int j=C[i-1]+1; j<=n-k+i; ++j)
    {
        C[i] = j;
        if(i == k)
        {
            ++dem;
            if(xuly())
            {
                cout << dem << endl;
                break;
            }
                
        }
        else
            quaylui(i+1);
    }
}

int main()
{
    int t;
    cin >> t;
    C[0] = 0;
    while(t--)
    {
        dem = 0;
        cin >> n >> k;
        for(int i=1; i<=k; ++i)
            cin >> A[i];
        quaylui(1);
        
    }
    return 0;
}