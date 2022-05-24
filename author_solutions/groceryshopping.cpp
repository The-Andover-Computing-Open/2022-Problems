//
// Created by husky on 5/20/2022.
//

#include <bits/stdc++.h>
using namespace std;

#define ckmin(a, b) a = min(a, b)

int main(){
    long long N;
    cin >> N;

    long long candidate = 1111111111;

    char allowed[] = {'0', '1', '3', '5', '9'};
    for(char a : allowed){
        for(char b : allowed){
            for(char c : allowed){
                for(char d : allowed){
                    for(char e : allowed){
                        for(char f : allowed){
                            for(char g : allowed){
                                for(char h: allowed){
                                    for(char i : allowed){
                                        string temp = {a, b, c, d, e, f, g, h, i};
                                        long long num = stoll(temp);

                                        // Make sure no 0s are actually used
                                        long long a = stoll(temp);
                                        bool containsZero = false;
                                        while (a != 0) {
                                            if (a % 10 == 0) {
                                                containsZero = true;
                                                break;
                                            }
                                            a /= 10;
                                        }
                                        if (containsZero)
                                            continue;

                                        // Consider the value
                                        if (num >= N)
                                            ckmin(candidate, num);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << candidate;
}