#include <bits/stdc++.h>

using namespace std;
const int M = 1e4;

int random(int st, int ed){
    if(st==ed) return st;
    return rand()%(ed-st+1)+st;
}


int main(int argc, char** argv) {
    srand(atoi(argv[1]));

    int n = 100000,k = random(1,n);
    cout<<n<<" "<<k<<endl;
    /* n random numbers between 1 and 100 inclusive. */
    vector<int> a(n),b(n);
    for (int i = 0; i < n; i++){
        b[i] = random(-M,M);
        a[i] = random(-M, M);
    }
    for(int i=0;i<n-1;i++)
        cout<<a[i]<<" ";
    cout<<a[n-1]<<endl;
    
    for(int i=0;i<n-1;i++)
        cout<<b[i]<<" ";
    cout<<b[n-1]<<endl;
}
