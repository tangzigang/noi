#include<iostream>
#include<cstring>
using namespace std;
char s[256];
long stack[256];
int top = -1;

long temp = 0;
long n;
int main(){
    scanf("%[^\n]",s)

    int i = 0;
    char currentChar = s[0];
    while(currentChar != '@'){
        switch (currentChar)
        {
        case '+':
            n = stack[top];
            top--;
            stack[top] = stack[top]+n;
            break;
        case '-':
            n = stack[top];
            top--;
            stack[top] = stack[top]-n;
            break;
        case '*':
            n = stack[top];
            top--;
            stack[top] = stack[top] * n;
            break;
        case '/':
            n = stack[top];
            top--;
            stack[top] = stack[top] / n;
            break;
        case ' ':
            top++;
            stack[top] = temp;
            temp = 0;
            break;
        default:
            temp = temp * 10 + (currentChar - 48);
            break;
        }

        i++;
        currentChar = s[i];
    }

    cout << stack[0]<<endl;
    
    return 0;
}