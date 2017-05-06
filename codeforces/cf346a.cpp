//
// Created by miao on 2017/5/6.
//

//题目大意：A和B两个人进行游戏，每人轮流操作。
//1.从这个序列中取两个数字，
//2.这两个数字的差值temp原先并不存在在序列中。
//3.将temp放进序列
//最先无法进行操作的一方输。
//题目思路：游戏结束的标志是无法取出两个数字，他们的差值不在序列中。
//也就是说，最终状态是一个首项等于公差的等差序列。
//求出这个等差数列的项数-n，就是游戏进行的回合。
//所以我们要先求出首项。设首项为d，接下来就是d+d,d+2d….
//后面几项都是首项的倍数，所以我们可以用gcd（a1,a2,a3…an）
//ans = an / gcd(a1,a2..an) - n;

#include <bits/stdc++.h>

using namespace std;
int a[100005];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int g = a[0];
    for (int i = 1; i < n; i++) g = __gcd(a[i], g);
    int ans = a[n - 1] / g - n;
    if (ans % 2) cout << "Alice\n";
    else cout << "Bob" << endl;
    return 0;
}