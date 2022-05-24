//
// Created by husky on 5/21/2022.
//

#include <bits/stdc++.h>
using namespace std;

#define ckmin(a, b) a = min(a, b)
#define ckmax(a, b) a = max(a, b)

int N;
int coords[20][4];
int wall[101][101];
bool solve(){
    // Simulate
    for(int i = 0; i<N; ++i){
        // Remove Poster
        int r0 = coords[i][0];
        int c0 = coords[i][1];
        int r1 = coords[i][2];
        int c1 = coords[i][3];
        for(int r = 1; r<=20; ++r){
            for(int c = 1; c<=20; ++c){
                if(r>=r0 && c >= c0 && r <= r1 && c <= c1)
                    wall[r][c]--;
            }
        }

        // Place Randomly
        int height = r1 - r0;
        int width = c1 - c0;
        for(int a = 1; a<=20; ++a){
            for(int b = 1; b<=20; ++b){
                // Place
                bool works = true;
                for(int r = 1; r<=20; ++r){
                    for(int c = 1; c<=20; ++c){
                        if(r>=a && c >= b && r <= a+height && c <= b+width) {
                            wall[r][c]++;
                        }
                        if(wall[r][c]==0){
                            works = false;
                        }
                    }
                }
                if(works){
                    return true;
                }
                for(int r = 1; r<=20; ++r){
                    for(int c = 1; c<=20; ++c){
                        if(r>=a && c >= b && r <= a+height && c <= b+width) {
                            wall[r][c]--;
                        }
                    }
                }
            }
        }

        // Place Back
        for(int r = 1; r<=20; ++r){
            for(int c = 1; c<=20; ++c){
                if(r>=r0 && c >= c0 && r <= r1 && c <= c1)
                    wall[r][c]++;
            }
        }
    }
    return false;
}
int main(){
    // Input
    cin >> N;
    memset(wall, 0, sizeof wall);

    for(int i = 0; i<N; ++i){
        cin >> coords[i][0] >> coords[i][1] >> coords[i][2] >> coords[i][3];
        for(int r = 1; r<=20; ++r){
            for(int c = 1; c<=20; ++c){
                if(r>=coords[i][0] && c >= coords[i][1] && r <= coords[i][2] && c <= coords[i][3])
                    wall[r][c]++;
            }
        }
    }

    if(solve())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}