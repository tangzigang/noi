//start at 23.38

#include<iostream>
#include<cmath>
using namespace std;


int n;

struct node
{
   int data;
   node *left ,*right;
};

node *tree;
int main(){
    cin >> n;
    // for(int i=1;i<n;i++){

    // }
    int f = log2(n);
    cout << f+1<<endl;

    return 0;
}