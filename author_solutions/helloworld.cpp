#include <bits/stdc++.h>
using namespace std;
int n,a[105];
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int count = 0;
    for(int x = 1; x <= n; x++){
        for(int y = 1; y <= n; y++){
            for(int z = 1; z <= n; z++){
                if(a[x] * a[y] == a[z])count++;
            }
        }
    }
    cout << count << '\n';
    return 0;
}