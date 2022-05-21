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
	cout<<n<<endl;
	vector<int> arr(n);
	iota(arr.begin(), arr.end(), 1);
	random_shuffle(arr.begin(), arr.end());

	if(random(0,100) > 50){
		vector<int> brr(n);
		int pmin=inf, pmax=-1;
		for(int i=0;i<n;i++){
			pmin = min(pmin, arr[i]);
			pmax = max(pmax, arr[i]);
			if(random(0,100) > 50) brr[i]=pmin;
			else brr[i]=pmax;
		}

		for(int i=0;i<n;i++){
			if(i==n-1)
				cout<<brr[i]<<endl;
			else
				cout<<brr[i]<<" ";
		}
	}else{
		for(int i=0;i<n;i++){
			if(i==n-1)
				cout<<arr[i]<<endl;
			else
				cout<<arr[i]<<" ";
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