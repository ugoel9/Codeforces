#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll casefirst2(ll x, ll y, ll z)
{
    if (x == y && y == z)
        return 1;
    return 0;
}
ll casezero(ll a, ll x, ll b, ll y, ll c, ll z)
{
    if (a == x && b == y && c == z)
        return 1;
    return 0;
}
ll casefirst1(ll a, ll x, ll b, ll y)
{
    if (a == x && b == y)
        return 1;
    return 0;
}
int q;
ll casefirst3(ll a, ll x, ll b, ll y, ll c, ll z)
{
    if (a == x)
    {
        q = 1;
        if ((y - b) == (z - c))
        {
            return 1;
        }
        if (((b != 0) && (c != 0)) && (y % b == 0) && (z % c == 0) && (y / b) == (z / c))
        {
            return 1;
        }
    }
    return 0;
}
ll casesecond1(ll a, ll x, ll b, ll y, ll c, ll z)
{
    ll ad = x - a;
    a = a + ad;
    return (casefirst3(a, x, b + ad, y, c, z) || casefirst3(a, x, b, y, c + ad, z) || casefirst3(a, x, b + ad, y, c + ad, z) || casefirst3(a, x, b, y, c, z));
}
ll casesecond2(ll a, ll x, ll b, ll y, ll c, ll z)
{
    ll am;
    if (a == 0)
        return 0;
    if (x % a == 0)
    {
        am = x / a;
    }
    a = a * am;
    return casefirst3(a, x, b * am, y, c, z) || casefirst3(a, x, b, y, c * am, z) || casefirst3(a, x, b * am, y, c * am, z) || casefirst3(a, x, b, y, c, z);
}
ll casesecond3(ll x, ll y, ll z)
{
    if (x + y == z)
        return 1;
    return 0;
}
ll casesecond4(ll x, ll y, ll z)
{
    if (x * y == z)
        return 1;
    return 0;
}
ll casesecond5(ll d, ll a, ll x, ll b, ll y)
{
    ll n1 = x - d;
    ll n2 = y - d;
    if ((a != 0) && (n1 % a == 0) && (b != 0) && (n2 % b == 0) && (n1 / a == n2 / b))
    {
        return 1;
    }
    n1 = a + d;
    n2 = b + d;
    if ((n1 != 0) && (x % n1 == 0) && (n2 != 0) && (y % n2 == 0) && (x / n1 == y / n2))
    {
        return 1;
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ans = 3;
        q = -1;
        ll a, b, c, x, y, z;
        cin >> a >> b >> c >> x >> y >> z;
        if (casezero(a, x, b, y, c, z))
        {
            ans = min(ans, 0);
        }
        if (casefirst1(a, x, b, y) || casefirst1(a, x, c, z) || casefirst1(b, y, c, z))
        {
            ans = min(ans, 1);
        }
        if (casefirst2(a - x, b - y, c - z) || casefirst2(x - a, y - b, z - c) || (((a != 0) && (x % a == 0) && (b != 0) && (y % b == 0) && (c != 0) && (z % c == 0)) && casefirst2(x / a, y / b, z / c)))
        {
            ans = min(ans, 1);
        }
        if (casefirst2(x, y, z))
        {
            if (x != 0)
            {
                ans = min(ans, 2);
            }
            else
            {
                ans = min(ans, 1);
            }
        }
        if (casefirst3(a, x, b, y, c, z) || casefirst3(b, y, a, x, c, z) || casefirst3(c, z, a, x, b, y))
        {
            ans = min(ans, 1);
        }
        if (q == 1)
        {
            ans = min(ans, 2);
        }
        if (casesecond1(a, x, b, y, c, z) || casesecond1(b, y, a, x, c, z) || casesecond1(c, z, a, x, b, y))
        {
            ans = min(ans, 2);
        }
        if (casesecond2(a, x, b, y, c, z) || casesecond2(b, y, a, x, c, z) || casesecond2(c, z, a, x, b, y))
        {
            //cout<<casesecond2(a,x,b,y,c,z)<<casesecond2(b,y,a,x,c,z)<<casesecond2(c,z,a,x,b,y);
            ans = min(ans, 2);
        }
        if (casesecond3(x - a, y - b, z - c) || casesecond3(x - a, z - c, y - b) || casesecond3(y - b, z - c, x - a))
        {
            ans = min(ans, 2);
        }
        if (((a != 0) && (x % a == 0) && (b != 0) && (y % b == 0) && (c != 0) && (z % c == 0)) && (casesecond4(x / a, y / b, z / c) || casesecond4(x / a, z / c, y / b) || casesecond4(y / b, z / c, x / a)))
        {
            ans = min(ans, 2);
        }
        if (casesecond5(x - a, b, y, c, z) || casesecond5(y - b, a, x, c, z) || casesecond5(z - c, a, x, b, y))
        {
            ans = min(ans, 2);
        }
        ll m, r;
        ll ab = 0;
        if (a != b && (x - y) % (a - b) == 0)
        {
            m = (x - y) / (a - b);
            r = x - a * m;
            ab = 1;
        }
        if (ab)
        {
            if ((c * m + r) == z)
            {
                ans = min(ans, 2);
            }
        }
        ll ab2 = 0;
        ll m1, r1;
        if (x != y && (b * x - a * y) % (y - x) == 0)
        {
            r1 = (b * x - a * y) / (y - x);
            if ((a + r1) != 0 && x % (a + r1) == 0)
            {
                m1 = x / (a + r1);
                ab2 = 1;
            }
        }
        if (ab2)
        {
            if ((c + r1) * m1 == z)
            {
                ans = min(ans, 2);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}