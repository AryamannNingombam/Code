#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define pb push_back
using namespace std;
/**************************************************************/
void solve()
{
    
        ll n, m, a,r=0,c=0;
        cin >> n >> m >> a;
        if(!(n%a)){
            c=n/a;
        }
        else{
            c=1+(n/a);
        }
        if(!(m%a)){
            r=m/a;
        }
        else{
            r=1+(m/a);
        }
        // cout<<r<<c;
        cout<<r*c<<endl;
    
}
/**************************************************************/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}