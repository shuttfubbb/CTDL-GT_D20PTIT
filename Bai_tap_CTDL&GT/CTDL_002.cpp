#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[100000], c[100000];
int res = 0;
void in()
{
    long long f = 0;
    for(int i = 0; i<n; ++i)
        f += c[i]*a[i];
    if(f == k)
    {
        res++;
        for(int i = 0; i<n; ++i)
        if(a[i] == 1)
            cout << c[i] << " ";
        cout << endl;
    }
}


void sinh(int j)
{
    if(j < n)
    {
        for(int i = 0; i <= 1; ++i)
        {
            a[j] = i;
            sinh(j + 1);
        }
    }
    else
        in();
}


int main()
{
    cin >> n >> k;
     for(int i=0; i< 100000; ++i)
        a[i] = 0;
    for(int i=0; i<n; ++i)
        cin >> c[i];
    sinh(0);
    cout << res;
    return 0;
}