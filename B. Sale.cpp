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
    ll n, m, i, sum;
    sum = 0;
    cin >> n >> m;
    int a[n];
    reps(i, n) { cin >> a[i]; }
    sort(a, a + n);
    reps(i, m)
    {
        if (a[i] < 0)
        {
            sum = sum + a[i];
        }
    }
    sum = abs(sum);
    cout << sum << endl;
}