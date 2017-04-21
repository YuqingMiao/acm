//
// Created by miao on 2017/4/21.
//
#include<bits/stdc++.h>
using namespace std;
inline int read()
{
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9')
    {
        if(ch=='-')f=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9')
    {
        x=x*10+ch-'0';
        ch=getchar();
    }
    return x*f;
}
struct node
{
    int id,s;
};
struct Edge
{
    int next;
    int to;
    int w;
} edges[2000005];
int head[200005];
bool vis[200005];
int cnt;
int n;
void add(int u,int v,int w)
{
    edges[cnt].w=w;
    edges[cnt].to=v;
    edges[cnt].next=head[u];
    head[u]=cnt++;
}
int bfs()
{
    queue<node> Q;
    node temp,cur;
    vis[1]=1;
    cur.id=1,cur.s=0;
    Q.push(cur);
    while(!Q.empty())
    {
        cur=Q.front();
        Q.pop();
        int u=cur.id;
        for(int i=head[u]; ~i; i=edges[i].next)
        {
            int p=edges[i].to;
            if(vis[p]) continue;
            vis[p]=1;
            temp=cur;
            temp.id=p;
            temp.s++;
            Q.push(temp);
            if(temp.id==n) return temp.s/2+1;
        }
    }
    return -1;
}
int main()
{
    int t,m,i,j,k;
    scanf("%d",&t);
    while(t--)
    {
        int tmp[1005];
        cnt=0;
//cin>>n>>k>>m;
        scanf("%d%d%d",&n,&k,&m);
        for(i=0; i<=n+m; ++i) head[i]=-1,vis[i]=0;
        for(i=1; i<=m; ++i)
        {
            int p=n+i;
            for(j=1; j<=k; ++j)
            {
//scanf("%d",&tmp[j]);
                tmp[j]=read();
                add(tmp[j],p,1);
                add(p,tmp[j],1);
            }
        }
//cout<<bfs()<<endl;
        printf("%d\n",bfs());
    }
    return 0;
}


//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//using namespace std;
//const int M=5001005;
//const int N=101005;
//const int inf=0x3f3f3f3f;
//int dist[N],visit[N];
//int n,k,m;
//struct Edge
//{
//    int v,w,next;
//    Edge(){}
//    Edge(int V,int W,int NEXT):v(V),w(W),next(NEXT){}
//}edge[M];
//int size,head[N];
//
//
//void init(){
//    size=0;
//    memset(head,-1,sizeof(head));
//}
//
//
//void Insertedge(int u,int v,int w)
//{
//    edge[size]=Edge(u,w,head[v]);
//    head[v]=size++;
//    edge[size]=Edge(v,w,head[u]);
//    head[u]=size++;
//}
//
//
//void spfa(int st,int ed)
//{
//    queue<int>q;
//    for(int i=1; i<=n+m; i++)
//    {
//        dist[i]=inf;
//        visit[i]=0;
//    }
//    dist[1]=0;
//    visit[1]=1;
//    q.push(st);
//    while(!q.empty())
//    {
//        int k=q.front();
//        q.pop();
//        visit[k]=0;
//        for(int i=head[k]; i!=-1; i=edge[i].next)
//        {
//            int v=edge[i].v;
//            if(dist[v]>dist[k]+edge[i].w)
//            {
//                dist[v]=dist[k]+edge[i].w;
//                if(!visit[v])
//                {
//                    visit[v]=1;
//                    q.push(v);
//                }
//            }
//        }
//    }
//}
//
//
//int main()
//{
//    int x;
//    while(scanf("%d%d%d",&n,&k,&m)!=EOF)
//    {
//        init();
//        for(int i=1; i<=m; i++)
//        {
//            for(int j=1; j<=k; j++)
//            {
//                scanf("%d",&x);
//                Insertedge(x,i+n,1);
//            }
//        }
//        spfa(1,n);
//        if(dist[n]==inf)printf("-1\n");
//        else printf("%d\n",dist[n]/2+1);
//    }
//    return 0;
//}

//vector
//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <queue>
//#include <vector>
//using namespace std;
//const int N=100005;
//int dist[N+1000];
//vector<int>q[N+1000];
//queue<int>p;
//int n,k,m,ans,a;
//int main()
//{
//    while(scanf("%d%d%d",&n,&k,&m)!=EOF)
//    {
//        for(int i=1; i<=m+n; i++)q[i].clear();
//        for(int i=1; i<=m; i++)
//        {
//            for(int j=1; j<=k; j++)
//            {
//                scanf("%d",&a);
//                q[i+n].push_back(a);
//                q[a].push_back(i+n);
//
//            }
//        }
//        while(!p.empty()) p.pop();
//        memset(dist,-1,sizeof(dist));
//        dist[1]=0;
//        ans=-1;
//        p.push(1);
//        while(!p.empty())
//        {
//            int k=p.front();
//            p.pop();
//            for(int i=0; i<q[k].size(); i++)
//            {
//if(dist[q[k][i]]==-1)
//{
//dist[q[k][i]]=dist[k]+1;
//if(q[k][i]==n) ans=dist[n]/2+1;
//p.push(q[k][i]);
//}
//}
//if(ans!=-1)break;
//}
//printf("%d\n",ans);
//
//}
//return 0;
//}
//#include < bits/stdc++.h>
//using namespace std;
//const  int maxm=1e5+10;
//int T;
//int s[maxm]
//int main(){
//    cin>>T;
//    while (T--){
//        cin>> N >> K >> M ;
//        while(M--){
//            cin>>
//        }
//    }
//}