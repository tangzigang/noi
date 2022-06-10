#include<iostream>
using namespace std;
int a[11][11]={0};
int F[11] = {0};
int P[11] = {0};

int f(int i){
    // cout<<"f("<<i<<")"<<endl;
    int ans = 0;
    if(F[i]!=0){
        ans = F[i];
    }else{
        if(i>=10){
            ans = 0;
        } else if(i==8){
            ans =  a[8][10];
            P[i]=10;
        }else if(i==9){
            ans = a[9][10];
            P[i]=10;
        }else {
            
            int min =0xffff,minIndex;
            for(int j=i+1; j<=10;j++){
                if(a[i][j]!=0){
                    // cout<<"a["<<i<<"]["<<j<<"]:"<<a[i][j]<<endl;
                    int temp =  a[i][j] + f(j);
                    // cout<<"temp:"<<temp<<" min:"<<min<<endl; 
                    if(min>temp){
                        min = temp;
                        P[i] = j;
                        // cout<<"swap min: p["<<i<<"]"<<P[i]<<endl;
                    }
                }
            }
            ans = min;
        }
    }
    
    F[i] = ans;
    // cout<<"f("<<i<<"):"<<ans<<endl;
    return ans;
}

int main(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            cin>>a[i][j];
        }
    }

    int ans = f(1);
    cout<<"minlong="<< ans<<endl;

    for(int i=1;i<=10;){
        cout<<i<<" ";
        if(i==10)break;
        i=P[i];
    }
    cout<<endl;




    return 0;
}