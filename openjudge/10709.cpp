#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    
    int len = s.size();
    char ch;
    for(int i=0;i<len;i++){
        ch = s[i];
        if((ch >= 'a' && ch <= 'y') || (ch>='A' && ch <= 'Y')){
            s[i]++;
        } else if( ch == 'z'){
            s[i] = 'a';
        }else if(ch == 'Z'){
            s[i] = 'A';
        }
    }

    cout << s<<endl;

    return 0;
}