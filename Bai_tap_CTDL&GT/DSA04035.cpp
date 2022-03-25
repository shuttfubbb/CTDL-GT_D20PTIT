#include <bits/stdc++.h>
using namespace std;

const int MD = 1000000007;
long long a, b;
long long Mu(long long num)
{
    if(num == 0)
        return 1;
    long long tmp = Mu(num/2);
    if(num % 2 == 0)
        return tmp * tmp % MD;
    else
        return  a * (tmp * tmp % MD) % MD;
}

int main()
{
    while(1)
    {
        cin >> a >> b;
        if(a == 0 && b == 0)
            break;
        long long num = b;
        cout << Mu(num)<< endl;
    }
    return 0;
}