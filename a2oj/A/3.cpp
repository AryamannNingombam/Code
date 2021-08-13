#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define pb push_back
using namespace std;
/*Read Question Fully*/
void solve()
{
    string str1, str2;
    cin >> str1;
    cin >> str2;
    int x1, y1, x2, y2;
    y1 = str1[0] - 'a' + 1;
    x1 = 9 - (str1[1] - '0');
    y2 = str2[0] - 'a' + 1;
    x2 = 9 - (str2[1] - '0');
    // cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
    int moves = max(abs(x1 - x2), abs(y1 - y2));
    cout << moves << endl;
    int diag = min(abs(x1 - x2), abs(y1 - y2));
    int leftout = moves - diag;
    for (int i = 0; i < diag; i++)
    {
        if (x1 > x2 && y1 < y2)
        {
            cout << "RU" << endl;
        }
        else if (x1 > x2 && y1 > y2)
        {
            cout << "LU" << endl;
        }
        else if (x1 < x2 && y1 > y2)
        {
            cout << "LD" << endl;
        }
        else if (x1 < x2 && y1 < y2)
        {
            cout << "RD" << endl;
        }
    }
    if (x1 > x2 && y1 < y2)
    {
        // cout << "RU" << endl;
        x1 -= diag;
        y1 += diag;
    }
    if (x1 > x2 && y1 > y2)
    {
        // cout << "LU" << endl;
        x1 -= diag;
        y1 -= diag;
    }
    if (x1 < x2 && y1 > y2)
    {
        // cout << "LD" << endl;
        x1 += diag;
        y1 -= diag;
    }
    if (x1 < x2 && y1 < y2)
    {
        // cout << "RD" << endl;
        x1 == diag;
        y1 += diag;
    }
    for (int i = 0; i < leftout; i++)
    {
        if (y1 > y2)
        {
            cout << "L" << endl;
        }
        else if (y2 > y1)
        {
            cout << "R" << endl;
        }
        else if (x1 > x2)
        {
            cout << "U" << endl;
        }
        else if (x2 > x1)
        {
            cout << "D" << endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}