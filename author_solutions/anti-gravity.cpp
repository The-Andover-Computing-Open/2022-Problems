#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=(a);i<=(b);++i)
#define per(i,a,b) for(int i=(a);i>=(b);--i)
#define pii pair<int,int>
#define vi vector<int>
#define fi first
#define se second
#define pb push_back
#define ALL(x) x.begin(),x.end()
#define sz(x) int(x.size())
#define ll long long
using namespace std;
const int N = 2e5 + 5;
int n,m;
struct segment{
    int l,r;
}a[N];
bool cmp(segment a,segment b){
    return a.l < b.l;
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    n += m;
    rep(i,1,n){
        int x,len;
        cin >> x >> len;
        a[i] = {x,x + len - 1};
    }
    int ans = a[1].r;
    sort(a + 1,a + n + 1,cmp);
    rep(i,2,n){
        if(a[i].l > ans)break;
        ans = max(ans,a[i].r);
    }
    cout << ans << '\n';
    return 0;
}