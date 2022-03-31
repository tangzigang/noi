#include<iostream>
using namespace std;
int main(){
	int x,y;
	cin >> x >> y;
	
	int rc =  (y-2*x)/2;
	int cc = x - rc;
	cout << cc << " "<< rc;
	return 0;
}
