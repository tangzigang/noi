#include<iostream>
using namespace std;
int main(){

    int n,m;
    cin >> n >> m;
    const int LEN = 105;
    int parent[LEN] = {0};
    int childCount[LEN] = {0};
    for(int i =0;i<m;i++){
        int x,y;
        cin >> x >>y;
        parent[y] = x;
        childCount[x]++;
    }

    int maxIndex = 0;
    for(int i=1;i<LEN;i++)if(childCount[i] > childCount[maxIndex]) maxIndex = i;
    for(int i=1;i<LEN;i++)if(parent[i] == 0){cout<<i<<endl;break;}
    cout<<maxIndex<<endl;
    for(int i=1;i<LEN;i++){if(parent[i] == maxIndex)cout<<i<<" ";}
    cout<<endl;

    return 0;
}