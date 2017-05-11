//
// Created by Miao on 2017/5/10.
//

#include <bits/stdc++.h>

using namespace std;

int a[100005][2];

int main() {
    int T;
    int c = 0;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        cin >> a[i][0] >> a[i][1];
        if (a[i][0] != a[i][1]) { c = 1; }
    }
    if (0 == c) {
        for (int i = 1; i < T; ++i) {
            if (a[i][0] > a[i - 1][0]) {
                c=2;
                break;
            }
        }
    }
    if(1==c){cout<<"rated";}
    else if(0==c){cout<<"maybe";}
    else {cout << "unrated";}
    return 0;
}
