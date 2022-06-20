#include<iostream>
using namespace std;
int parent[5001] = {0};

int find(int x){
    if(parent[x] == x) return x;
    patent[x] = find(parent[x]);    
    return parent[x];
    
}

void join(int x,int y){
    int p1 = find(x),p2=find(y);
    if(p1!=p2)parent[p1]=p2;
}




int n,m,p;
int main(){
    cin >>n>>m>>p;
    //1. 初始化
    for(int i=1;i<=n;i++)parent[i]=i;
    //1. 录入关系
    int x,y;
    for(int i=0;i<m;i++){
        cin >> x >> y;
        join(x,y);
    }

    //2. 询问亲戚关系
    for(int i=0;i<p;i++){
        cin>>x>>y;
        if(find(x) == find(y))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}