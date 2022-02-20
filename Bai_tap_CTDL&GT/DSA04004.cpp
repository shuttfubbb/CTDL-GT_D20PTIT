#include <bits/stdc++.h>
using namespace std;

long long n,k;

int chiavatri(long long num)
{
    long long mid = (long long)pow(2, num-1);
    if(k == mid)
        return num;
    else if(k < mid)
        return chiavatri(num-1);
    k -= mid;
    return chiavatri(num-1);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout << chiavatri(n) << endl;
    }
    return 0;
}