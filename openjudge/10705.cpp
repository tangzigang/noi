#include<iostream>
using namespace std;
int main(){
    string s1;
    getline(cin,s1);

    int len = s1.size();
    char s2[len];
    for(int i=0;i<len-1;i++){
        s2[i] = s1[i]+s1[i+1];
    }
    s2[len-1] = s1[len-1]+s1[0];

    cout << s2 << endl;
    return 0;
}