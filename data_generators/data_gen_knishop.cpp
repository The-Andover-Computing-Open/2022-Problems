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
	int x1 = random(-1000000000, 1000000000);
	int y1 = random(-1000000000, 1000000000);
	int x2 = random(-1000000000, 1000000000);
	int y2 = random(-1000000000, 1000000000);

	cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
}

