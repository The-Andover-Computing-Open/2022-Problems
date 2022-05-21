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
const int N = 1005,inf = 0x3f3f3f3f;
int n,m,T;
vector <pii> G[N];
int dis[N][N];
priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>>> pq;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m >> T;
    rep(i,1,m){
        int a,b,x;
        cin >> a >> b >> x;
        G[a].pb({b,x});
        G[b].pb({a,x});
    }
    int ans = inf;
    memset(dis,inf,sizeof(dis));
    dis[1][0] = 0;
    pq.push({0,1,0});
    while(!pq.empty()){
        auto now = pq.top();pq.pop();
        int c = get<0>(now),u = get<1>(now),d = get<2>(now);
        if(d>n) continue;
        for(auto E : G[u]){
            int v = E.fi,x = E.se;
            int nc = c + d * x;
            int nd = d;
            if(x > 0)++nd;
            if(nc < dis[v][nd]){
                dis[v][nd] = nc;
                pq.push({nc,v,nd});
            }
        }
    }
    rep(i,0,n+4)ans = min(ans,dis[T][i]);
    if(ans == inf)cout << -1 << '\n';
    else cout << ans << '\n';
    return 0;
}