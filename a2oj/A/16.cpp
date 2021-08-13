#include <bits/stdc++.h>
#define int long long
using namespace std;
/*Read Question Fully*/
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m, 0);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    int mnans = INT_MAX;
    sort(v.begin(), v.end());
    for (int i = n - 1; i < m; i++)
    {
        mnans = min(v[i] - v[i - (n - 1)], mnans);
    }
    cout << mnans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}