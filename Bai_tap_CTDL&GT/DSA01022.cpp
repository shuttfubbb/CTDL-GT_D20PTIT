#include <bits/stdc++.h>
using namespace std;

int A[100], B[100], C[100], n, dem;

int kiemtra()
{
    for(int i=1; i<=n; ++i)
        if(A[i] != C[i])
            return 0;
    return 1;
}


void sinh(int i)
{
    for(int j=1; j<=n; ++j)
    {
        if(B[j])
        {
            C[i] = j;
            B[j] = 0;
            if(i == n)
            {
                ++dem;
                if(kiemtra())
                {
                    cout << dem << endl;
                    break;
                }
            }                
            else
                sinh(i+1);
            B[j] = 1;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        dem = 0;
        cin >> n;
        for(int i=1; i<=n; ++i)
        {
            cin >> A[i];
            B[i] = 1;
        }
        sinh(1);
    }
    return 0;
}