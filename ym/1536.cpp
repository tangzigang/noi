#include<iostream>
using namespace std;
int n;
int s[100000]={0};
int b[2][101]={0};

int main(){
    cin>>n;
    memset(b[0],-1,101);
    for(int i=1;i<=n;i++){
        cin>>s[i];
        b[s[i]][0]++;
    }

    int order = 0;
    for(int i=100;i>=0;i--){
        if(b[i][0] >0){
            b[i][1] = ++order;
        }
    }

    for(int i=1;i<=n;i++){
        cout<<b[s[i]][1]<<endl;
    }
    return 0;
}