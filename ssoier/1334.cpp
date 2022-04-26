#include<iostream>
using namespace std;
int main(){

    int n,m;
    cin >> n >> m;
    int a[100] = {0};
    for(int i =0;i<n;i++)a[i] = i+1;
    
    int count = n;
    while(count > 0){
        cout<< "befor [";for(int i=0;i<count;i++)cout<<a[i]<<",";cout<<"]"<<endl;
        int index = (m-1)%count;
        printf("    m:%d count:%d --> a[%d]:%d \n",m,count,index,a[index]);
        cout << a[index]<< " ";
        int temp[100] = {0};
        for(int i = 0;i<count-1;i++)temp[i] = a[i+index+1];
        for(int i = count-1-index;i< count-1;i++) temp[i] = a[i-count+index+1];
        
        for(int i=0;i<count-1;i++)a[i] = temp[i];
        // for(int i = index+1;i< count;i++)a[i-index-1] = a[i];
        // for(int i = index;i<count-1;i++)a[i] = temp[i-index];
        count--;
        cout<< "     after [";for(int i=0;i<count;i++)cout<<a[i]<<",";cout<<"]"<<endl;
        cout << endl;
    }
    
    

    return 0;
}