#include<cstdio>
#include<cstring>
#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector <int> edge[100], redge[100], topsort;
int flag[100], vis[100], store[100];
void DFS1(int u)
{
    int v, i;
    vis[u] = 1;
    for(i=0; i<(int)edge[u].size(); i++)
    {
        v = edge[u][i];
        if(!vis[v])
        {
            DFS1(v);
        }
    }
    topsort.push_back(u);
}
void DFS2(int u)
{
    int i, v;
    vis[u] = 0;
    for(i=0; i<(int)redge[u].size(); i++)
    {
        v = redge[u][i];
        if(vis[v])
        {
            printf(" %c", v+'A');
            DFS2(v);
        }
    }
}
void reset()
{
    int i ;
    for(i=0; i<90; i++)
    {
        redge[i].clear();
        edge[i].clear();
    }
    memset(vis, 0, sizeof(vis));
    memset(flag, 0, sizeof(flag));
    topsort.clear();
}
int main()
{
    char a, b, c, d, e, p;
    int n, k, i;
    while(cin >> n && n)
    {
        getchar();
        k = 0;
        for(i=0; i<n; i++)
        {
            scanf("%c %c %c %c %c %c", &a, &b, &c, &d, &e, &p);
            getchar();
            if(!flag[a-'A'])
            {
                flag[a-'A'] = 1;
                store[k++] = a-'A';
            }
            if(!flag[b-'A'])
            {
                flag[b-'A'] = 1;
                store[k++] = b-'A';
            }
            if(!flag[c-'A'])
            {
                flag[c-'A'] = 1;
                store[k++] = c-'A';
            }
            if(!flag[d-'A'])
            {
                flag[d-'A'] = 1;
                store[k++] = d-'A';
            }
            if(!flag[e-'A'])
            {
                flag[e-'A'] = 1;
                store[k++] = e-'A';
            }
            edge[a-'A'].push_back(p-'A');
            edge[b-'A'].push_back(p-'A');
            edge[c-'A'].push_back(p-'A');
            edge[d-'A'].push_back(p-'A');
            edge[e-'A'].push_back(p-'A');
            redge[p-'A'].push_back(a-'A');
            redge[p-'A'].push_back(b-'A');
            redge[p-'A'].push_back(c-'A');
            redge[p-'A'].push_back(d-'A');
            redge[p-'A'].push_back(e-'A');
        }
        for(i=0; i<k; i++)
            if(vis[store[i]]==0)DFS1(i);
        for(i= topsort.size()-1; i>=0; i--)
        {
            if(vis[topsort[i]])
            {
                printf("%c", topsort[i]+'A');
                DFS2(topsort[i]);
            }
            printf("\n");
        }

    }
    return 0;
}

