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
    string ans = "";
    string temp = "";
    int i;
    reps(i, s.size())
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B' && i < s.size() - 2)
        {
            if (temp != "")
            {
                ans = ans + temp;
                temp = "";
            }
            if (ans != "" && ans[ans.size() - 1] != ' ')
            {
                ans = ans + " ";
            }
            i = i + 2;
        }
        else
        {
            temp = temp + s[i];
        }
    }
    // cout << temp << endl;
    if (temp != "")
    {
        ans = ans + temp;
    }
    cout << ans << endl;
}