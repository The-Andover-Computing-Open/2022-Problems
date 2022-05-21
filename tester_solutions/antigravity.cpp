//
// Created by husky on 5/21/2022.
//

#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<pair<int, int>> floorRocks, ceilingRocks;

int solve(){
    int curPos = 1;
    while(!floorRocks.empty()){
        // Get to current position
        while(floorRocks.front().second <= curPos){
            floorRocks.erase(floorRocks.begin());
        }
        while(ceilingRocks.front().second <= curPos){
            ceilingRocks.erase(ceilingRocks.begin());
        }

        // Move forward
        int nextMove = max(floorRocks.front().first, ceilingRocks.front().first);
        if(nextMove==curPos){
            return curPos;
        }
        curPos = nextMove;
    }
}

int main(){
    cin >> N >> M;

    for(int i = 0; i<N; ++i){
        pair<int, int> tmp;
        cin >> tmp.first >> tmp.second;
        floorRocks.push_back(tmp);
    }
    sort(floorRocks.begin(), floorRocks.end());

    for(int i = 0; i<M; ++i){
        pair<int, int> tmp;
        cin >> tmp.first >> tmp.second;
        ceilingRocks.push_back(tmp);
    }
    sort(ceilingRocks.begin(), ceilingRocks.end());

    // Process
    cout << solve() << endl;
}