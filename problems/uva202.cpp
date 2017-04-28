//
// Created by miao on 2017/4/28.
//
//好简单，本来还以为要求最长公共子序列然后和t比较一下是否相等的。
//虽然时间复杂度是一样的，但是。。
//是时候看一波动态规划，最长公共子序列了。
#include <bits/stdc++.h>

using namespace std;
char s[100000];
char t[100000];

int main() {
    while (cin >> t >> s) {
        int m = strlen(t);
        int n = strlen(s);
        int i = 0;
        int j = 0;
        for (i = 0, j = 0; i < m && j < n;) {
            if (t[i] == s[j]) {
                i++;
                j++;
            } else { j++; }
        }
        if (m == i) { cout << "Yes" << endl; }
        else { cout << "No" << endl; }
    }
}