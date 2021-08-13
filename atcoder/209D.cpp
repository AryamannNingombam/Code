#include <bits/stdc++.h>
#define int long long
using namespace std;
/*Read Question Fully*/

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> adj[n + 1];
    vector<int> color(n + 1, -1);
    vector<int> vis(n + 1, 0);

    for (int i = 1; i <= n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    queue<int> qu;
    qu.push(1);
    color[1] = 0;
    while (!qu.empty())
    {
        auto x = qu.front();
        qu.pop();
        if(vis[x]) continue;
        vis[x]=1;
        for(auto y:adj[x]){
            if(!vis[y]){
                color[y]=1^color[x];
                qu.push(y);
            }
        }
    }

    for (int i = 1; i <= q; i++)
    {
        int src, dest;
        cin >> src >> dest;
        if (color[src] == color[dest])
        {
            cout << "Town" << endl;
        }
        else
        {
            cout << "Road" << endl;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}