#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		scanf("\n");
		stack<char> myst;
		string str;
		getline(cin, str);
		bool in = true;
		for(int i=0; i<str.size(); ++i)
		{
			char c = str[i];
			if(c == ')')
			{
				bool check = true;
				while(myst.top() != '(')
				{
					char tmp = myst.top();
					if(tmp == '+' || tmp == '-' || tmp == '*' || tmp == '/' )
						check = false;
					myst.pop();
				}
				if(check)
				{
					cout << "Yes\n";
					in = false;
					break;
				}
				myst.pop();
			}
			else
				myst.push(c);
		}
		if(in)
			cout << "No\n";
	}
 	return 0;
}

