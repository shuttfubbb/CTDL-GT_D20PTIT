#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int V, E;
        cin >> V >> E;
        vector<vector<int> > dothi (V+1, vector<int> ());
        for(int i=1; i<= E; ++i)
        {
            int a, b;
            cin >> a >> b;
            dothi[a].push_back(b);
        }
        for(int i=1; i<= V; ++i)
        {
            cout << i << ": ";
            for(int j =0; j<dothi[i].size(); ++j)
                cout << dothi[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}