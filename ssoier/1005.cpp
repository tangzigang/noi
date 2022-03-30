#include<iostream>
using namespace std;
int main(){
	
	int x,a,y,b;
	cin >> x >> a >> y >> b;
	double increacGrass = y*b-x*a;
	int increaseYear = b-a;
	printf("%.2f",increacGrass/increaseYear);
	return 0;
} 
