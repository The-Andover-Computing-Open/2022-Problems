//
// Created by husky on 5/20/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, x, y;
    cin >> N >> x >> y;

<<<<<<< HEAD
    char arr[N][N];
=======
    int arr[N][N];
>>>>>>> d46fea98ca866affdbda9dea2374d6bfdbb974c3
    for(int r = 0; r<N; ++r){
        for(int c = 0; c<N; ++c){
            cin >> arr[r][c];
        }
    }

    if(arr[x][y]=='O'){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
}