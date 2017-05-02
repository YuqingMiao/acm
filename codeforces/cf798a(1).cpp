#include<bits/stdc++.h>
using namespace std;
char s[20];
int main()
{
    cin>>s;
    int len=strlen(s);
    int h=len/2;
    int c=0;
    if(0==len%2)
    {
        for(int i=0; i<len/2; ++i)
        {
            if(s[i]!=s[len-i-1])
            {
                c++;
            }
        }
    }
    else
    {
        for(int i=0; i<len/2+1; ++i)
        {
            if(s[i]!=s[len-i-1])
            {
                c++;
            }
        }

    }
    cout<<len<<endl<<h<<endl<<c<<endl;
    if(1==c)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
