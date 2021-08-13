#include <bits/stdc++.h>
#define int long long
using namespace std;
/*Read Question Fully*/
void solve()
{
    int n, m, a, b,ans = 0;
    cin >> n >> m >> a >> b;
    if (m / b < a)
    {
        int x = n / m;
        int y = n % m;
        ans = x * b + y * a;
    }
    else
    {
        ans = a * n;
    }
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}