#include<iostream>
#include<set>
#include<cstring>
using namespace std;
set<string> si;
int main(){

    int N;
    cin>>N;
    string str;
    for(int i=0;i<N;i++){
        cin>>str;
        si.insert(str);
    }

    cout<< si.size()<<endl;
    return 0;
}