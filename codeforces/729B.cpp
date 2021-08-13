#include <bits/stdc++.h>
#define int long long
using namespace std;
/*Read Question Fully*/
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        queue<int> q;
        q.push(1);
        int x = 1;
        int flag = 0;
        while (x!=0)
        {
            x = q.front();
            // cout<<x<<" ";
            if (x == n)
            {
                flag = 1;
                break;
            }
            q.pop();
            q.push(a * x);
            q.push(x + b);
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            
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