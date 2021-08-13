#include <bits/stdc++.h>
#define int long long
using namespace std;
/*Read Question Fully*/
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c;
    cout << max(max(a + b, b + c), a + c);
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}