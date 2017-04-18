//
// Created by Miao on 2017/4/13.
//
#include <bits/stdc++.h>
using namespace std;
int N;
int s[10000][10];
int main(){
    for (int i = 1; i <= 10000; ++i) {
        int a=i;
        for (int j = 0 ; j < 10 ; ++ j)
        {
            s[i][j] = s[i-1][j];
        }
        while( a ){
            s[i][a%10]++;
            a /= 10;
        }
    }

    int n;
    scanf("%d",&N);
    while(N--){
        scanf("%d",&n);
        for (int i = 0; i <9; ++i) {
        printf("%d ",s[n][i]);
        }
        printf("%d\n",s[n][9] );
    }
    return 0;
}