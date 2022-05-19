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
int n,a[N],b[N];
int t[N];
void upd(int x){
    for(;x <= n; x += x & -x)++t[x];
}
int sum(int x){
    int res = 0;
    for(;x > 0; x -= x & -x)res += t[x];
    return res;
}
vector <int> v[N];
int ans;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    rep(i,1,n)cin >> a[i];
    rep(i,1,n){
        cin >> b[i];
        v[min(n,i + b[i])].pb(i);
    }
    rep(i,1,n){
        rep(j,i+1,n){
            if(i + b[i] >= j && j - a[j] <= i){
                cout << i << ' ' << j << '\n';
            }
        }
    }
    per(i,n,1){
        for(int x : v[i]){
            upd(x);
        }
        ans += sum(i-1) - sum(i - a[i] - 1);
    }//for the second task, change BIT to segtree to get the rangemax
    cout << ans << '\n';
    return 0;
}