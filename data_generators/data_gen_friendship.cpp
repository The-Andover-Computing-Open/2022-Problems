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
	int n = random(1, 100000);
	cout<<n<<endl;
	for(int i=0;i<n;i++){
		int l = random(0, n);
		if(i==n-1)
			cout<<l<<endl;
		else
			cout<<l<<" ";
	}

	for(int i=0;i<n;i++){
		int r = random(0, n);
		if(i==n-1)
			cout<<r<<endl;
		else
			cout<<r<<" ";
	}
}



/*

generate tree:
for(int i=2;i<=n;i++){
		int p = random(1, i-1);
		cout<<p << " "<<i<<endl;
	}

*/