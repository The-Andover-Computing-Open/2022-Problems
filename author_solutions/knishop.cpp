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
const int x[8] = {1,1,-1,-1,2,2,-2,-2},y[8] = {2,-2,2,-2,1,-1,1,-1};
int solve(int dx,int dy){
    if(dx == 0 && dy == 0)return 0;
    if((dx + dy) % 2 == 0){
        if(abs(dx) == abs(dy))return 1;
        return 2;
    }
    int ans = 3;
    for(int i = 0; i < 8; i++){
        ans = min(ans,1 + solve(dx + x[i],dy + y[i]));
    }
    return ans;
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int dx = x2 - x1,dy = y2 - y1;
    cout << solve(dx,dy) << '\n';
    return 0;
}