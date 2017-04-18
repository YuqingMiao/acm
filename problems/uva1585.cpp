//
// Created by Miao on 2017/4/12.
//

#include <bits/stdc++.h>
using namespace std;
int N;
int main(){
    int ans=0;
    char s[100];
    int c;
    scanf("%d",&N);
    while(N--){
        ans=0;
        c=0;
        scanf("%s",s);
        for (int i = 0; i <= strlen(s); ++i) {
            if('O'==s[i]){
                c++;
                ans+=c;
            }
            else{
                c=0;
                continue;
            }
        }
        printf("%d\n",ans);
    }
}