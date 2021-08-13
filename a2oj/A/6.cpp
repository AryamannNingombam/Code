#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define pb push_back
using namespace std;
/*Read Question Fully*/
bool tr(ll a,ll b,ll c){
    return ((a+b>c)&&(a+c>b)&&(b+c>a));
}
bool seg(ll a,ll b,ll c){
    return ((a+b==c)||(a+c==b)||(b+c==a));
}
void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    bool norm=false;
    bool deg=false;
    norm=norm||(tr(a,b,c));
    norm=norm||(tr(a,b,d));
    norm=norm||(tr(a,c,d));
    norm=norm||(tr(b,c,d));
    deg=deg||(seg(a,b,c));
    deg=deg||(seg(a,b,d));
    deg=deg||(seg(a,c,d));
    deg=deg||(seg(b,c,d));
    if(norm){
        cout<<"TRIANGLE"<<endl;
    }
    else if(deg){
        cout<<"SEGMENT"<<endl;
    }
    else cout<<"IMPOSSIBLE"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}