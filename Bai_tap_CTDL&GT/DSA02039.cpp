#include <bits/stdc++.h>
using namespace std;

vector<int> a;
int n;
int dem;
vector<vector <int> > ans;

void in()
{
    cout << dem << endl;
    for(auto it : ans)
    {
        cout << "(";
        for(int i=1; i < it.size()-1; ++i)
            cout << it[i] << " ";
        cout << it[it.size()-1] << ") ";
    }
}

void dequy(int i, int num)
{
    for(int j=a[i-1]; j>=1; --j)
    {
        if(j <= num)
        {
            a.push_back(j);
            if(num - j == 0)
            {
                ans.push_back(a);
                ++dem;
            }
            else
            {
                dequy(i+1, num-j);
            }
            a.pop_back();
        }
    }
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        a.clear();
        a.push_back(n+1);
        ans.clear();
        dem = 0;
        dequy(1, n);
        in();
        cout << endl;
    }
    return 0;
}