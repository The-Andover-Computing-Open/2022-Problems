#include<bits/stdc++.h>

using namespace std;
#define inf 1000000000

static int MOV[8][2] = {{2,1}, {2,-1}, {1,2}, {1,-2}, {-1,2}, {-1,-2}, {-2,-1}, {-2,1}};

void solve(){
	int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
	x2 -= x1;
	y2 -= y1;

	if((x2+y2)%2!=0 || (x2-y2)%2!=0){
		int minC = inf;
		for(int i=0;i<8;i++){
			int nx2 = x2 + MOV[i][0];
			int ny2 = y2 + MOV[i][1];

			int a = nx2 + ny2;
			int b = nx2 - ny2;
			assert(a%2 == 0 && b%2 == 0);
			int count = 1;
			count += (a!=0);
			count += (b!=0);
			minC = min(minC, count);
		}
		cout<<minC<<endl;
	}else{
		int a = x2 + y2;
		int b = x2 - y2;
		assert(a%2 == 0 && b%2 == 0);
		int count = 0;
		count += (a!=0);
		count += (b!=0);
		cout<<count<<endl;
	}

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}