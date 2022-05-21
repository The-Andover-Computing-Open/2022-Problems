#include<bits/stdc++.h>

using namespace std;
#define inf 1000000000

void solve(){
	int n; cin >> n;
	vector<int> arr(n+1); 

	for(int i=1;i<=n;i++) cin>>arr[i];

	for(int i=1;i<=n;i++) if(arr[i] > n || arr[i] < 1) {cout<<"NO"<<endl; return;}

	int cmin = arr[1], cmax = arr[1];
	bool minblur = false, maxblur = false;

	bool suc = true;
	for(int i=2;i<=n;i++){
		// cout<<i<<" "<<suc<<endl;
		if(arr[i] == cmin && cmin == cmax){
			minblur = true;
			maxblur = true;
			if(i <= n-cmin+1 || i <= cmin-1+1) ; else suc=false;
			continue;
		}

		if(arr[i] < cmin){
			if(minblur) maxblur = true;
			minblur = false;
			cmin = arr[i];
		}else if(arr[i] > cmax){
			if(maxblur) minblur = true;
			maxblur = false;
			cmax = arr[i];
		}else if(arr[i] == cmin){
			minblur = false;
			maxblur = true;
		}else if(arr[i] == cmax){
			maxblur = false;
			minblur = true;
		}else suc=false;



		if(!maxblur && !minblur){
			suc &= i<=(cmax-cmin+1);
		}else if(!maxblur){
			suc &= i<=(cmax-1+1);
		}else if(!minblur){
			suc &= i<=(n-cmin+1);
		}else assert(false);
	}

	if(suc) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
































/* bad dp solution:

// dp[i][0/1][min/max], dp[i][0][max], so we only need to check if there're enough elements in between and 
	// if there's valid transitions, dp[i][ismin][max] <-- dp[i-1][ismin][max], dp[i-1][ismax][any min] given arr[i-1]==max
	for(int i=1;i<=n;i++) cin >> arr[i];
	for(int i=1;i<=n;i++) if(arr[i]>n || arr[i]<1) {
		cout<<"NO"<<endl; return;
	}

	vector<vector<vector<bool>>> dp(n+1, vector<vector<bool>>(2, vector<bool>(n+1, false)));
	// 0: ismin, 1: ismax
	vector<vector<vector<bool>>> dpS(n+1, vector<vector<bool>>(2, vector<bool>(n+1, false)));
	dp[1][0][arr[1]] = true;
	dp[1][1][arr[1]] = true;


	for(int i=2;i<=n;i++){
		for(int ex=1;ex<=n;ex++){
			if(arr[i]>ex || (ex-arr[i]+1)<i) { dp[i][0][ex] = false; continue; }
			if(arr[i]<ex || (arr[i]-ex+1)<i) { dp[i][1][ex] = false; continue; }
			dp[i][0][ex] = dp[i][0][ex] || (dp[i-1][0][ex] && (arr[i]<=arr[i-1]));
			if(arr[i-1] == ex){
				bool from1 = false;
				for(int minn=arr[i];minn<=n;minn++) from1 != dp[i-1][1][minn];
				dp[i][0][ex] = dp[i][0][ex] || from1;
			}

			
		}
	}


*/