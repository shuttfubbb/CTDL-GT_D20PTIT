#include <bits/stdc++.h>
using namespace std;

const int MD = 123456789;

long long Mu(long long num)
{
    if(num == 0)
        return 1;
    long long tmp = Mu(num/2) % MD;
    if(num % 2 == 0)
        return (tmp * tmp) % MD;
    else
        return (tmp * tmp) * 2;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long num;
        cin >> num;
        cout << Mu(num-1)<< endl;
    }
    return 0;
}