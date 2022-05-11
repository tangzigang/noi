#include<iostream>
using namespace std;
int main(){
    float f;
    cin >> f;
    int temp = f * 10;
    int reverse = 0;
    while(temp != 0){
        int tail = temp %10;
        reverse  = reverse * 10 + tail;
        temp /=10;
    }

    float ans = reverse / 1000.0;
    printf("%.3f\n",ans);

    return 0;
}