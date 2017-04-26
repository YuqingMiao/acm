#include <bits/stdc++.h>
using namespace std;
#pragma comment(linker, "/STACK:1024000000,1024000000")
#define eps 1e-10
#define inf 0x3f3f3f3f
#define PI pair<int, int>
typedef long long LL;
const int maxn = 100 + 5;
int a[maxn];
int main() {
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
        for(int i = 1; i <= n; ++i) {
            scanf("%d", &a[i]);
        }
        int ans;
        for(int i = 1; i < n; ++i) {
            if(m-i > 0 && a[m-i] <= k && a[m-i]) {
                ans = i;
                break;
            }
            if(m+i <= n && a[m+i] <= k && a[m+i]) {
                ans = i;
                break;
            }
        }
        printf("%d\n", ans*10);


    return 0;
}
