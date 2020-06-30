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
    ll mx = max(sqrt(n), sqrt(m));
    ll i, j, count;
    count = 0;
    // cout << mx;
    reps(i, mx + 1)
    {
        reps(j, mx + 1)
        {
            int t1, t2;
            t1 = (i * i) + j;
            t2 = (j * j) + i;
            if (t1 == n && t2 == m)
            {
                count++;
            }
        }
    }
    cout << count << endl;
}