#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<string.h>
#include<queue>
using namespace std;
#define mx 110
vector<int>graph[mx];
bool visit[mx];
int dis[mx];

void bfs(int source){
    queue<int>q;
    visit[source]=1;
    dis[source]=0;
    q.push(source);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(int i=0;i<graph[node].size();i++){
            int next=graph[node][i];
            if(visit[next]==0){
                visit[next]=1;
                dis[next]=dis[node]+1;
                q.push(next);
            }
        }
    }
}

int main(){

    int nodes,edges,source;
    cin>>nodes>>edges;
    for(int i=1;i<=edges;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    cin>>source;
    bfs(source);
    for(int i=1;i<=nodes;i++){
        cout<<"dis of"<<i<<"is: "<<dis[i]<<endl;
    }

}

