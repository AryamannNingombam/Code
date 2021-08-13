#include <bits/stdc++.h>
#define int long long
using namespace std;
/*Read Question Fully*/
void solve()
{
    int n, w;
    cin >> n >> w;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int sum = 0;
    sort(v.begin(), v.end());
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < 0)
        {
            sum += abs(v[i]);
            cnt++;
        }
        if (cnt == w)
            break;
    }
    cout << sum << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}