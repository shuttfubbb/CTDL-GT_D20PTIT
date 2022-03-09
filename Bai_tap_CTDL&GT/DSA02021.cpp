#include <bits/stdc++.h>
using namespace std;


char quaylui(string s, long long n)
{
    long long len = s.length();
    if(n < len)
        return s[n];
    while(len*2 <= n)
    {
        len *= 2;
    }
    if(len == n)
        return quaylui(s, n-1);
    return quaylui(s, n-len-1);
}

int main()
{
    int t;
    cin >> t;
    while(t--)   
    {
        scanf("\n");
        string s;
        long long n;
        cin >> s >> n;
        cout << quaylui(s, n-1) << endl;
    }
    return 0;
}