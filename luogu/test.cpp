#include<iostream>
using namespace std;
int b[200][4];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>b[i][1];
        b[i][2]=1;
        b[i][3]=0;
    }

    for(int i=n-1;i>0;i--){
        for(int j=i+1;j<=n;j++){
            if(b[i][1] < b[j][i]){
                b[i][2]+=b[j][2];
                b[i][3] = j;
                break;
            }
        }
    }

    int max = 0;
    for(int i=1;i<=n;i++)if(b[max][3]<b[i][3])max=i;
    cout<<"max:"<<b[max][3]<<endl;

    cout<<"chain: ";
    for(int i=max;b[i][3]!=0;i++){
        cout<<b[i][1]<<"->";
    }
    cout<<endl;

    return 0;
}