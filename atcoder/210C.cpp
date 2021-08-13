#include <bits/stdc++.h>
using namespace std;
/*Read Question Fully*/
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n, 0);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i < k)
        {
            mp[v[i]]++;
        }
    }

    int ans = mp.size();
    for (int i = k; i < n; i++)
    {
        mp[v[i]]++;
        mp[v[i - k]]--;
        if (mp[v[i - k]] == 0)
        {
            mp.erase(v[i - k]);
        }
        if (mp.size() > ans)
        {
            ans = mp.size();
        }
    }
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}