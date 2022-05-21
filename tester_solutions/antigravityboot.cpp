#include<bits/stdc++.h>

using namespace std;
#define pb push_back
#define mp make_pair

void solve(){
	int n, m; cin >> n >> m;
	vector<pair<int,int>> C;
	
	for(int i=0;i<n;i++){
		int s, w; cin >> s >> w;
		C.pb(mp(s,s+w-1));	
	}

	for(int i=0;i<m;i++){
		int s, w; cin >> s >> w;
		C.pb(mp(s,s+w-1));
	}

	sort(C.begin(), C.end());

	int ed = 1;
	for(int i=0;i<n+m;i++){
		if(C[i].first > ed) break;
		ed = max(ed, C[i].second);
	}

	cout<<ed<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}