#include<iostream>
using namespace std;
int main(){
	char s[255];
	scanf("%s",s);
	int len = strlen(s);
	char stack[255] = {0};
	stack[0] = s[0];
	int top = 0;
	bool isWrong = false;
	for(int i=1;i< len && !isWrong;i++){
		switch(s[i]){
			case '(':
			case '[':
				stack[++top] = s[i];
				break;
			case ')':
				if(stack[top--] != '('){
					cout << "Wrong"<<endl;
					isWrong = true;
				}
				break;
			case ']':
				if(stack[top--] != '['){
					cout << "Wrong"<<endl;
					isWrong = true;
				}
				break;
			default:
				cout << "Wrong"<<endl;
				isWrong = true;
				break;
		}

	}

	if(!isWrong && top == -1){
		cout << "OK" << endl;
	}
	return 0;
}