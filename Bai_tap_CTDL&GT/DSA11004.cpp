#include <bits/stdc++.h>
using namespace std;

int a[10000];
int num;

int find(int val)
{
	for(int i=0; i<num; ++i)
		if(a[i] == val)
			return i;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		memset(a, 0, sizeof(a));
		cin >> num;
		for(int i=1; i<=num; ++i)
		{
			int u, v;
			char x;
			cin >> u >> v >> x;
			if(i == 1)
				a[0] = u;
			int index = find(u);
//			cout << u <<" " << i << " " << index << endl;
			if(x == 'L')
				a[2 * index + 1] = v;
			else
				a[2 * index + 2] = v;
		}
		int i = 0;
		int check = 0;
		while(check != num+1)
		{
			if(a[i])
			{
				cout << a[i] << " ";
				++check;
			}
			++i;
		}
		cout << endl;
	}
 	return 0;
}

