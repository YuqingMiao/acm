//
// Created by Miao on 2017/4/20.
//

#include <bits/stdc++.h>
using namespace std;
map <char,int> dic;
string s,temp;
int a[20],tot,x;

string cl(int x) {
    string d = "";
    while (x) {
        d=char((x&1)+'0')+d;
        x>>=1;
    }
    while (int(d.size())<6) d='0'+d;
    return d;
}

char out() {
    int d = 0;
    for (int now = 1,i = 8;i>=1;i--) {
        d+=a[i]*now;
        now<<=1;
    }
    char t = d;
    return t;
}

int main() {
    //freopen("D:\\rush.txt","r",stdin);
    for (char key = 'A';key<='Z';key++)
        dic[key]=key-'A';
    for (char key = 'a';key<='z';key++)
        dic[key]=key-'a'+26;
    for (char key = '0';key<='9';key++)
        dic[key]=key-'0'+52;
    dic['+']=62,dic['/']=63;
    //cin >> s;
    s="d2hhdCBpcyB0aGUgcmVtYWluZGVyIHdoZW4gdGhlIG51bWJlciBpcyBkaXZpZGVkIGJ5IDIwMTc/";
    temp="";
    int len = s.size();
    for (int i = 0; i <= len-1; ++i) {
        temp+=cl(dic[s[i]]);
    }
    len = temp.size();
    cout << temp<<endl;

    //->“what is the reminder of x after divided by 2017"
    // for (int i = 0;i<=len-2;i+=8) {
    //     int j = i+8-1;
    //     tot = 0;
    //     for (int k = i; k <= j ; ++k) {
    //         ++tot;
    //         a[tot] = temp[k]-'0';
    //     }
    //     putchar(out());
    // }

    int T;
    cin >> T;
    while (T--) {
        cin >> x;
        cout << x%2017<<endl;
    }
    return 0;
}