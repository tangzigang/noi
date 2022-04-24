#include<iostream>
#include<cstring>
using namespace std;
char s[256];
char stack[20];
int top = -1;
int main(){
    scanf("%[^\n]",s);
    for(int i = 0; s[i] != '@' ;i++){
        switch (s[i]){
        case '(':
            stack[++top] = s[i];
            break;
        case ')':
            if(top < 0 || stack[top--] != '('){
                cout << "NO"<<endl;
                return 0;
            };
            break;
        default:
            break;
        }
    }

    if(top == -1){
        cout << "YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}