#include <bits/stdc++.h>
#define int long long
using namespace std;
/*Read Question Fully*/
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int k = 0;
    if (d * c - b == 0)
    {
        cout << "-1";
    }
    else if ((a / (d * c - b)) < 0)
    {
        cout << "-1";
    }
    else
    {
        while (1)
        {
            if ((a + (k * b)) <= (d * k * c))
            {
                break;
            }
            else
            {
                k++;
            }
                }
        cout << k << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}