#include<iostream>
using namespace std;
int main(){
	const double Pi = 3.14159;
	double r;
	cin >> r;
	
	double R = 2 * r;
	double l = 2 * Pi * r;
	double s = Pi * r * r;
	printf("%.4f %.4f %.4f",R,l,s);
	return 0;
}
