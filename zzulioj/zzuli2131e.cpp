//
// Created by miao on 2017/4/22.
//
//
// Created by miao on 2017/4/22.
//

//
// Created by miao on 2017/4/21.
//

#include <bits/stdc++.h>
#define rep1(i,x,y) for (int i = x;i <= y;i++)
using namespace std;
const  int maxn=500;
int T,n,k;
int mark[maxn];
int cnt[maxn];
int m[maxn][maxn];
int main(){

    cin>>T;
        while(T--){
        cin>>n >> k;
        for (int i = 1; i <=n ; ++i) {
            cin >> mark[i];
        }
            for (int i = 1; i <= n; ++i) {
                cin >> cnt[i];
            }
        for (int i = 1; i <= n ; ++i) {
            for (int j = 1; j <=n ; ++j) {
                cin>>m[i][j];
            }
        }
    cin >> n >> k;
    rep1(i,1,n)
        cin >> mark[i];
    rep1(i,1,n)
        cin >> cnt[i];
    rep1(i,1,n)
        rep1(j,1,n)
        {
            cin >>m[i][j];
        }
     //   以上为输入
        for (int i = 1; i <=n ; ++i) {
            mark[k]+=m[k][i];
            cnt[k]-=m[k][i];
            m[k][i]=m[i][k]=0;
        }
        mark[k] += cnt[k];
        cnt[k]=0;

        for (int i = 1; i <n; ++i) {
            for (int j = i+1; j <=n; ++j) {
                if (m[i][j] ) {
                    if (mark[i] < mark[j]) {
                        int x = min(mark[j] - mark[i], m[i][j]);
                        mark[i] += x;
                        m[i][j] -= x;

                    } else {
                        int x = min(mark[i] - mark[j], m[i][j]);
                        mark[j] += x;
                        m[i][j] -= x;

                    }
                    mark[i] += m[i][j] / 2;
                    mark[j] += m[i][j] - m[i][j] / 2;
                }
            }
        }
        bool fi =false;
        for (int i = 1; i <=n ; ++i) {
            if(mark[i] > mark[k] ){
                fi=true;
               break;
            }
        }
        if (fi){ puts("No") ; }
        else{ puts("Yes") ; }
    }
    return 0;
}
