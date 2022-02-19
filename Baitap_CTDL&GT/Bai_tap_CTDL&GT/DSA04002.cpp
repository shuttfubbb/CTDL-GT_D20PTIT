#include <bits/stdc++.h>
using namespace std;

const int MD = 1000000007;
long long n,k;

long long daoso(long long n)
{
    long long res = 0;
    while(n > 0)
    {
        res *= 10;
        res += (n%10);
        n/=10;
    }
    return res;
}

long long luythua(long long k)
{
    if(k == 0)
        return 1 % MD;
    long long tmp = luythua(k/2) % MD;
    if(k % 2 == 0)
        return (tmp%MD * tmp%MD)%MD;
    else
        return (n%MD * (tmp%MD * tmp%MD)%MD)%MD;
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        k = daoso(n);
        cout << luythua(k) << endl;
    }
    return 0;
}