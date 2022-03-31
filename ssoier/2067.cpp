#include<iostream>

using namespace std;
double P = 3.1415926;

int main(){
	
	double r;
	cin >> r;
	double d = 2*r;
	double l = 2* P * r;
	double s = P * r * r;
	printf("%.4f %.4f %.4f",d,l,s); 
	
	
	return 0;
}
