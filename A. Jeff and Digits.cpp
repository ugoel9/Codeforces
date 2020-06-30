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
    ll a[n];
    ll c0, c5;
    c0 = c5 = 0;
    reps(i, n)
    {
        cin >> a[i];
        if (a[i] == 5)
        {
            c5++;
        }

        else
        {
            c0++;
        }
    }
    string s = "";
    int temp = c5 % 9;
    c5 = c5 - temp;
    reps(i, c5)
    {
        s = s + '5';
    }
    reps(i, c0)
    {
        s = s + '0';
    }
    if (c5 == 0)
    {
        if (c0 == 0)
        {
            s = "-1";
        }
        else
        {
            s = "0";
        }
    }
    if (c0 == 0)
    {
        s = "-1";
    }

    cout << s << endl;
}
