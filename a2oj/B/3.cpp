#include <bits/stdc++.h>
#define int long long
using namespace std;
/*Read Question Fully*/
void solve()
{
    string s;
    cin >> s;
    string ans = "";
    if (s == ".")
    {
        cout << "0" << endl;
    }
    else
    {
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i - 1] == '.')
            {
                ans += '0';
            }
            else if (s[i - 1] == s[i])
            {
                ans += '2';
                i++;
            }
            else
            {
                ans += '1';
                i++;
            }
            if (i == s.size() - 1 && s[i] == '.')
            {
                ans += '0';
                i++;
            }
        }

        cout << ans << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}