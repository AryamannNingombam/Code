#include <bits/stdc++.h>
#define int long long
using namespace std;
/*Read Question Fully*/
void solve()
{
    int p;
    cin >> p;
    vector<int> v(11, 0);
    v[1] = 1;
    v[2] = 2;
    v[3] = 6;
    v[4] = 24;
    v[5] = 120;
    v[6] = 720;
    v[7] = 5040;
    v[8] = 40320;
    v[9] = 362880;
    v[10] = 3628800;
    int cnt = 0;
    int i = 10;
    while (i != 0)
    {
        cnt += p / v[i];
        p = p % v[i];
        i--;
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