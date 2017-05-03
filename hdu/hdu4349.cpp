//
// Created by miao on 2017/5/3.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int cnt = 0;
        while (n) {
            if (n & 1)
                cnt++;
            n >>= 1;
        }
        printf("%d\n", 1 << cnt);
    }
    return 0;
}