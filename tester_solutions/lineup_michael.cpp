#include<bits/stdc++.h>

using namespace std;


void solve(){
	int n; cin >> n;
	vector<int> arr(n);
	for(int i=0;i<n;i++) cin >> arr[i];

	int cmin=arr[0], cmax=arr[0];
	bool suc = true;
	for(int i=1;i<n;i++){
		if(arr[i] < cmin || arr[i] > cmax) ;
		else if(arr[i] == cmin || arr[i] == cmax){
			suc &= cmax-cmin+1 >= i+1;
		}else{
			suc = false;
		}
		cmin = min(cmin, arr[i]);
		cmax = max(cmax, arr[i]);
	}

	if(suc)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}