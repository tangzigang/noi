//TODO score:90
#include<iostream>
using namespace std;
int main(){
    int s,v;
    cin >> s >> v;
    int total = s/v;
    total += 10;
    int min = 60- (total % 60);
    if((min * s + 10)%60 != 0)min--;
    int hour = ((24+7)- (total/60))%24;

    printf("%02d:%02d\n",hour,min);

    return 0;
}