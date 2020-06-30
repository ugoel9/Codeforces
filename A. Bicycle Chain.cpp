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
    int n, m, i, j;
    cin >> n;
    int a[n];
    reps(i, n) { cin >> a[i]; }
    cin >> m;
    int b[m];
    reps(i, m) { cin >> b[i]; }
    int max = 0;
    vector<int> v;
    reps(i, n)
    {
        reps(j, m)
        {
            if (b[j] % a[i] == 0 && (b[j] / a[i]) > max)
            {
                max = b[j] / a[i];
            }
            if (b[j] % a[i] == 0)
            {
                v.pb(b[j] / a[i]);
            }
        }
    }
    int count = 0;
    reps(i, v.size())
    {
        if (max == v[i])
        {
            count++;
        }
    }

    cout << count << endl;
}