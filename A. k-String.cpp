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

    ll n, i;
    cin >> n;
    string s;
    cin >> s;
    int a[26] = {0};
    reps(i, s.size())
    {
        int t = s[i] - 'a';
        a[t]++;
    }
    int flag = 0;
    reps(i, 26)
    {
        if (a[i] % n != 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "-1" << endl;
    }
    else
    {
        string temp = "";
        reps(i, 26)
        {
            int t1 = a[i] / n;
            // cout << a[i] << " ";
            int j;
            char t = i + 'a';
            reps(j, t1)
            {
                temp = temp + t;
            }
        }
        // cout << endl;
        // cout << temp;
        string ans = "";
        reps(i, n)
        {
            ans = ans + temp;
        }
        cout << ans << endl;
    }
}