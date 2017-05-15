//
// Created by miao on 2017/5/15.
//

#include <bits/stdc++.h>

#define MAXN 200010

using namespace std;

struct Node {
    int p;
    int a;
    int b;
    int id;
} shirt[MAXN];

bool cmp(const Node &x1, const Node &x2) {
    return x1.p < x2.p;
}

bool vis[MAXN];

int main() {
    int n;
    while (cin >> n) {
        memset(vis, false, sizeof(vis));
        vector<Node> vec[5];
        for (int i = 0; i < n; ++i) {
            cin >> shirt[i].p;
            shirt[i].id = i;
        }
        for (int i = 0; i < n; ++i)
            cin >> shirt[i].a;
        for (int i = 0; i < n; ++i)
            cin >> shirt[i].b;
        sort(shirt, shirt + n, cmp);
        for (int i = 0; i < n; ++i) {
            if (shirt[i].a == shirt[i].b)
                vec[shirt[i].a].push_back(shirt[i]);
            else {
                vec[shirt[i].a].push_back(shirt[i]);
                vec[shirt[i].b].push_back(shirt[i]);
            }
        }
        int m, x;
        int pos1 = 0, pos2 = 0, pos3 = 0;
        cin >> m;
        for (int i = 0; i < m; ++i) {
            cin >> x;
            if (x == 1) {
                bool flag = true;
                for (int j = pos1; j < vec[1].size(); ++j) {
                    if (!vis[vec[1][j].id]) {
                        cout << vec[1][j].p << " ";
                        vis[vec[1][j].id] = true;
                        flag = false;
                        pos1 = j + 1;
                        break;
                    }
                }
                if (flag)
                    cout << -1 << " ";
            } else if (x == 2) {
                bool flag = true;
                for (int j = pos2; j < vec[2].size(); ++j) {
                    if (!vis[vec[2][j].id]) {
                        cout << vec[2][j].p << " ";
                        vis[vec[2][j].id] = true;
                        flag = false;
                        pos2 = j + 1;
                        break;
                    }
                }
                if (flag)
                    cout << -1 << " ";
            } else {
                bool flag = true;
                for (int j = pos3; j < vec[3].size(); ++j) {
                    if (!vis[vec[3][j].id]) {
                        cout << vec[3][j].p << " ";
                        vis[vec[3][j].id] = true;
                        flag = false;
                        pos3 = j + 1;
                        break;
                    }
                }
                if (flag)
                    cout << -1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}