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
	int n = random(1, 1000);
	int m = random(1, min(1000, n*n/3));

	cout<<n<<" "<<m<<endl;
	cout<<random(1, n)<<endl;
	set<pair<int,int>> used;
	for(int i=0;i<m;i++){
		int a = random(1, n), b = random(1, n);
		if(a == b){
			i--; continue;
		}
		if(a>b) swap(a,b);
		if(used.find(mp(a,b))==used.end()){
			if(random(1,100)<10)
				cout<<a<<" "<<b<<" 0"<<endl;
			else
				cout<<a<<" "<<b<<" "<<random(0,100)<<endl;
			used.insert(mp(a,b));
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