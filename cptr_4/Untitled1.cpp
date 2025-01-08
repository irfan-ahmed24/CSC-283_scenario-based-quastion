//call by reference to swap 2 number
#include<iostream>
using namespace std;
class Swap{
public:
    void shwap(int &n,int &m){
        int t;
        t=n;
        n=m;
        m=t;
    }
};
int main(){
    Swap ob;
    int num1=10,num2=20;
    cout<<num1<<endl;
    cout<<num2<<endl;
    ob.shwap(num1,num2);
    cout<<num1<<endl;
    cout<<num2<<endl;
    return 0;
}
