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

        int srcx = 0, srcy = 0, dstx = 0, dsty = 0, obx = 0, oby = 0;

        cin >> srcx >> srcy;
        cin >> dstx >> dsty;
        cin >> obx >> oby;

        int ans = abs(srcx - dstx) + abs(srcy - dsty);

        if (srcx != obx && dstx != obx && srcy != oby && dsty != oby)
        {
            cout << ans << endl;
        }
        else
        {
            if ((srcx == obx && dstx == obx && oby >= min(srcy, dsty) && oby <= max(dsty, srcy)) || (srcy == oby && dsty == oby && obx >= min(srcx, dstx) && obx <= max(dstx, srcx)))
            {
                cout << ans + 2 << endl;
            }
            else
            {
                cout << ans << endl;
            }
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