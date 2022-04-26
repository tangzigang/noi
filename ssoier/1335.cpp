#include<iostream>
#include<queue>
using namespace std;
const int N = 100;
int n,m;
int a[N][N];
int flag[N][N];
queue<int> q;

void markBlock(int x,int y){
    if(a[x][y] == 1 && !flag[x][y]){
        q.push(x*1000+y);
        flag[x][y] = 1;

         while(q.size()>0){
             int v = q.front();
             q.pop();

             int i = v/1000;
             int j = v % 1000;
             
             if(i<n)markBlock(i+1,j);
             if(j<m)markBlock(i,j+1);
         }
    }
    

}

//TODO Wrong answer
int main(){
    
    cin >> n >> m;
    int ans = 0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
            flag[i][j] = 0;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if( a[i][j] == 1 && !flag[i][j]){
                markBlock(i,j);
                ans ++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}