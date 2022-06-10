#include<iostream>
#include<stack>
#include<vector>
#include<map>

using namespace std;
int n,m;

map<int,vector<int> > edge;
vector<bool> visited;
stack<int> s;

void dfs(){
    // cout<<"dfs"<<endl;
    visited.clear();
    while(s.size()< n){
        int node = s.top();
        visited[node] = true;
        vector<int> children = edge[node];
        // cout<<"node:"<<node << " children: [";
        bool isLeaf = true;
        for(int i = 0;i<children.size();i++){
            int child = children[i];
            // cout<<child<<",";
            if(!visited[child]){
                s.push(child);
                isLeaf = false;
                break;
            }
        }
        // cout<<"]"<<endl;

        if(isLeaf){
            // cout<<"isLeaf Pop";
            s.pop();
            visited[node] = false;
        }
    }

}

int main(){
    cin>> n >> m;
    int u,v;
    for(int i = 0;i<m;i++){
        cin >> u >> v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }

    int start = 1;
    
    for(int i=0;i<edge.size();i++){
        // cout<<"edge["<<i<<"]:"<<edge[i].size()<<endl;
        if(edge[i].size() % 2 != 0){
            start = i;
            break;
        }
    }
    for(int i=0;i<=n;i++)visited.push_back(false);
    // cout<<"start:"<<start<<endl;
    s.push(start);
    dfs();

    int ans[n];int j=0;
    while(!s.empty()){
        int node = s.top();s.pop();
        ans[n-1-j] = node;
        j++;
    }
    
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";
    vector<int> tailChildren = edge[ans[n-1]];
    for(int i = 0;i<tailChildren.size();i++){
        if(tailChildren[i] == ans[0]){//成环
            cout << ans[0];
            break;
        }
    }
    cout<< endl;

    return 0;
}