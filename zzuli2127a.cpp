#include <bits/stdc++.h>
#define LL long long
using namespace std;
int T,n;

LL h, x11, x22, y22, y11;
LL x, y, z, X, Y, Z;

long long sqr(long long x){
    return x*x;
}

double dis(LL x1, LL y1, LL z1, LL x2, LL y2, LL z2) {
    return sqrt(sqr(x1-x2)+sqr(y1-y2)+sqr(z1-z2));
}

bool in(LL x1,LL y1,LL x2,LL y2,LL x3,LL y3)
{
    return (x3-x1)*(x2-x1)+(y3-y1)*(y2-y1)>0 && (x1-x2)*(x3-x2)+(y1-y2)*(y3-y2)>0;
}

int main(){
    scanf("%d",&T);
    while(T--){
        scanf("%I64d %I64d %I64d %I64d %I64d ",&h,&x11,&y11,&x22,&y22);
        scanf("%I64d %I64d %I64d %I64d %I64d %I64d",&x,&y,&z,&X,&Y,&Z);
        scanf("%d", &n);
        while(n--){
            int t;
            scanf("%d", &t);
            //气球的位置
            LL xf=x+t*X;
            LL yf=y+t*Y;
            LL zf=z+t*Z;

            if(x11==x22&&y11==y22){
                double ans=  dis(x11,y11,h,xf,yf,zf);
                printf("%.2f\n", ans);
                continue;
            }
            double a = dis(x11,y11,h,xf,yf,zf);
            double b = dis(x22,y22,h,xf,yf,zf);
            double length = dis(x11,y11,h,x22,y22,h);
            if(true==in (x11,y11,x22,y22,xf,yf)){
                double dd=(a*a-b*b+length*length)/(2.0*length);
                double ans=sqrt(a*a-dd*dd);
                printf("%.2lf\n",ans);
            }
            else {
                printf("%.2lf\n",min(a,b));
            }


        }
    }
    return 0;
}
