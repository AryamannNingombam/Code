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
        string s;
        cin >> s;
        if (s.size() == 1)
        {
            if (s[0] == 'a')
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            continue;
        }

        deque<char> dq;
        for (auto x : s)
        {
            dq.push_back(x);
        }

        char x;
        if (dq.front() > dq.back())
        {
            x = dq.front();
            dq.pop_front();
        }
        else if (dq.front() < dq.back())
        {
            x = dq.back();
            dq.pop_back();
        }
        else
        {
            cout << "NO" << endl;
            continue;
        }

        int flag = 0;
        while (!dq.empty())
        {
            if (x - dq.front() == 1)
            {
                x = dq.front();
                dq.pop_front();
            }
            else if (x - dq.back() == 1)
            {
                x = dq.back();
                dq.pop_back();
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            if (x == 'a')
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
            continue;
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