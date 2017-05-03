//
// Created by miao on 2017/5/3.
//

// https://en.wikipedia.org/wiki/Lucas%27s_theorem
//http://blog.sina.com.cn/s/blog_b9a401a40101dghn.html
//传说中的数论，高中数学竞赛题？

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