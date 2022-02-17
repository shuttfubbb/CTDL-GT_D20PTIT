#include <bits/stdc++.h>
using namespace std;

int n;
char mystr[] = "AH";
int a[100000];

void in()
{
    for(int i=1; i<=n; ++i)
        cout << mystr[a[i]];
    cout << endl;
}

void sinh(int j)
{
    if(j <= n)
    {
        if(j == n)
        {
            a[j] = 0;
            in();
        }
        else if(a[j-1] == 0)
        {
            for(int i=0; i<=1; ++i)
            {
                a[j] =  i;
                sinh(j+1);
            }
                
        }
        else
        {
            a[j] = 0;
            sinh(j+1);
        }
    }
    else
        in();
}

int main()
{
    a[1] = 1;
    a[2] = 0;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        sinh(3);
    }
    return 0;
}