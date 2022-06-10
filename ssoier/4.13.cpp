#include<iostream>
using namespace std;

struct edge{
    int from;
    int to;
    int value;
};
int fat[101];
int father(int x){
    if(fat[x]!=x)fat[x]=father(fat[x]);
    return fat[x];
}

int unionn(int from,int to){
    int fa = father(from);
    int fb = father(to);
    if(fa!=fb)fat[fa]=fb;
}

edge edges[10001];  
int main(){
    int n;
    cin >>n;
    int temp;
    int ei=0;
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            cin>> temp;
            if(temp !=0){
                a[ei].from = i;
                a[ei].to = j;
                a[ei].value = tem;
                ei++;
            }
        }
    }

    for(int i=1;i<=n;i++)fat[i]=i;
    sort(edges+1,edges+m+1,cmp);
    for(int i=1;i<=n;i++){
        if(father(edges[i].from)!=father(edges[i].to)){
            unionn(edges[i].from,edges[i].to);
            total+=edges[i].value;
            k++;
        }
        if(k==n-1)break;
    }
    cout <<tot;
    return 0;
}