#include<iostream>
using namespace std;

bool isAllow(char preSymbol,char symbol){
    bool r = false;
    if(preSymbol == '{'){
        r = true;
    }else if(preSymbol == '['){
        r= symbol == '{'?false:true;
    }else if(preSymbol == '<'){
        r= symbol == '<'?true:false;
    }else{
        r= false;
    }
    return r;
}

int main(){
    int n;
    cin >> n;
    string ans[n];
    for(int i=0;i<n;i++){
        char s[255] = {0};
        scanf("%s",s);
        int len = strlen(s);
        char stack[255] = {0};
        int top = -1;
        bool isWrong = false;
        
        for(int j=0;j<len && !isWrong;j++){
            switch(s[j]){
                case '{':
                case '[':
                case '<':
                    if(top == -1 || isAllow(stack[top],s[j])){
                        stack[++top] = s[j];
                    }else{
                        ans[i] = "NO";
                        isWrong = true;
                    }
                    break;
                case '}':
                    if(top <0 || stack[top] != '{'){
                        ans[i] = "NO";
                        isWrong = true;
                        
                    }
                    top--;
                    break;
                case ']':
                    if(top <0 || stack[top] != '['){
                        ans[i] = "NO";
                        isWrong = true;
                        
                    }
                    top--;
                    break;
                case '>':
                    if(top <0 || stack[top] != '<'){
                        ans[i] = "NO";
                        isWrong = true;
                        
                    }
                    top--;
                    break;
            }
        }

        if(!isWrong)ans[i] = "YES";

    }

    for(int i = 0;i<n;i++)cout<<ans[i]<<endl;
    return 0;
}