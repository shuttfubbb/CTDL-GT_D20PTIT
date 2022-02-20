#include <bits/stdc++.h>
using namespace std;

int a[100000];
string mystr;

void xautiep()
{
    int i = mystr.size()-1;
    while(mystr[i] != '0' && i >= 0)
        --i;
    if(i == -1)
    {
        for(int j=0; j<mystr.size(); ++j)
            cout << 0;
        cout << endl; 
    }
    else
    {
        mystr[i] = '1';
        i++;
        for(i; i<mystr.size(); ++i)
            mystr[i] = '0';
        cout << mystr << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        mystr.clear();
        cin >> mystr;
        xautiep();
    }
    return 0;
}