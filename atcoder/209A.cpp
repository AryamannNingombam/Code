#include <bits/stdc++.h>
using namespace std;
/*Read Question Fully*/
void solve()
{
    int a, b;
    cin >> a >> b;
    cout << max(0, b - a + 1);
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}