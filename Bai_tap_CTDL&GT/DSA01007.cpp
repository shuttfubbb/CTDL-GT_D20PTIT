#include <bits/stdc++.h>
using namespace std;

char mystr[] = "AB";
int n;
int a[10000];

void in()
{
    for(int i=0; i<n; ++i)
        cout << mystr[a[i]];
    cout << " ";
}

void sinh(int i)
{
    if(i < n)
    {
        for(int j=0; j<=1; ++j)
        {
            a[i] = j;
            sinh(i + 1);
        }
    }
    else
        in();
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        sinh(0);
        cout << endl;
    }
    return 0;
}