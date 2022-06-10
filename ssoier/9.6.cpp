#include<iostream>
using namespace std;
int w[201]={0};
int a[201][201] = {0};
int nex[201] = {0};
int ans[201] = {0};

int main(){

    int n;
    cin >>n;
    for(int i=1;i<=n;i++){
        cin>>w[i];
    }
    ans[n]=w[n];


    int from,to;
    do{
        cin>>from>>to;
        if(from ==0 && to == 0)break;
        a[from][to] = 1;
    }while(true);
    
    for(int i=n-1;i>=1;i--){
        int max= 0;
        for(int j=i+1;j<=n;j++){
            if(a[i][j] == 1){//j->i
                int temp = w[i]+ans[j];
                if(temp>ans[max]){
                    max = j;
                }
            }
        }
        cout<<"i:"<<i<<" -> "<<max<<endl;
        ans[i] = w[i]+ans[max];
        nex[i] = max;
    }

    for(int i=1;i<=n;i++){
        cout<<i;
        if(i!=n)cout<<"-";
    }
    cout<<endl<<ans[1];

    return 0;
}