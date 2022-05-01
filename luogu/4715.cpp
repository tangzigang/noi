// start at 22.13
// finish coding at 22.27


#include<iostream>
#include<cmath>
using namespace std;

int ability[128] = {0};
int n;
int length;

int victory(int index){
    int result;
    if(index >= length){
        int adjustIndex = index-length;
        result =  ability[adjustIndex];
        return result;
    }
    int left = victory( 2* index);
    int right = victory(2*index +1);
    result =  left>right?left:right;
    return result;
}


int main(){
    cin >> n;
    length = pow(2,n);
    for(int i=0;i<length;i++)cin>>ability[i];
    int s1 = victory(2);
    int s2 = victory(3);
    int s = s1<s2?s1:s2;

    for(int i = 0;i<length;i++){
        if(ability[i] == s){
            cout<<i+1<<endl;
            break;
        }
    }

    return 0;
}