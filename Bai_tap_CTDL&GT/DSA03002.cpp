#include <bits/stdc++.h>
using namespace std;

int cv_num(string str)
{
    int ans = 0;
    for(auto it : str)
    {
        ans *= 10;
        ans += (it - '0');
    }
    return ans;
}

string xuly_6(string str)
{
    for(int i=0; i<str.length(); ++i)
        if(str[i] == '5')
            str[i] = '6';
    return str;
}

string xuly_5(string str)
{
    for(int i=0; i<str.length(); ++i)
        if(str[i] == '6')
            str[i] = '5';
    return str;
}

int main()
{
    string a, b, maxa, maxb, mina, minb;
    cin >> a >> b;
    maxa = mina = a;
    maxb = minb = b;
    maxa = xuly_6(maxa);
    maxb = xuly_6(maxb);
    mina = xuly_5(mina);
    minb = xuly_5(minb);
    int ma = cv_num(maxa), mb = cv_num(maxb), ia = cv_num(mina), ib = cv_num(minb);
//    cout << ia << " " << ib << " " << ma << " " << mb << endl;
    cout << ia + ib << " " << ma + mb;
    return 0;
}