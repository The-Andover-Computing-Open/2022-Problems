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
	int n = random(1, 10);
	cout<<n<<endl;
	for(int i=0;i<n;i++){
		int x1 = random(1,20), x2 = random(1,20);
		int y1 = random(1,20), y2 = random(1,20);
		if(x1>x2) swap(x1,x2);
		if(y1>y2) swap(y1,y2);

		cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
	}
}



/*

generate tree:
for(int i=2;i<=n;i++){
		int p = random(1, i-1);
		cout<<p << " "<<i<<endl;
	}

*/