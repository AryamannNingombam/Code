#include <bits/stdc++.h>
#define int long long
using namespace std;
/*Read Question Fully*/
void solve()
{
    int n;
    cin >> n;
    vector<bool> seive(n + 1, 0);
    //0->prime
    unordered_map<int, vector<int>> mp;
    seive[0] = 1;
    seive[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        if (seive[i] == 0)
        {
            for (int j = 1; j * i <= n; j++)
            {
                seive[i * j] = 1;
                mp[i * j].push_back(i);
            }
        }
    }
    int cnt = 0;
    for (auto x : mp)
    {
        if (x.second.size() == 2)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}