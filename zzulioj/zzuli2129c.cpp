//
// Created by Miao on 2017/4/20.
//

#include <bits/stdc++.h>
using namespace std;
int T,N;
const int maxn=10e6+10;
int s[maxn]={ 0 };
int sum[maxn]={ 0 };
int c=0;
int main(){
    cin>>T;
    while(T--){
        cin>>N;
        c=0;
        memset(s,0,sizeof s);
        memset(sum,0,sizeof sum);
        for(int i=0;i<N;++i){
            cin>>s[i];
            sum[i]=sum[i-1]+s[i];

        }

        for (int i = 3; i <N ; ++i) {
            if(sum[i]==sum[i-1]+sum[i-2]+sum[i-3]){
                ++c;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}