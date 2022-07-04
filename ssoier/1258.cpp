#include<iostream>
using namespace std;
int R = 0;
int a[1001][1001][2] = {0};//i,j 0:value, 1:fn
int f(int i,int j){
    int ans = a[i][j][1];
    if(ans == -1) {
        a[i][j][1] = a[i][j][0]+max(f(i+1,j),f(i+1,j+1));
        ans = a[i][j][1];
    }

    return ans;
}
int main(){
    cin>>R;
    for(int i=0;i<R;i++){
        for(int j=0;j<=i;j++){
            cin>>a[i][j][0];
            a[i][j][1] = i==R?a[i][j][0]:-1;
        }
    }

    int ans = f(0,0);
    cout<<ans<<endl;
    return 0;
}