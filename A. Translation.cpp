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

    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length();
    int flag = 0;
    if (s1.length() != s2.length())
    {
        flag = 1;
    }
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[n - 1 - i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
