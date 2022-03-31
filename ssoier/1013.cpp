#include<iostream>
using namespace std;
int main(){
	double F;
	cin >> F;
	
	double C = 5 * (F - 32) / 9;
	printf("%.5f",C);
	return 0;
}
