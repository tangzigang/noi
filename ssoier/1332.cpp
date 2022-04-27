#include<iostream>
using namespace std;
int main(){
    int l1,l2,n;
    cin >> l1 >> l2;
    cin >> n;

    for(int i=0;i<n;i++){
        cout << (i%l1)+1 <<" "<<(i%l2)+1 << endl;
    }
    return 0;
}