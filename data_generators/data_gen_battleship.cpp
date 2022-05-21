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
	int n = random(1, 100);
	int r = random(0,n-1);
	int c = random(0,n-1);

	cout<<n<<" "<<r<<" "<<c<<endl;

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(random(1,100)>50) cout<<"S ";
			else cout<<"O ";
		}
		cout<<endl;
	}
}



/*

generate tree:
for(int i=2;i<=n;i++){
		int p = random(1, i-1);
		cout<<p << " "<<i<<endl;
	}

*/