#include<bits/stdc++.h>

using namespace std;

struct Box{
	int x1, y1, x2, y2, w, h;
	Box(){}
	Box(int x1_, int y1_, int x2_, int y2_):
	x1(x1_),
	y1(y1_),
	x2(x2_),
	y2(y2_), w(x2-x1+1), h(y2-y1+1) {}

	bool contain(int x, int y){
		return x1<=x && x<=x2 && y1<=y && y<=y2;
	}

};

ostream& operator << ( ostream& os, const Box & p ) {
	return os << "(" << p.x1 << ", " << p.y1 << ", " << p.x2 << ", " << p.y2<< ")";
}

void solve(){
	int n; cin >> n;
	vector<Box> boxes(n);
	for(int i=0;i<n;i++){
		int a,b,c,d; cin >> a >> b >> c >> d;
		boxes[i] = Box(a,b,c,d);
	}

	bool pcover = false;
	for(int i=0;i<n;i++){
		Box box = boxes[i];
		for(int x=1;x<=20;x++){
			for(int y=1;y<=20;y++){
				Box nbox(x,y,x+box.w-1,y+box.h-1);
				
				vector<Box> nboxes(boxes.begin(), boxes.end());
				nboxes[i] = nbox;
				bool cover = true;
				for(int x1=1;x1<=20;x1++){
					for(int y1=1;y1<=20;y1++){
						bool tcover = false;
						for(int j=0;j<n;j++){
							tcover = tcover || nboxes[j].contain(x1,y1);
						}
						cover = cover && tcover;
					}
				}
				pcover = pcover | cover;
			}
		}
	}

	if(pcover) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}