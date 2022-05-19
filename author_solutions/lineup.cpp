#include <bits/stdc++.h>
using namespace std;
int n,a[1005],p[1005];
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++)cin >> a[i];
    int maxvalue = a[1],minvalue = a[1];
    for(int i = 2; i <= n; i++){
        maxvalue = max(maxvalue,minvalue + i - 1);
        minvalue = min(minvalue,maxvalue - i + 1);
        if(a[i] <= minvalue)minvalue = a[i];
        else if(a[i] >= maxvalue)maxvalue = a[i];
        else{
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}