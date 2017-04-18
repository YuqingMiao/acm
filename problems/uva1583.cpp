//
// Created by Miao on 2017/4/10.
//

#include <bits/stdc++.h>
using namespace std;
const int maxn=100005;
int ans[maxn]={0};
int main(){
    int T, n;
    memset(ans,0, sizeof(ans));
    for(int m=1;m<maxn;m++) {
        int x = m, y = m;
        while (x) {
            y += x % 10;
            x /= 10;
        }
        if (ans[y] == 0 || m < ans[y]) {
            ans[y] = m;
        }
    }
        scanf("%d",&T);
        while(T--){
            scanf("%d",&n);
            printf("%d\n",ans[n]);
        }
    return 0;
}