#include <bits/stdc++.h>
using namespace std;

long long n, k;
long long F[100];
void init()
{
    F[1] = 1;
    F[2] = 1;
    for(int i=3; i<= 92; ++i)
    {
        F[i] = F[i-1] + F[i-2];
    }
}

long long fibo(long long num)
{
    return (long long)(pow((1 + sqrt(5)), num) - pow((1 - sqrt(5)), num))/ (long long)(pow(2,num)*sqrt(5));
}

char chiavatri(long long num)
{
    if(num == 2)
        return '1';
    else if(num == 1)
        return '0';
    long long mid = F[num-2];
    if(k <= mid)
        return chiavatri(num - 2);
    k -= mid;
    return chiavatri(num - 1);
}

int main()
{
    init();
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout << chiavatri(n) << endl;
    }
    return 0;
}