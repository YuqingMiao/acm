//
// Created by miao on 2017/5/13.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, t, d;
    cin >> n >> t >> k >> d;
    int waktu, ans = 0;
    waktu = 0;
    while (n > 0) {
        n -= k;
        waktu += t;
        if (waktu > d && n > 0)
            ans = 1;
    }
    if (ans)
        puts("YES");
    else
        puts("NO");
}