//
// Created by Miao on 2017/4/14.
//

#include <cstdio>
#include <cstdlib>

using namespace std;
const int maxn=1e6+100;
int n,m,K;
int x,y;
int s[maxn]={0};
int T;
int ans=1;
int main(){
    scanf("%d %d %d", &n , &m , &K);
    for (int i = 1; i <= m; ++i) {
        scanf("%d",&T);
        s[T]=1;
        if(1==T){
            printf("1");
            exit(0);
        }
    }
    while(K--) {
        scanf("%d %d", &x, &y);

        if (x==ans){
            ans=y;
        } else if (y==ans){
            ans=x;
        }
        if(s[ans]==1) {
            printf("%d", ans);
            exit(0);
        }
    }
    printf("%d", ans);
    return 0;
}
