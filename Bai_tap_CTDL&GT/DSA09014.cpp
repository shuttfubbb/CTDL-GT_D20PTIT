#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];
int vs[1001];
int v, e;

bool DFS(int node, int par)
{
	vs[node] = 1;
	for(int i=1; i<=v; ++i)
	{
		if(a[node][i] == 1 && vs[i] == 0)
		{
			if(DFS(i, node))
				return true;
		}
		else if(a[node][i] == 1 && i != par)
		{
			return true;
		}
	}
	return false;
}


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		memset(a, 0, sizeof(a));
		memset(vs, 0, sizeof(vs));
		cin >> v >> e;
		for(int i=1; i<=e; ++i)
		{
			int x, y;
			cin >> x >> y;
			a[x][y] = 1;
			a[y][x] = 1;
		}
		if(DFS(1,0))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
 	return 0;
}

