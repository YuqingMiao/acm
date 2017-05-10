//
// Created by Miao on 2017/5/10.
//

//你会发现头尾相加就会使得他等于n+1的，
// 那么他的遍历顺序应该是1->n->2->(n-1)->3->(n-2)……
// 以此类推下去，就会发现最终的总花费就是(n-1)/2向下取整
//但是谁能解释一下为什么这样是最小呢?
// 如果n为奇数
// 答案是(n-1)/2; 
// 如果是偶数 
// 答案是(n-2)/2; 

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << (n - 1) / 2 << endl;
}
//cout<<(n-1)/2;等于
// if n % 2 == 0:
//print(int((n - 2) / 2))
//if n % 2 == 1:
//print(int((n - 1) / 2))
//