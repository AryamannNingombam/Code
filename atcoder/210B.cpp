#include <bits/stdc++.h>
#define int long long
using namespace std;
/*Read Question Fully*/
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0;
    for (; i < n; i++)
    {
        if (s[i] == '1')
        {
            break;
        }
    }
    if (i % 2 == 0)
    {
        cout << "Takahashi";
    }
    else
    {
        cout << "Aoki";
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}