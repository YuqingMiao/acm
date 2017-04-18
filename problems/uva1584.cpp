//
// Created by Miao on 2017/4/10.
//

#include <bits/stdc++.h>

using namespace std;
const int maxn=105;
//s中表示法p是否比表示法q的字典序小
bool lessa(const char* s,int p,int q){
    int n=strlen(s);
    for(int i=0 ; i<n ; i++) {
        if (s[(p + i) % n] != s[(q + i) % n])
            return s[(p + i) % n] < s[(q + i) % n];
    }
    return 0;
}

int main() {
    int T;
    char s[maxn];
    scanf("%d", &T);
while(T--){
    scanf("%s", s);
    int ans = 0;
    int n = strlen(s);
    for (int i = 1; i < n; i++) {
        if (lessa(s, i, ans)) { ans = i; }
    }
    for (int i = 0; i < n; i++) {
        putchar(s[(i + ans) % n]);
    }
    putchar('\n');
}
return 0;
}