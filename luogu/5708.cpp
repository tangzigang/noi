//TODO score:80 no patient to fix
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c;
    cin >> a >> b >> c;
    float p = (a+b+c)/2;
    float ans = sqrt(p * (p-a) * (p-b)*(p-c));
    printf("%.1f\n",ans); 
    return 0;
}