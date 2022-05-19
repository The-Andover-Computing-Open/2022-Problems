#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=(a);i<=(b);++i)
#define per(i,a,b) for(int i=(a);i>=(b);--i)
#define pii pair<int,int>
#define vi vector<int>
#define fi first
#define se second
#define pb push_back
#define debug(...) fprintf(stderr, __VA_ARGS__)
#define ALL(x) x.begin(),x.end()
#define sz(x) int(x.size())
#define ll long long
using namespace std;
inline ll read(){
    ll x=0,f=1;char ch=getchar();
    while (!isdigit(ch)){if (ch=='-') f=-1;ch=getchar();}
    while (isdigit(ch)){x=x*10+ch-48;ch=getchar();}
    return x*f;
}
const int N=2e5+5;
struct node{
    int x,y,val;
    bool operator <(const node &w)const{
        return val > w.val;
    }
};
priority_queue <node> pq;
int n,K,a[2][N],ans,pos[N];
bool vis[2][N];
int main(){
    n = read(),K = read();
    rep(j,0,1)rep(i,1,n)a[j][i] = read();
    rep(j,0,1)rep(i,1,n){
        if(a[j][i] > 0 || i == 1 || i == n)ans += a[j][i],a[j][i] = 0;
        else a[j][i] = -a[j][i];
    }
    pq.push((node){0,1,0}),pq.push((node){1,1,0});
    pos[0] = pos[1] = 1;
    while(!pq.empty()){
        node u = pq.top();
        pq.pop();
        if(u.y == n){
            printf("%d\n",ans - u.val);
            break;
        }
        if(!vis[u.x][u.y]){
            rep(i,pos[!u.x]+1,min(n,u.y+K))pq.push((node){!u.x,i,u.val + a[!u.x][i]});
            pos[!u.x] = max(pos[!u.x],min(n,u.y+K));
        }
    }
    return 0;
}