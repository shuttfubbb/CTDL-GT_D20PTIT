#include <bits/stdc++.h>
using namespace std;

long long n, k;

char chiavatri(int step, int pos)
{
    char ans = 'A';
    long long mid = pow(2, step - 1);
    if(pos == mid)
        return ans += (step-1);
    else if (pos > mid)
        return chiavatri(step - 1, pos - mid);
    return chiavatri(step - 1, pos);
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout << chiavatri(n, k) << endl;
    }
    return 0;
}