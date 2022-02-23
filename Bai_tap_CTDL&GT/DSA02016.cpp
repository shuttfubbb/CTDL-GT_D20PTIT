#include <bits/stdc++.h>
using namespace std;

int A[20], B[20], n, xuoi[20], nguoc[20], dem;
/*
void in()
{
    for(int i=1; i<=n; ++i)
        cout << A[i] << " ";
    cout << endl;
}
*/
void quaylui(int i)
{
    for(int j=1; j<=n; ++j)
    {
        if(B[j] == 0 && xuoi[i-j+n] == 0 && nguoc[i+j-1] == 0)
        {
            A[i] = j;
            B[j] = 1;
            xuoi[i-j+n] = 1;
            nguoc[i+j-1] = 1;
            if(i == n)
                ++dem;
            else
                quaylui(i+1);
            B[j] = 0;
            xuoi[i-j+n] = 0;
            nguoc[i+j-1] = 0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        dem = 0;
        cin >> n;
        for(int i=0; i<20; ++i)
        {
            B[i] = 0;
            xuoi[i] = 0;
            nguoc[i] = 0;
        }    
        quaylui(1);
        cout << dem;
    }
    return 0;
}