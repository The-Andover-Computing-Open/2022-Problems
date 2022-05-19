#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5;
int n,a[N],bucket[N];
long long ans;
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        ++bucket[a[i]];
    }
    for(int i = 1; i <= n; i++){
        for(int x = 1; x * x <= a[i]; x++){
            if(a[i] % x == 0){
                ans += bucket[x];
                if(x * x != a[i]){
                    ans += bucket[a[i] / x];
                }
            }
        }
    }
    cout << ans - n << '\n';
    return 0;
}