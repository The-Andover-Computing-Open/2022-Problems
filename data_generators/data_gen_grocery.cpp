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
	if(random(1,100)>80){
		int n = random(1,1000000000);
		cout<<n<<endl;
	}else if(random(1,100)>80){
		int n = random(1,100000000);
		cout<<n<<endl;
	}else if(random(1,100)>80){
		int n = random(1,10000000);
		cout<<n<<endl;
	}else if(random(1,100)>80){
		int n = random(1,1000000);
		cout<<n<<endl;
	}else if(random(1,100)>80){
		int n = random(1,1000);
		cout<<n<<endl;
	}else{
		int n = random(1,100);
		cout<<n<<endl;
	}
}



/*

generate tree:
for(int i=2;i<=n;i++){
		int p = random(1, i-1);
		cout<<p << " "<<i<<endl;
	}

*/