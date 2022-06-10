#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int s[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>> s[i][j];
            if(i==j)s[i][j] = s[i][j] + 10;
        }
    }

    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            cout<< s[i][j];
            if(j == n-1)cout << endl;
            else cout <<" ";
        }
    }

    return 0;
}