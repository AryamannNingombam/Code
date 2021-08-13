#include <bits/stdc++.h>
#define int long long
using namespace std;
/*Read Question Fully*/
void solve()
{
    int n, x;
    cin >> n >> x;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        if (i % 2 != 0)
        {
            e--;
        }
        sum += e;
    }
    if (sum <= x)
        cout << "Yes";
    else
        cout << "No";
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}