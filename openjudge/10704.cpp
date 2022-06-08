#include<iostream>
using namespace std;


int main(){
    int N;
    cin >> N;
    cin.ignore();

    string t[N]; string ans[N];
    string s1,s2;int index;
    for(int i=0;i<N;i++){
        getline(cin,t[i]);
        
        int index = t[i].find(" ");
        s1 = t[i].substr(0,index);
        s2 = t[i].substr(index+1);
        char r =  s1 == s2?'=' : (s1>s2?'>':'<');
        cout << "s1:"<<s1<<" s2:"<<s2<< " r:"<<r<<endl;
    }

    for(int i=0;i<N;i++)cout<<ans[i]<<endl;
    return 0;
}