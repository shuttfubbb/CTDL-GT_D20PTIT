#include <bits/stdc++.h>
using namespace std;

int n;
int a[100000];
bool chuaxet[100000];

void init()
{
    for(int i=0; i<100000; ++i)
        chuaxet[i] = true;
}

void in()
{
    for(int i=1; i<=n; ++i)
        cout << a[i];
    cout << " ";
}

void sinh(int j)
{
    if(j <= n)
    {
        for(int i=1; i<=n; ++i)
        {
            if(chuaxet[i])
            {
                a[j] = i;
                chuaxet[i] = false;
                sinh(j + 1);
                chuaxet[i] = true;
            }
        }
    }
    else
        in();
}

int main()
{
    init();
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        sinh(1);
        cout << endl;
    }
    return 0;
}