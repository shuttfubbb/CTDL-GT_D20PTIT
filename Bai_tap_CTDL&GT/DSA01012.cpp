#include <bits/stdc++.h>
using namespace std;

int n;
int a[1000];

void in()
{
	for(int i=1; i<=n; ++i)
		cout << a[i];
	cout << " ";
}

void sinh(int i)
{
	for(int j=0; j<=1; ++j)
	{
		a[i] = (a[i] + j) % 2;
		if(i == n)
			in();
		else
			sinh(i+1);
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		memset(a, 0, sizeof(a));
		cin >> n;
		sinh(1);
		cout << endl;
	}
 	return 0;
}

