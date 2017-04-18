//
// Created by Miao on 2017/4/13.
//

#include <bits/stdc++.h>
char str[104];
int N;
int main()
{
        scanf("%d",&N);
        while (N--) {
            scanf("%s",str);
            int len = strlen(str);
            for (int k,i = 1 ; i <= len ; ++ i)
                if (len%i == 0) {
                    for (k = i ; k < len ; ++ k)
                        if (str[k] != str[k%i])
                            break;
                    if (k == len) {
                        printf("%d\n",i);
                        break;
                    }
                }
            if (N) printf("\n");
        }
    return 0;
}
