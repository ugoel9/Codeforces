#include <stdio.h>
#include <string.h>
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
    string s1;
    cin >> s1;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    string ans = "";
    int i;
    reps(i, s1.size())
    {
        if (s1[i] == 'e' || s1[i] == 'a' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' || s1[i] == 'y')
        {
        }
        else
        {
            ans = ans + '.' + s1[i];
        }
    }
    cout << ans << endl;
}