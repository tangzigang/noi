#include<iostream>
using namespace std;
int a[200][4];//1.data 2.count 3.next
int main(){
    int n;
    cin >> n;
    a[0][1] = a[0][2] = a[0][3] = 0;
    for(int i=1;i<=n;i++){
        cin>>a[i][1];
        a[i][2] = 1;
        a[i][3] = 0;
    }

    for(int i=n-1;i>=1;i--){
        //  cout<<"i:"<<i<<" cout:"<<a[i][2]<<" data:"<<a[i][1]<<" -> "<<a[a[i][3]][1]<<endl;
        int next =0;
        for(int j=i+1;j<=n;j++){
            if(a[i][1]<a[j][1]  && a[j][2] > a[next][2]){
                next = j;
            }
        }
        
        if(next != 0){
            a[i][2] =a[next][2]+1;
            a[i][3] = next;
            // cout<<"    find i:"<<i<<" "<< a[i][1] <<" -> "<<a[i][3]<<" count:"<<a[i][2]<<endl;
        }
    
        
    }
    int start=1;
    for(int i=1;i<=n;i++){
        if(a[i][2] > a[start][2]) start = i;
    }

    cout<<"max="<<a[start][2]<<endl;
    for(int i=start;;){
        cout<<a[i][1]<<" ";
        if(a[i][3]==0)break;
        i=a[i][3];
    }
    return 0;
}