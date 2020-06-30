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
    ll n, i, cs1, cs2;
    cin >> n;
    cs1 = cs2 = 0;
    string s1, s2;
    vector<string> s;
    string temp;
    cin >> temp;
    s.push_back(temp);
    s1 = s[0];
    reps(i, n - 1)
    {
        cin >> temp;
        s.push_back(temp);
        if (temp != s1)
        {
            s2 = temp;
        }
    }
    reps(i, n)
    {
        if (s[i] == s1)
        {
            cs1++;
        }
        else
        {
            cs2++;
        }
    }
    if (cs1 > cs2)
    {
        cout << s1 << endl;
    }
    else
    {
        cout << s2 << endl;
    }
}