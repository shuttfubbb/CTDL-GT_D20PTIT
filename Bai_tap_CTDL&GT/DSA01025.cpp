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

void sinh(int i)
{
    {
        for(int j=a[i-1] + 1; j <= n-k+i; ++j)
        {
            a[j] = i;
            if(i == k)
                in();
            else
                sinh(i+1);
        }
    }  
       
}

int main()
{
    a[0] = 0;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        sinh(1);      
    }
    return 0;
}