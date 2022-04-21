#include<bits/stdc++.h>

using namespace std;
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define inf 1000000000

void solve(){
	int n, m; cin >> n >> m;
	int T; cin >> T;
	
	vector<vector<pair<int,int>>> adj(n); // stores edge id
	for(int i=0;i<m;i++){
		int a, b, x; cin >> a >> b >> x;
		a--; b--;
		adj[a].pb(mp(b, x));
		adj[b].pb(mp(a, x));
	}

	vector<vector<int>> cost(n, vector<int>(n+5, inf));
	priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>>> pq;
	int f=0,b=0;
	pq.push(mt(0,0,0));
	cost[0][0] = 0;
	while(!pq.empty()){
		auto ptr = pq.top(); pq.pop();
		int c = get<0>(ptr), id = get<1>(ptr), d = get<2>(ptr);
		for(auto& edge : adj[id]){
			int oth = edge.first;
			int x = edge.second;
			int nc = c + d * x;
			int nd = d;
			if(x > 0)
				nd++;
			if(nc < cost[oth][nd]){
				cost[oth][nd] = nc;
				pq.push(mt(nc, oth, nd));
			}
		}
	}

	int minC = inf;

	for(int i=0;i<n+5;i++)
		minC = min(minC, cost[T][i]);

	if(minC > inf/2) 
		cout<<-1<<endl;
	else
		cout<<minC<<endl;
}










int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}