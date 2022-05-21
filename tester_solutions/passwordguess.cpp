#include<bits/stdc++.h>

using namespace std;

typedef long long llong;
#define MOD 1000000007

llong power(llong num, llong pow){
	if(pow == 0) return 1;
	if(pow % 2 == 1) return (num*power(num, pow-1))%MOD;
	else{
		llong inter = power(num, pow/2);
		return (inter*inter)%MOD;
	}
}

llong inverse(llong num){
	return power(num, MOD-2);
}

void solve(){
	llong n, m, k, T; cin >> n >> m >> k >> T;
	vector<llong> prop(T+1, 0);
	prop[1] = 1;
	llong inm = inverse((n*m)%MOD);
	for(llong t=2;t<=T;t++){
		prop[t] = (((prop[t-1]*(n-m+1))%MOD+m-1+MOD)%MOD)*inm;
		prop[t] = (prop[t]%MOD + MOD)%MOD;
	}

	llong totalP = prop[T] + (((k-1)*inverse(n))%MOD*(1-prop[T]))%MOD;
	totalP = (totalP%MOD+MOD)%MOD;
	cout<<totalP<<endl;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}