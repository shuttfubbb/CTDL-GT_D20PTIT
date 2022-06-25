#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string str;
		stack<string> mystC, mystO;
		scanf("\n");
		getline(cin, str);
		reverse(str.begin(), str.end());
		for(auto c : str)
		{
			if(c >= 'A' && c <= 'Z')
				mystC.push(string(1, c));
			else if(c == '+' || c == '-' || c == '*' || c == '/')
				mystO.push(string(1, c));
			else if(c == '(')
			{
				string a = mystC.top(); mystC.pop();
				string b = mystC.top(); mystC.pop();
				string c = mystO.top(); mystO.pop();
				mystC.push(a + b + c);
			}
		}
		cout << mystC.top() << endl;
	}
 	return 0;
}

