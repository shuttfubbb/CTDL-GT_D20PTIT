#include <bits/stdc++.h>
using namespace std;

int n,k;
int a[100000];
char mystr[] = " ABCDEFGHIKLMNOPQRSTUVWXYZ";
void in()
{
    for(int i=1; i<=k; ++i)
        cout << mystr[a[i]];
    cout << endl;
}

void sinh(int j)
{
    if(j <= k)
    {
        for(int i=a[j-1] + 1; i <= n-k+j; ++i)
        {
            a[j] = i;
            sinh(j+1);
        }
    } 
    else 
       in();
}

int main()
{
    for(int i=0; i<100000; ++i)
        a[i] = 0;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        sinh(1);      
    }
    return 0;
}