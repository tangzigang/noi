#include<iostream>
using namespace std;
int main(){

    int n,m;
    cin >> n >> m;
    int a[100] = {0};
    for(int i =0;i<n;i++)a[i] = i+1;
    
    int count = n;
    while(count > 0){
        int index = (m-1)%count;
        cout << a[index]<< " ";
        int temp[100] = {0};
        for(int i = 0;i<count-1;i++)temp[i] = a[i+index+1];
        for(int i = count-1-index;i< count-1;i++) temp[i] = a[i-count+index+1];
        for(int i=0;i<count-1;i++)a[i] = temp[i];
       
        count--;
    }
    
    

    return 0;
}