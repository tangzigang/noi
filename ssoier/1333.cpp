#include<iostream>
#include<queue>
using namespace std;




int blahN(int a,int n){
    queue<int> q;
    queue<int> two;
    queue<int> three;
  
    q.push(a);
    int ans = a;
    for(int i =0;i<n-1;){
        int x = q.front();
        q.pop();
        // printf("i:%d pull:%d \n",i,x);
        int temp2 = 2 * x +1;
        two.push(temp2);
        int temp3 = 3*x +1;
        three.push(temp3);

        int temp = two.front();
        if(two.front() < three.front()){
            temp = two.front();
            two.pop();
        }else if(two.front() > three.front()){
            temp = three.front();
            three.pop();
        }else {
            temp = two.front();
            two.pop();
            three.pop();
        }
        

        if(temp != q.back()){
            q.push(temp);
            ans = temp;
            i++;
        }
    }
    return ans;
}

int main(){
    int a,n;
    while(cin >> a >> n){
        cout<<blahN(a,n)<<endl;
    }
    return 0;
}