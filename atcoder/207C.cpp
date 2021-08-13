#include <bits/stdc++.h>
#define int long long
using namespace std;
/*Read Question Fully*/
bool check(pair<int, int> p1, pair<int, int> p2, int t1, int t2)
{
    if (p1.second > p2.second)
    {
        auto x = p1;
        p1 = p2;
        p2 = x;
        int t = t1;
        t1 = t2;
        t2 = t;
    }
    //p2.second>=p1.second
    if ((t1 == 1 && t2 == 1) || (t1 == 3 && t2 == 2) || (t1 == 1 && t2 == 2) || (t1 == 3 && t2 == 1))
    {
        if (p1.second >= p2.first)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if (p1.second > p2.first)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
void solve()
{
    int ans = 0;
    int N;
    cin >> N;
    vector<int> tarr;
    vector<pair<int, int>> vp;
    for (int i = 0; i < N; i++)
    {
        int t, l, r;
        cin >> t >> l >> r;
        tarr.push_back(t);
        vp.push_back({l, r});
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            //check if 2 pairs are intersecting
            int temp = check(vp[i], vp[j], tarr[i], tarr[j]);
            ans += temp;
        }
    }
    cout << ans;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}