#include <bits/stdc++.h>
using namespace std;

const int MD = 1000000007;
long long n,k;

long long luythua(long long k)
{
    if(k == 0)
        return 1;
    long long tmp = luythua(k/2) % MD;
    if(k % 2 == 0)
        return tmp%MD * tmp%MD;
    else
        return n%MD * tmp%MD * tmp%MD;
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout << luythua(k) << endl;
    }
    return 0;
}