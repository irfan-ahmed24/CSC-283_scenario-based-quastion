//class implementation
#include<iostream>
using namespace std;
class item{
    int num1,num2;
public:
    void getData(int a,int b);
    void show();
};
void item::getData(int a, int b){
    num1=a;
    num2=b;
}
void item::show(){
    cout<<"A :"<<num1<<endl;
    cout<<"B :"<<num2<<endl;
}
int main(){
    item ob;
    ob.getData(10,20);
    ob.show();
    return 0;
}
