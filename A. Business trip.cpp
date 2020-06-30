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

    ll n;
    cin >> n;
    ll i, sum = 0, count = 0;
    ll a[12];
    reps(i, 12)
    {
        cin >> a[i];
    }
    sort(a, a + 12);
    repe(i, 12)
    {
        if (sum < n)
        {
            sum = sum + a[i];
            count++;
        }
        else
        {
            break;
        }
    }
    if (sum < n)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << count << endl;
    }
}