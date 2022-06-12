#include<iostream>
using namespace std;
int main(){
    int fs,nl;
    if(fs>60){
        cout<<"A";
        if(nl<=12){
            cout<<"A112";
        }else{
            cout<<"A212";
        }
    }else{
        cout<<"B";
        if(nl<=12){
            cout<<"B112";
        }else{
            cout<<"B212";
        }

    }
    return 0;
}