//
// Created by miao on 2017/4/28.
//
//
#include <iostream>
#include <algorithm>
#include <cstdio>

int a[4];

using namespace std;

int main() {
    scanf("%d%d%d%d", &a[0], &a[1], &a[2], &a[3]);
    while (true) {
        if (0 == a[0] + a[1] + a[2] + a[3]) { break; }
        sort(a, a + 4);
        int k = a[0];
        if (a[0] != 0) { printf("%d%d%d%d", a[0], a[1], a[2], a[3]); }
        while (next_permutation(a, a + 4)) {
//                printf(" ## %d%d ## ", a[0], k);
            if (a[0] == k && a[0]) printf(" %d%d%d%d", a[0], a[1], a[2], a[3]);
            else {

                if (a[0]) {
                    if (k) printf("\n");
                    printf("%d%d%d%d", a[0], a[1], a[2], a[3]);
                }
                k = a[0];
            }
        }

        printf("\n");
        scanf("%d%d%d%d", &a[0], &a[1], &a[2], &a[3]);
        if (a[0] + a[1] + a[2] + a[3] != 0)
            printf("\n");
//        printf("%d",next_permutation(a,a+4));
    }
}