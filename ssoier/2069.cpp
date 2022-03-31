#include<iostream>
using namespace std;
int main(){
	int count[5] = {0};
	for(int i = 0;i<5;i++)cin >> count[i];
	
	int piece = 0;
	int pre,next;
	for(int i = 0;i<5;i++){
		piece = count[i]/3;
		pre = (i+5-1)%5;
		next = (i+1)%5;
		count[i] = piece;
		count[pre] += piece;
		count[next] += piece; 
	}
	
	for(int i = 0;i<5;i++){
		printf("%5d",count[i]);
	}
	return 0;
} 
