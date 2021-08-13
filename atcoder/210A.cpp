#include <bits/stdc++.h>
#define int long long
using namespace std;
/*Read Question Fully*/
void solve()
{
    int n, a, x, y;
    cin >> n >> a >> x >> y;
    if (a > n)
    {
        cout << x * n;
    }
    else
        cout << (x * a) + ((n - a) * y);
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}