#include<iostream>
#include<cstring>
using namespace std;
int main(){
 
    string s;
    getline(cin,s);
    
    int len = s.size();
    int ans = 0;
    for(int i=0;i<len;i++){
        if(s[i] >= '0' && s[i] <= '9')ans++;
    }
    cout<< ans<<endl;

    return 0;
}
