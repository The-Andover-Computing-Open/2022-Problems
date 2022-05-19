#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define mt make_tuple
#define inf 500000000

struct NodeM{
	int val;
	NodeM():val(inf){}
	NodeM(int val_):val(val_){}
	void update(int val_){
		val = val_;
	}
	static NodeM merge(NodeM& ll, NodeM& rr){
		return NodeM(min(ll.val, rr.val));
	}
	void pull_up(NodeM& ll, NodeM& rr){
		(*this) = merge(ll,rr);
	}
	int ans(){ return val; }
};

template<class Node>
struct segtree{
	static int pow_up(int n){
		for(int i=0;i<32;i++) if((1<<i)>=n) return 1<<i;
		return -1;
	}
	vector<Node> tree;
	int n;
	segtree(int size){
		n = pow_up(size);
		tree = vector<Node>(n*2);
		build();
	}
	void build(){
		for(int i=n-1;i>=1;i--) tree[i].pull_up(tree[i*2], tree[i*2+1]);
	}
	int query(int l, int r){
		Node ll, rr;
		for(l+=n,r+=n; l<=r; l/=2, r/=2){
			if(l&1) ll = Node::merge(ll, tree[l++]);
			if(!(r&1)) rr = Node::merge(tree[r++], rr);
			if(l == r) break;
		}
		Node mm = Node::merge(ll, rr);
		return mm.ans();
	}
	void update(int idx, int x){
		for(idx+=n;idx>=1;idx/=2) tree[idx].update(x);
	}
};

void solve(){
	int n, a; cin >> n >> a;
	vector<pair<int,int>> ptrs(2*n);
	vector<pair<int,int>> xs(n);
	for(int i=0;i<n;i++){
		int x, y; cin >> x >> y;
		ptrs[i] = mp(y, x);
		xs[i] = mp(x,i);
		ptrs[i+n] = mp(y+a+1, -1);
	}
	sort(xs.begin(), xs.end());
	for(int i=0;i<n;i++) ptrs[xs[i].second].second = i;

	int x0 = ptrs[0].second;
	int xf = ptrs[n-1].second, yf = ptrs[n-1].first;

	vector<int> pidx(2*n); 
	iota(pidx.begin(), pidx.end(), 0);
	sort(pidx.begin(), pidx.end(), [&](int a, int b){
		return ptrs[a] < ptrs[b];
	});

	segtree<NodeM> tracker(n+5);
	tracker.update(x0, 0);
	int ans = -1;
	for(int id : pidx){
		if(id >= n){
			int x = ptrs[id-n].second;
			tracker.update(x, inf);
		}else{
			int x = ptrs[id].second;
			int y = ptrs[id].first;
			int px = xs[x].first;
			int lpx = px - a, rpx = px + a;
			auto it = upper_bound(xs.begin(), xs.end(), mp(lpx, -1));
			int lx = distance(xs.begin(), it);
			it = upper_bound(xs.begin(), xs.end(), mp(rpx, inf));
			int rx = distance(xs.begin(), it)-1;
			assert(rx >= lx);
			int minc = tracker.query(lx, rx);
			if(id == n-1){
				ans = minc + 1;
				break;
			}
			tracker.update(x, minc+1);
		}
	}

	if(ans > inf/2)
		cout<<-1<<endl;
	else
		cout<<ans<<endl;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}