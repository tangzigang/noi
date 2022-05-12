//TODO score:55 no patient
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int ans = n * (n-1)/2 * (n-2)/3 *(n-3)/4 ;
    cout << ans << endl;
    return 0;
}