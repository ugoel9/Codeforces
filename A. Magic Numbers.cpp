#include <bits/stdc++.h>
using namespace std;
#define floops(i, a, b) for (i = a; i < b; i++)
#define reps(i, n) floops(i, 0, n)
#define floope(i, a, b) for (i = a; i >= b; i--)
#define repe(i, n) floope(i, n - 1, 0)
#define ll long long int
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
int main()
{

    string s;
    cin >> s;
    int flag = 0;
    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] != '1' && s[i] != '4')
        {
            flag = 1;
            break;
        }
    }
    // cout << flag << endl;
    if (s[0] != '1')
    {
        flag = 1;
    }
    if (s.find("444") != s.npos)
    {
        flag = 1;
    }
    if (flag == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
