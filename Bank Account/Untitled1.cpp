#include<iostream>
using namespace std;

class BankAccount{
    string accountHolder;
    float balance;
    int accountNumber;
public:
    BankAccount(string AH,float b,int AN);
    void Account_details();
    float diposite(float);
    void withdrow(float);
};

BankAccount::BankAccount(string AH,float b,int AN){
    accountHolder=AH;
    balance=b;
    accountNumber=AN;
}

void BankAccount::Account_details(){
    cout<<"Your account details:"<<endl;
    cout<<"Account Holder name:"<<accountHolder<<endl;
    cout<<"Account Number :"<<accountNumber<<endl;
    cout<<"Account balance :"<<balance<<endl<<endl;

}

float BankAccount::diposite(float add){
    return balance+=add;
}

void BankAccount::withdrow(float withdraw){
    if(withdraw>balance){
        cout<<"Sorry! you don't have enough balance"<<endl<<endl;
    }
    else
    {
        cout<<"Withdraw "<<withdraw<<" tk from your account"<<endl<<endl;
        balance-=withdraw;
    }
}

int main(){
    int addWithdrow;
    float addOrRemove;
    BankAccount ob1("holder name",2000.00,23303064);

    ob1.Account_details();

    cout<<"Enter 1 to add money or 2 to withdraw money: ";
    cin>>addWithdrow;
    if(addWithdrow==1){
        cout<<"Add amount:";
        cin>>addOrRemove;
        cout<<"Deposit "<<addOrRemove<<" tk to your account"<<endl<<endl;
        ob1.diposite(addOrRemove);
        ob1.Account_details();
    }
    else if(addWithdrow==2){
        cout<<"Withdraw amount:";
        cin>>addOrRemove;
        ob1.withdrow(addOrRemove);
        ob1.Account_details();
    }
    else
        cout<<"Sorry! your enter code is not valid .Please Enter appropriate code."<<endl;
    return 0;
}
