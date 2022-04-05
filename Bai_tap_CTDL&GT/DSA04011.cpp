#include <bits/stdc++.h>
using namespace std;

string s1, s2;
long long arr[1000];
long long a,b;

int main()
{
    arr[0] = 1;
    for(int i=1; i<=30; ++i)
        arr[i] = arr[i-1] * 2;
    int t;
    cin >> t;
    while(t--)
    {
        s1.clear();
        s2.clear();
        a = 0;
        b = 0;
        cin >> s1 >> s2;
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        for(int i=0; i<s1.size(); ++i)
            a += (arr[i] * (s1[i] - '0'));
        for(int i=0; i<s2.size(); ++i)
            b += (arr[i] * (s2[i] - '0'));
        cout << a * b << endl; 
    }
    return 0;
}