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
    string s1, s2, out;
    cin >> s1 >> s2;
    out = "";
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == s2[i])
        {
            out = out + '0';
        }
        else
        {
            out = out + '1';
        }
    }
    cout << out << endl;
}
