//TODO score 80  2:TLE 1.2s/8m
#include<iostream>
#include<map>
#include<vector>
#include<queue>

using namespace std;

map<int,vector<int> > edge;
queue<int> q;
map<int,bool> visited;
int N,M;

int dfs(int d){
    visited.clear();
    int ans = d;
    q.push(d);
    while(!q.empty()){
        int n = q.front();q.pop();
        if(n>ans)ans = n;
        if(!visited[n]){
            visited[n] = true;
        }
        vector<int> children  =edge[n];
        if(!children.empty()){
            for(int i=0;i<children.size();i++){
                if(!visited[children[i]]){
                    q.push(children[i]);
                }
                
            }
        }
    }
    return ans;
}

int main(){
    cin >> N >> M;
    int u,v;
    for(int i=0;i<M;i++){
        cin >> u >> v;
        edge[u].push_back(v);
    }

    for(int i=1;i<=N;i++){
        cout<<dfs(i)<<" ";
    }
    cout << endl;

    return 0;
}

