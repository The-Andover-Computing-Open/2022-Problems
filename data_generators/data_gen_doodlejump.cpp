#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define mt make_tuple
#define inf 1000000000
#define print(x) cout<<x<<endl

int random(int st, int ed){
	if(st==ed) return st;
	return rand()%(ed-st+1)+st;
}

int main(int argc, char** argv){
	srand(atoi(argv[1]));
	int n = random(1, 1000000);
	int dR = max(5,(int)sqrt(n));
	int a = random(1, max(1,dR/10));
	cout<<n<<" "<<a<<endl;
	set<pair<int,int>> used;
	for(int i=0;i<n;i++){
		int x = random(-dR, dR);
		int y = random(0, dR);
		if(used.find(mp(x,y)) == used.end()){
			cout<<x<<" "<<y<<endl;
			used.insert(mp(x,y));
		}else{
			i--;
		}
	}
}



/*

generate tree:
for(int i=2;i<=n;i++){
		int p = random(1, i-1);
		cout<<p << " "<<i<<endl;
	}

*/