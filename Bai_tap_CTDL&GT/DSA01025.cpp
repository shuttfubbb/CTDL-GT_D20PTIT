#include <bits/stdc++.h>
using namespace std;

int n,k;
int a[100000];

void in()
{
    for(int i=1; i<=k; ++i)
    {
        char x = a[i] + 'A' - 1;
        cout << x;
    }
    cout << endl;
}

void sinh(int j)
{
    for(int i=a[j-1] + 1; i <= n-k+j; ++i)
    {
        a[j] = i;
        if(j == k)
            in();
        else
            sinh(j+1);
    }
}

int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i=0; i<100000; ++i)
            a[i] = 0;
        sinh(1);      
    }
    return 0;
}