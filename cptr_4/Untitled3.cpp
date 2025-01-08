#include<iostream>
using namespace std;
class fact{
public:
    int factu(int n){
        if(n==0){
            return 1;
        }
        else
            return n*factu(n-1);
    }
};
int main(){
    fact ob;
    int num=4;
    cout<<"factorial :"<<ob.factu(num);
    return 0;
}
