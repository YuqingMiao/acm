//
// Created by miao on 2017/4/22.
//

//
// Created by miao on 2017/4/21.
//

#include <bits/stdc++.h>
using namespace std;
const  int maxn=500;
int T,n,k;
int mark[maxn];
int cnt[maxn];
int m[410][410];
int main(){

    cin>>T;
    for (int i=1;i<= T;++i ){
        cin>>n >> k;
        for (int j = 1; j <=n ; ++j) {
            cin >> mark[j] >> cnt[j];

        }

        for (int i = 1; i <= n ; ++i) {
            for (int j = 0; j <=n ; ++j) {
                cin>>m[i][j];
            }
        }
        //以上为输入
        for (int i = 1; i <=n ; ++i) {
            mark[k]+=m[k][i];
            cnt[k]-=m[k][i];
            m[k][i]=m[i][k]=0;
        }
        mark[k] += cnt[k];
        cnt[k]=0;
        for (int i = 1; i <= n; ++i) {
            for (int j = i+1; j <=n; ++j) {
                if (m[i][j] != 0) {
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