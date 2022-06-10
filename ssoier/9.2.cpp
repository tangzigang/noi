#include<iostream>
using namespace std;
int a[1001][1001][4]; //1.weight  2.max  3.left or right

int main(){
    int n;
    cin >>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin>>a[i][j][1];

            //last line 
            if(i==n){
                a[i][j][2] = a[i][j][1];
            }

            a[i][j][3] = 0;
        }
    }

    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            if(a[i+1][j][2] > a[i+1][j+1][2]){
                a[i][j][2]  = a[i+1][j][2] + a[i][j][1];
                a[i][j][3] = 0;
            } else{
                a[i][j][2]  = a[i+1][j+1][2] + a[i][j][1];
                a[i][j][3] = 1;
            }
        }
    }
    cout<<a[1][1][2]<<endl;

    // for(int i=1,j=1;i<=n;i++){
    //     cout<<a[i][j][1]<<" ";
    //     j=a[i][j][3]==0?j:j+1;
    // }
    // cout<<endl;




    return 0;
}