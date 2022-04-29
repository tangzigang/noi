#include<iostream>
#include<cmath>
using namespace std;

//TODO WA 20%正确率
int main(){
	int N;
	cin >> N;
	int x = sqrt(2*N - 1/4) - 1/2;
	int rest = N - (1+x) * x/2;
	cout<<rest<<"/"<<(x-rest+2)<<endl;
	return 0;
}
