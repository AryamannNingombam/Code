#include <bits/stdc++.h>
#define int long long
using namespace std;
/*Read Question Fully*/
void solve()
{
    int h,w,c;
    cin>>h>>w>>c;
    vector<vector<int>>v(h,vector<int>(w,0));
    for (int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++){
            cin>>v[i][j];
        }
    }
    int ans = INT_MAX;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            for(int p=i;p<h; p++){
                for(int q=j+1;q< w; q++){
                    int temp=v[i][j]+v[p][q];
                    temp+=c*(abs(i-p)+abs(j-q));
                    ans=min(ans,temp);
                }
            }
        }
    }
    cout<<ans;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}