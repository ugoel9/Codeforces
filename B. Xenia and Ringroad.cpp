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
    ll n, m;
    cin >> n >> m;
    ll a[m];
    ll i, j, count = 0;
    reps(i, m)
    {
        cin >> a[i];
    }

    reps(i, m - 1)
    {
        if (i == 0)
        {
            count = count + a[i] - 1;
        }
        if (a[i + 1] >= a[i])
        {
            count = count + a[i + 1] - a[i];
        }
        else
        {
            ll temp;
            temp = n - a[i] + a[i + 1];
            count = count + temp;
        }
        //cout << count << " ";
    }
    cout << count << endl;
}
