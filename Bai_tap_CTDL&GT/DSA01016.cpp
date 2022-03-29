#include <bits/stdc++.h>
using namespace std;

int a[10000];
int n;

void in(int len)
{
    cout << "(";
    for(int i=1; i< len; ++i)
        cout << a[i] << " ";
    cout << a[len] << ") ";
}

void dequy(int i, int num)
{
    for(int j=a[i-1]; j>=1; --j)
    {
        if(j <= num)
        {
            a[i] = j;
            if(num - j == 0)
                in(i);
            else
                dequy(i+1, num-j);
        }
    }
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        a[0] = n+1;
        dequy(1, n);
        cout << endl;
    }
    return 0;
}