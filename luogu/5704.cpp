#include<iostream>
using namespace std;


int main(){
    char c;
    cin >> c;
    char a = 'a';
    char A = 'A';
    int gap = a-A;
    char ans = c-gap;
    cout << ans<<endl;
    return 0;
}