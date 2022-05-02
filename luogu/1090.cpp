//start  at 23.00
//deploy at 23.24  use 24min

#include<iostream>
#include<queue>

using namespace std;

priority_queue<int,vector<int>,greater<int> > q;
int n;
int main(){
    cin >> n;
    int x;
    for(int i=0;i<n;i++)cin >> x,q.push(x);
    
    int ans = 0;
    int x1,x2;
    while(q.size()>=2){
        x1 = q.top();q.pop();
        x2 = q.top();q.pop();
        ans += x1;
        ans += x2;
        q.push(x1+x2);
    }
    cout << ans<<endl;

    return 0;
}