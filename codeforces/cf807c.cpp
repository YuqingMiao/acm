//
// Created by miao on 2017/5/8.
//

/*
    (x+a)/(y+b)==p/q;
    则
    x+a=np
    y+b=nq
    (以上结论只在p和q是互质的情况下有效,当然题目有说p和q互质)
    a=np-x
    b=nq-y
    a<=b
    因为p<q所以n越大b会越大;
    又p和q都大于等于0,所以n越大,a和b都是不下降的
    二分n
*/


#include <bits/stdc++.h>

using namespace std;
#define LL long long
int t;
const LL maxn = 1e9;
LL x, y, p, q;

int main() {
    cin >> t;
    while (t--) {
        cin >> x >> y >> p >> q;
        LL l = 0, r = maxn, ans = -1;
        while (l <= r) {
            LL mid = (l + r) /2;
            LL a = mid * p - x, b = mid * q - y;
            if (a >= 0 && b >= 0 && a <= b) {
                ans = mid;
                r = mid - 1;
            } else
                l = mid + 1;
        }
        if (ans == -1)
            cout << -1 << endl;
        else
            cout << ans * q - y << endl;
    }
    return 0;
}