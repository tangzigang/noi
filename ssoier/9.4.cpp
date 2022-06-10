#include<iostream>
using namespace std;
int a[1001][4]={0};//1.data 2.next 3.count

void once(int result[],int src[]){
    for(int i=n-1;i>=1;i--){
        int maxCountIndex = 0;
        for(int j=i;j<=n;j++){
            if(a[j][1]<a[i][1] && a[j][3]>a[maxCountIndex][3])maxCountIndex = j;
        }

        if(maxCountIndex!=0){
            a[i][2] = maxCountIndex;
            a[i][3] = a[maxCountIndex][3]+1;
        }
    }
}

int main(){
    int n=0;
    int temp;
    while(cin>>temp){
        a[++n][1] = temp;
        a[n][2]=0;
        a[n][3]=1;
    }

    
    
    for(int i=n-1;i>=1;i--){
        int maxCountIndex = 0;
        for(int j=i;j<=n;j++){
            if(a[j][1]<a[i][1] && a[j][3]>a[maxCountIndex][3])maxCountIndex = j;
        }

        if(maxCountIndex!=0){
            a[i][2] = maxCountIndex;
            a[i][3] = a[maxCountIndex][3]+1;
        }
    }

    int max;
    for(int i=1;i<=n;i++){
        if(a[i][3] > a[max][3])max=i;
    }
    cout<<"max:"<<a[max][3]<<endl;

    

    
    
    
    int b[1001][1001]={0};
    int count;
    for(int i=1;i<=n;i++){
        int min=1;
        int j=1;
        for(;b[0][j]!=0;j++){
            if(b[b[0][j]] < b[b[0][min]])min=j;
        }
        if(b[b[0][min]][min] > a[i][1]){
            b[0][min] +=1;
            b[b[0][min]][min] = a[i][1];
        }else{
            b[0][j]+=1;
            b[1][j] = a[i][1];
            count++;
        }
        
    }
    cout<<count<<endl;

    for(int i=1;b[1][i]!=0;i++){
        for(int j=1;b[i][j]!=0;j++){
            cout<<b[j][i]<<" ";
        }
        cout<<endl;
    }
    




    return 0;
}