#include<bits/stdc++.h>

using namespace std;

void solve(){
	int n, r, c; cin >> n >> r >> c;
	vector<vector<bool>> isship = vector<vector<bool>>(n, vector<bool>(n, false));
	for(int R=0;R<n;R++){
		for(int C=0;C<n;C++){
			char ch; cin >> ch;
			if(ch=='S') isship[R][C] = true;
		}
	}

	if(isship[r][c]) cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}