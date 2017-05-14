//
// Created by miao on 2017/5/6.
//

//B. 3-palindrome
//        time limit per test1 second
//memory limit per test256 megabytes
//        inputstandard input
//        outputstandard output
//        In the beginning of the new year Keivan decided to reverse his name. He doesn't like palindromes, so he changed Naviek to Navick.
//He is too selfish, so for a given n he wants to obtain a string of n characters, each of which is either 'a', 'b' or 'c', with no palindromes of length 3 appearing in the string as a substring. For example, the strings "abc" and "abca" suit him, while the string "aba" doesn't. He also want the number of letters 'c' in his string to be as little as possible.
//Input
//        The first line contains single integer n (1 ≤ n ≤ 2·105) — the length of the string.
//Output
//        Print the string that satisfies all the constraints.
//If there are multiple answers, print any of them.
//构造题，没怎么看懂，
// 1.c越少越好，那就是不用喽，
//没有三位的回文串。。输出aabbaabb？
//这什么玩意儿啊。

#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        if (i % 4 < 2)
            printf("a");
        else
            printf("b");
    printf("\n");
    return 0;
}

//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    string ax = "aa";
//    string bx = "bb";
//    string a = "a";
//    string b = "b";
//    while (n > 0) {
//        if (n > 1) {
//            cout << ax;
//            n -= 2;
//        } else {
//            cout << a;
//            n--;
//        }
//        swap(ax, bx);
//        swap(a, b);
//    }
//    cout << endl;
//}