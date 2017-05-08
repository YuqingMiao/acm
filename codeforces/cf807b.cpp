//
// Created by miao on 2017/5/8.
//

#include <bits/stdc++.h>

using namespace std;

int p, x, y, cnt = 0;

bool pd(int s) {
    int i = (s / 50) % 475;
    for (int j = 1; j < 25; ++j) {
        i = (i * 96 + 42) % 475;
        if (i + 26 == p) return true;
    }
    return false;
}

int main() {

    cin >> p >> x >> y;
    while (x < y) {
        x += 100;
        cnt++;
    }
    int tx = x;
    while (x - 50 >= y) {
        x -= 50;
        if (pd(x))
            return cout << cnt << endl, 0;
    }
    x = tx;
    while (!pd(x)) {
        cnt++;
        x += 50;
        if (pd(x)) break;
        x += 50;
    }
    cout << cnt << endl;
    return 0;
}