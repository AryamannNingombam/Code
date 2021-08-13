#include <bits/stdc++.h>
// #define int long long
using namespace std;
/*Read Question Fully*/
void solve()
{
    int t;
    cin >> t;

    while (t--)
    {

        int k, n, m;
        cin >> k >> n >> m;

        vector<int> a(n, 0);
        vector<int> b(m, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        vector<int> ans;

        int i = 0;
        int j = 0;
        int flag = 0;

        while (i < n && j < m)
        {
            if (a[i] < b[j])
            {
                ans.push_back(a[i]);
                if (a[i] == 0)
                {
                    k++;
                }
                else
                {
                    if (a[i] > k)
                    {
                        flag = 1;
                        break;
                    }
                }
                i++;
            }
            else
            {
                ans.push_back(b[j]);
                if (b[j] == 0)
                {
                    k++;
                }
                else
                {
                    if (b[j] > k)
                    {
                        flag = 1;
                        break;
                    }
                }
                j++;
            }
        }
        // cout << "f=" << flag << endl;

        while (i < n)
        {
            ans.push_back(a[i]);
            if (a[i] == 0)
            {
                k++;
            }
            else
            {
                if (a[i] > k)
                {
                    flag = 1;
                    break;
                }
            }

            i++;
        }

        while (j < m)
        {
            ans.push_back(b[j]);
            if (b[j] == 0)
            {
                k++;
            }
            else
            {
                if (b[j] > k)
                {
                    flag = 1;
                    break;
                }
            }
            j++;
        }

        if (flag == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            for (auto x : ans)
                cout << x << " ";

            cout << endl;
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