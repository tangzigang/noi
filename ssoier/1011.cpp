#include<iostream>
using namespace std;
int main(){
	float total, dead;
	cin >> total >> dead;
	float rate = dead/total;
	printf("%.3f%%",rate * 100);
	return 0;
} 
