#include <bits/stdc++.h>
using namespace std;

int a[100000];
int n;

void in()
{
    for(int i = 0; i<n; ++i)
        cout << a[i] << " ";
    cout << endl;
}


void sinh(int j)
{
    if(j <= (n-1)/2)
    {
        for(int i = 0; i <= 1; ++i)
        {
            a[j] = i;
            a[n-j-1] = i;
            sinh(j + 1);
        }
    }
    else
        in();
}

int main()
{
    for(int i=0; i< 100000; ++i)
        a[i] = 0;
    cin >> n;
    sinh(0);
    return 0;
}