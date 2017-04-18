//
// Created by Miao on 2017/4/14.
//

#include<bits/stdc++.h>
using namespace std;
int vis[2621450];//表示记录
int a[2621450];
int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    memset(vis,0,sizeof vis);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        vis[a[i]]++;
    }
    if(n==1)
    {
        cout<<"0"<<endl;
        return 0;
    }
    int cur=0;
    for(int i=1;i<=n;i++)
    {
        if(vis[(x^a[i])]>0)
        {
            if((x^a[i])==a[i])//两个数相等的
                cur+=vis[(x^a[i])]-1;
            else
                cur+=vis[(x^a[i])];
        }
    }
    printf("%d\n",cur/2);
    return 0;
}
//using namespace std;
//int main()
//{
//    long long n,x,c;
//    c=0;
//    long long a[100010];
//    scanf("%I64d %I64d",&n,&x);
//    for(int i=0;i<n;i++)
//    {
//        scanf("%I64d",&a[i]);
//    }
//    for(int i=0;i<n;i++)
//        for(int j=i;j<n;j++)
//        {
//            if((a[i]^a[j])==x)
//            {
//                c++;
//            }
//        }
//    printf("%I64d\n",c);
//}