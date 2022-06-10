#include<iostream>
using namespace std;
int main(){

    int m,t,s;
    cin >> m >> t >> s;
    int count = s/t;
    int ans = 0;
    if(count < m){
        int time = count * t;
        if(time < s)count++;
        ans = m-count;
    }

    cout<<ans<<endl;
    return 0;
}