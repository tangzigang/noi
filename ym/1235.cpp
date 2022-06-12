#include<iostream>
using namespace std;
int n;
int a[100001] = {0};

int find(int target){
    int l = 1,r = n-1;
    int mid;
    while(l<=r){
        mid = (l+r)/2;
        if(a[mid] == target){
            return mid;
        }else if(a[mid] > target){
            r=mid-1;
        }else {
            l=mid+1;
        }
    }
    return -1;
}


int main(){
    
    cin>>n;
    
   for(int i=1;i<=n;i++){
       cin>>a[i];
   }
    int t;
    cin>>t;
    int ans = find(t);
    cout<<ans<<endl;
    return 0;
}