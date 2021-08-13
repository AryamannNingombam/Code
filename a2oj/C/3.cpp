#include <bits/stdc++.h>
#define int long long
using namespace std;
/*Read Question Fully*/
void solve()
{
    int n;
    cin >> n;
    int cnt4 = 0;
    int cnt7 = 0;
    int flag = 0;
    while (n >= 0)
    {
        if ((n % 7) == 0)
        {
            cnt7 = n / 7;
            break;
        }
        if (n < 4)
        {
            flag = 1;
            break;
        }
        n = n - 4;
        cnt4++;
    }
    if (flag == 0)
    {
        for (int i = 0; i < cnt4; i++)
            cout << "4";
        for (int i = 0; i < cnt7; i++)
            cout << "7";
    }
    else
    {
        cout << -1;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}