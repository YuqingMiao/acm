//
// Created by Miao on 2017/4/20.
//

#include <bits/stdc++.h>
using namespace std;
#define rep1(i,x,y) for (int i = x;i <= y;i++)
#define pb push_back
#define LL long long

struct abc
{
    int en,nex;
};

const int N = 1e5+1e3+100;
int n,k,m,dis[N],tot,fir[N],head,tail;
int dl[N];
abc bian[1000000*2+100];

void add(int x,int y)
{
    tot++;
    bian[tot].nex=fir[x];
    fir[x] = tot;
    bian[tot].en = y;
}

int main()
{
    //freopen("D:\\rush.txt","r",stdin);
    ios::sync_with_stdio(0);
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n >> k >> m;
        tot = 0;
        rep1(i,1,n+m)
            fir[i] = 0;
        rep1(i,1,m)
        {
            rep1(j,1,k)
            {
                int x;
                cin >> x;
                add(x,n+i);
                add(n+i,x);
            }
        }
        rep1(i,1,n+m)
            dis[i]=-1;
        dis[1]=0;
        head = 0,tail = 1;
        dl[1] = 1;
        while (head<tail)
        {
            int x = dl[++head];
            for (int i = fir[x];i;i=bian[i].nex)
            {
                int y = bian[i].en;
                if (dis[y]==-1)
                {
                    dis[y] = dis[x]+1;
                    dl[++tail]=y;
                }
            }
        }
        if (dis[n]==-1)
            cout << -1 << endl;
        else
            cout << dis[n]/2 + 1<<endl;
    }
    return 0;
}