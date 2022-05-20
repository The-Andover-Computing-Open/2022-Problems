#include<bits/stdc++.h>

using namespace std;
#define pb push_back
#define inf 1000000000

struct NodeM{
	int mval;
	NodeM():mval(inf){}
	NodeM(int val_):mval(val_){}
	void update(int val_){ mval=val_; }
	static NodeM merge(NodeM& ll, NodeM& rr){
		return NodeM(min(ll.mval, rr.mval));
	}
	void pull_up(NodeM& ll, NodeM& rr){
		(*this) = merge(ll, rr);
	}
	int ans(){ return mval; }
};

template<class Node>
struct segtree{
	int n;
	vector<Node> tree;
	static int pow_up(int num){
		for(int i=0;i<32;i++) if((1<<i) >= num) return 1<<i;
		return -1;
	}
	segtree(int n_){
		n = pow_up(n_);
		tree = vector<Node>(2*n);
		build();
	}
	void build(){
		for(int i=n-1;i>=1;i--) tree[i].pull_up(tree[i*2], tree[i*2+1]);
	}
	void update(int idx, int val){
		idx += n;
		tree[idx].update(val);
		for(idx/=2; idx>=1; idx/=2){
			tree[idx].pull_up(tree[idx*2], tree[idx*2+1]);
		}
	}
	Node query(int ll, int rr){
		Node lv, rv;
		for(ll+=n, rr+=n; ll<=rr; ll/=2, rr/=2){
			if(ll&1) lv = Node::merge(lv, tree[ll++]);
			if(!(rr&1)) rv = Node::merge(tree[rr--], rv);
			if(ll==rr) break; // this should never happen because of parity
		}
		return Node::merge(lv, rv);
	}
};

void solve(){
	int n; cin >> n; 
	vector<int> L(n), R(n);
	for(int i=0;i<n;i++) cin>>L[i];
	for(int i=0;i<n;i++) cin>>R[i];

	vector<vector<int>> endptrs(n, vector<int>());
	for(int i=0;i<n;i++){
		if(R[i]+i < n) endptrs[R[i]+i].pb(i);
		else endptrs[n-1].pb(i);
	}

	segtree<NodeM> tracker(n);
	int maxD = -1;
	for(int i=0;i<n;i++){
		// first we deal with the current one
		int l = i-L[i];
		int li = tracker.query(l,i).ans();

		maxD = max(maxD, i-li);

		tracker.update(i, i);

		// then we process the right endpoints
		for(int e : endptrs[i]){
			tracker.update(e, inf);
		}
	}

	cout<<maxD<<endl;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}