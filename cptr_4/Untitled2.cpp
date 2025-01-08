// inline function
#include<iostream>
using namespace std;
class inlineFunction{
public:
    inline int test(int a){
        return a*a*a;
    }
};
int main(){
    inlineFunction ob;
    cout<<ob.test(3);
    return 0;
}
