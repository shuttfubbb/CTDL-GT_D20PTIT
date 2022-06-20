#include <bits/stdc++.h>
using namespace std;

/*
----------------------DIJKSTRA---------------------
*/

int a[1001][1001];
int T[1001];
int d[1001];
int pre[1001];
int v, e, s;
const int MAX = 1000000007;
int cnt = 0;

bool check()
{
	for(int i=1; i<=v; ++i)
		if(T[i] == 0)
			return true;
	return false;
}

int main()
{
	int t;
	cin >> t;
	while(t--) 
	{
		for(int i=0; i<1001; ++i)
			for(int j=0; j<1001; ++j)
				a[i][j] = MAX;
		memset(T, 0, sizeof(T));
		memset(d, 0, sizeof(d));
		memset(pre, 0, sizeof(pre));
		cin >> v >> e >> s;
		for(int i=1; i<=e; ++i)
		{
			int x, y, num;
			cin >> x >> y >> num;
			a[x][y] = num;
		}
		for(int i=1; i<=v; ++i)
		{
			d[i] = a[s][i];
			pre[i] = s;
		}
		d[s] = 0;
		T[s] = 1;
		while(check())
		{
			// Tim node co d[node] be nhat
 			int min = MAX;
			int node = 0;
			for(int i=1; i<=v; ++i)
			{
				if(min > d[i] && T[i] == 0)
				{
					min = d[i];
					node = i;
				}
			}
			T[node] = 1;// Co dinh nhan 
			for(int i=1; i<=v; ++i)
			{
				if(d[i] > d[node] + a[node][i] && T[i] == 0 && a[node][i] != MAX)
				{
					d[i] = d[node] + a[node][i];
					pre[i] = node;
				}
			}
		}
		for(int i=1; i<=v; ++i)
			cout << d[i] << " ";
		cout << endl;
	}
 	return 0;
}

