//TODO 0score  1WA: 4ms/728k, 4TLE: 1.2s/30m

#include<iostream>
#include<map>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
int m,n;
map<int,vector<int> > edge;
map<int,bool> visited ;

stack<int> s;
queue<int> q;

void dfs(){
    visited.clear();
    while(!s.empty()){
        int n = s.top();
        if(!visited[n]){
            cout<<n<<" ";
            visited[n] = true;
        }

        vector<int> children = edge[n];
        bool allVisited = true;
        if(!children.empty()){
            for(int i=0;i<children.size();i++){
                int child = children[i];
                if(!visited[child]){
                    s.push(child);
                    allVisited = false;
                    break;
                }
            }
        }
        if(allVisited){
            s.pop();
        }
    }
    cout << endl;
}

void bfs(){
    visited.clear();
    while(!q.empty()){
        int n = q.front();q.pop();
        vector<int> children = edge[n];
        if(!visited[n]){
            cout<< n << " "; 
            visited[n] = true;
        }
        

        if(!children.empty()){
            for(int i=0;i<children.size();i++){
                int child = children[i];
                q.push(child);
            }
        }
    }
    cout << endl;
}

int main(){
    cin >> n>>m;
    int u,v;
    for(int i = 0;i<m;i++){
        cin>>u>>v;
        edge[u].push_back(v);
    }

    s.push(1);
    dfs();
    q.push(1);
    bfs();  

    return 0;
}