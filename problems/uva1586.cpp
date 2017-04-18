//
// Created by Miao on 2017/4/13.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    scanf("%d", &T);
    double arr[] = { 12.01, 1.008, 16.00, 14.01 };
    while (T--) {
        char s[100];
        scanf("%s", s);

        double sum = 0, num;
        for (int i = 0; s[i]; i++) {
            // 算出后两位所代表的数值
            if (isdigit(s[i+1])) {
                if (isdigit(s[i+2])) num = 10*(s[i+1]-'0')+s[i+2]-'0';
                else num = s[i+1] - '0';
            }
            else num = 1;

            // 判断第一位
            if (s[i] == 'C') sum += arr[0]*num;
            else if (s[i] == 'H') sum += arr[1]*num;
            else if (s[i] == 'O') sum += arr[2]*num;
            else if (s[i] == 'N') sum += arr[3]*num;
            else continue;
        }
        printf("%.3lf\n", sum);
    }
    return 0;
}