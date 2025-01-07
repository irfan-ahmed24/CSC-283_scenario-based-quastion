#include<iostream>
using namespace std;
class A{
public:
    virtual void show()=0;
};
class B:public A{
public:
    void show(){
        cout<<"class B"<<endl;
    }
};
class C:public A{
public:
    void show(){
        cout<<"class C"<<endl;
    }
};
int main(){
    cout<<"Irfan Ahmked"<<endl;
    A *p[2];
    B m;
    C n;
    p[0]=&m;
    p[1]=&n;
    p[0]->show();
    p[1]->show();
    return 0;

}
