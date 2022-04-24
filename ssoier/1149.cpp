#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char s[500];
	scanf("%[^\n]",s);
	int len = strlen(s);

	int maxStart = 0,maxEnd = 0;	
	int start = 0,end = 0;
	while(end < len){
		if(s[end] == ' ' || s[end] == '.'){
			if((end - start)>(maxEnd-maxStart)){
				maxEnd = end;
				maxStart = start;	
			}
			start = end +1;
		}
		end++;
	}

	char max[500];
	for(int i = maxStart;i<maxEnd;i++)max[i-maxStart] = s[i];
	cout<< max<<endl;
	return 0;
}
