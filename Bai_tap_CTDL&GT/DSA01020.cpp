#include <bits/stdc++.h>
using namespace std;

string mystr;
int a[1005];
int n;

void xuly(string str)
{
    for(int i=0; i<n; ++i)
        a[i+1] = str[i] - '0';
}

void in()
{
    for(int i=1; i<=n; ++i)
        cout << a[i];
    cout << endl;
}

void inzero()
{
    for(int i=1; i<=n; ++i)
        cout << 1;
    cout << endl;
}

void cauhinhketiep()
{
    int i = n;
    while(a[i] == 0 && i != 0)
    {
        a[i] = 1;
        --i;
    }
    if(i == 0)
        inzero();
    else
    {
        a[i] = 0;
        in();
    }  
}

int main()
{
    int t;
    cin >> t;
    while(t--)    
    {
        mystr.clear();
        cin >> mystr;
        n = mystr.length();
        xuly(mystr);
        cauhinhketiep();
    }
    return 0;
}