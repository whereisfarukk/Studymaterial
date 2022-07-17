#include <iostream>
#include <vector>
using namespace std;
vector<int> graph[10];
bool visited[100];
int dis[100];
void dfs(int source,int  d)
{
    visited[source] = true;
    for (int i = 0; i < graph[source].size(); i++)
    {
        int next = graph[source][i];
        if (!visited[next])
        {
            dis[next]=d+1;
            dfs(next,dis[next]);
        }
    }
}
int main()
{
    int nodes, edge;
    cin >> nodes >> edge;
    for (int i = 0; i < edge; i++)
    {
        int n, m;
        cin >> n >> m;
        graph[n].push_back(m);
        graph[m].push_back(n);
    }
    dfs(0,0);
    for (int i = 0; i < nodes; i++)
    {
        cout <<"Distance of "<<i<<"from"<<0<<"nodes"<<dis[i]<<endl;
    }
}