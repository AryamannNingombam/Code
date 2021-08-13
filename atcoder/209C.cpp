#include <bits/stdc++.h>
#define int long long
using namespace std;
/*Read Question Fully*/
void solve()
{
    int n;
    cin >> n;
    vector<int> c(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    sort(c.begin(), c.end());
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans = (ans * (c[i] - i)) % 1000000007;
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