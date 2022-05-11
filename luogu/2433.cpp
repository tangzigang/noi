
//TODO score:56  no patient to fix it
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int i;
    cin >> i;

    if(i == 1){
        cout<< "I love Luogu!"<<endl;
    }else if(i==2){
        int a = 2;
        int u = 4;
        int b = 10 -2 -4;
        cout << a+u<<" "<< b<<endl;
    }
    else if(i==3){
        int total = 14;
        int students = 4;

        int each = total / students;
        cout << each<< endl << each * students << endl<< total-(each * students)<<endl;
    }
    else if(i==4){
        float total = 500;
        int students = 3;
        float each = total/students;
        printf(".6f\n",each);
    }
    else if(i==5){
        int lj = 260,sj=12,ly=220,sy=20;
        int ans = (lj + ly)/(sj+sy);
        cout << ans<<endl;
    }
    else if(i==6){
        int l=6,w=9;
        int x = sqrt(l*l+w*w);
        cout << x<<endl;
    }
    else if(i==7){
        int total = 100;
        total +=10;
        cout <<total<<endl;
        total -= 20;
        cout <<total<<endl;
        total -= total;
        cout << total <<endl;
    }
    else if(i==8){
        int r = 5;
        float pi = 3.14;
        float l = 2*pi *r;
        printf(".2f\n",l);
        float s = pi * r * r;
        printf(".2f\n",s);
        float v = 4/3.0 * pi * r * r * r;
        printf(".2f\n",v);
    }
    else if(i==9){
        cout << 22<<endl;
    }
    else if(i==10){
        cout << 9 <<endl;
    }
    else if(i==11){
        int l = 100.0;
        int s = 8-5;
        float ans = l/s;
        cout << ans <<endl;
    }
    else if(i==12){
        int ans1 = 'M'-'A'+1;
        char ans2 = 'A'+18-1;
        cout << ans1<<endl<<ans2<<endl;
    }
    else if(i==13){
        float pi = 3.141593;
        float v1 = 4.0/3 * pi * 4 * 4 * 4;
        float v2 = 4.0/3 * pi * 10 * 10 * 10;
        float v = v1+v2;
        int ans = pow(v,3);
        cout << ans << endl;
    }
    else if(i==14){
        int price = 110;
        int count = 10;
        int total;
        while(price > 0){
            total = price * count;
            if(total >= 3500)break;
            price --;
            count ++;
        }
        cout << price <<endl;
    }
    return 0;
}