#include<iostream>
using namespace std;
int main(){
    float f;
    cin >> f;
    cin.ignore();
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int len1 = s1.size();
    int len2 = s2.size();
    int minLen = len1<len2?len1:len2;
    int maxLen = len1>len2?len1:len2;
    float threthold = minLen/maxLen;
    // cout<<"threthold:"<<threthold << " minLen:"<<minLen<< " maxLen:"<<maxLen<<endl;
    float sum = 0;
    if(threthold<f){
        cout << "no"<< endl;
    }else{
        for(int i=0;i<maxLen;i++){
            if(s1[i] == s2[i])sum++;
        }
        
        threthold = sum/maxLen;
        // cout<<"threthold:"<<threthold << " sum:"<<sum<< " maxLen:"<<maxLen<<endl;
        if(threthold>= f){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }

    
    return 0;
}