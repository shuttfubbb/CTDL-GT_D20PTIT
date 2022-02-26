#include <bits/stdc++.h>
using namespace std;

int n;
int A[100], B[100], X[100];

void in()
{
    for(int i=1; i<=n; ++i)
        cout << X[A[i]] << " " ;
    cout << endl;
}

void sinh(int i)
{
    for(int j=1; j<=n; ++j)
    {
        if(B[j])
        {
            A[i] = j;
            B[j] = 0;
            if(i == n)
                in();
            else
                sinh(i+1);
            B[j] = 1;
        }
    }
}

int main()
{
    cin >> n;
    for(int i=1; i<=n; ++i)
    {
        cin >> X[i];
        B[i] = 1;
    }
    sort(X+1, X+n+1);
    sinh(1);
    return 0;
}