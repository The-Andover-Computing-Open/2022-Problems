#include<bits/stdc++.h>

using namespace std;

void solve(){
	int n; cin >> n;
	vector<int> arr(n);
	for(int i=0;i<n;i++) cin>>arr[i];
	int M = 5*100000;
	vector<int> hist(M+1,0);
	for(int i=0;i<n;i++) hist[arr[i]]++;

	int pc = 0;
	for(int x=1;x<=M;x++){
		if(hist[x] == 0) continue;
		for(int y=1;y*y<=x;y++){
			if(x%y == 0){
				int z = x/y;
				if(y==z){
					pc += hist[x]*hist[y];
				}else{
					pc += hist[x]*hist[y];
					pc += hist[x]*hist[z];
				}
			}
		}
	}

	pc -= n;
	cout<<pc<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}