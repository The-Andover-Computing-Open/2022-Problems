//
// Created by husky on 5/20/2022.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    int abeScore = 0;
    int calebScore = 0;
    string tmp;
    for(int i = 0; i<N; ++i){
        cin >> tmp;
        if(tmp=="Abe") abeScore++;
        else calebScore++;
    }

    if(abeScore>calebScore){
        cout << "Abe " << abeScore << endl;
    }
    else{
        cout << "Caleb " << calebScore << endl;
    }
}