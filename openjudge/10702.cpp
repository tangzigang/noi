#include<iostream>
using namespace std;
int main(){

    string s;
    getline(cin,s);

    int len = s.size();
    char ch;int lastIndex;
    bool isExist = false;
    bool checked[32] = {false};
    for(int i = 0;i<len;i++){
        ch = s[i];
        if(!checked[ch-'a']){
            lastIndex = s.find_last_of(ch);
            // cout << "i:"<<i<<" ch:"<<ch<<" lastIndex:"<<lastIndex<< endl;
            if(lastIndex == i){
                cout << ch << endl;
                isExist = true;
                break;
            }
            checked[ch-'a'] = true;
        }
        
    }
    if(!isExist){
        cout << "no"<<endl;
    }


    
    return 0;
}