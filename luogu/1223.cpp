#include<iostream>
using namespace std;
int n;
int t[1000];
int main(){
    cin >> n;
    int len = 0;
    for(int i=0;i<n;i++){
        cin>>t[i];
        len++;
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(t[i]>t[j])swap(t[i],t[j]);
        }
    }

    int time,total;
    for(int i=0;i<n;i++){
        time+=t[i];
    }

    return 0;
}