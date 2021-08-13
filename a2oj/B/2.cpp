#include <bits/stdc++.h>
#define int long long
using namespace std;
/*Read Question Fully*/
void solve()
{
    int d, sum;
    cin >> d >> sum;
    int sumx = 0;
    int sumy = 0;
    vector<int> vx;
    vector<int> vy;
    vector<int> diff;
    for (int i = 0; i < d; i++)
    {
        int x, y;
        cin >> x >> y;
        vx.push_back(x);
        vy.push_back(y);
        diff.push_back(y - x);
        sumx += x;
        sumy += y;
    }
    if (sum <= sumy && sum >= sumx)
    {
        //lies between the two sums
        cout << "YES" << endl;
        sum -= sumx;
        for (int i = 0; i < d; i++)
        {
            if (sum - diff[i] >= 0)
            {
                sum -= diff[i];
                vx[i] = vy[i];
            }
            else
            {
                vx[i] += sum;
                break;
            }
        }
        for (auto x : vx)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}