#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double x,a,b,c,d;
	cin >> x>>a>>b>>c>>d;
	
	double result = a * pow(x,3) + b*pow(x,2)+c*x + d;
	printf("%.7f",result); 
	return 0;
}
