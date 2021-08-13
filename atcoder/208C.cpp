#include <bits/stdc++.h>
#define int long long
#define pi pair<int, int>
using namespace std;
/*Read Question Fully*/
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n, 0);
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int t = k / n;
    k = k % n;
    priority_queue<pi, vector<pi>, greater<pi>> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push({v[i], i});
    }
    for (int i = 0; i < k; i++)
    {
        auto x = pq.top();
        pq.pop();

        a[x.second]++;
    }
    for (auto x : a)
    {
        cout << x + t << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}