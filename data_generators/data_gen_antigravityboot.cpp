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
	int n = random(1,100000);
	int m = random(1,100000);
	cout<<n<<" "<<m<<endl;
	int ed = 0;
	for(int i=0;i<n;i++){
		int st = random(ed+1,ed+9999);
		if(i == 0) st = 1;
		int w = random(1, 9999);
		ed = st + w - 1;
		cout<<st<<" "<<w<<endl;
	}
	ed = 0;
	for(int i=0;i<m;i++){
		int st = random(ed+1,ed+9999);
		int w = random(1, 9999);
		ed = st + w - 1;
		cout<<st<<" "<<w<<endl;
	}


}



/*

generate tree:
for(int i=2;i<=n;i++){
		int p = random(1, i-1);
		cout<<p << " "<<i<<endl;
	}

*/