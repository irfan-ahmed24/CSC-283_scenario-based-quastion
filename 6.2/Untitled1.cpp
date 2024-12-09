#include<iostream>
#include <string>
using namespace std;
class book
{
    string title,author,publisher;
    float price;
    int available;
public:
    book(string t,string a,string p,float pri,int avail);
    void details();
    bool availablity(int x);
    void stokCalculate(int x);
    void priceCalculate(int x);
    string titleavail();
    string authoravail();
};

book::book(string t,string a,string p,float pri,int avail)
{
    title=t;
    author=a;
    publisher=p;
    price=pri;
    available=avail;
}

void book::details()
{
    cout<<"Title :"<<title<<endl;
    cout<<"Author name:"<<author<<endl;
    cout<<"Publisher name :"<<publisher<<endl;
    cout<<"price :"<<price<<endl;
    cout<<"Available :"<<available<<endl<<endl;
}

string book::titleavail()
{
    return title;
}
string book::authoravail()
{
    return author;
}
bool book::availablity(int x)
{
    if(x<=available)
    {
        return true;
    }
    else
        return false;
}

void book::stokCalculate(int x)
{
    cout<<"After sell "<<x<<" book, there have "<<available-x<<" book in stok"<<endl;
}

void book::priceCalculate(int x)
{
    cout<<"Total Price of "<<x<<" book:"<<x*price<<endl;
}

int main()
{
    string searchtitle,searchauthor;
    int need;
    bool found=false;
    book stokBook[]=
    {
        book("book1","author1","publisher1",250.00,10),
        book("book2","author2","publisher2",230.00,10),
        book("book3","author3","publisher3",270.00,10)
    };
    cout<<"Enter book title :";
    cin>>searchtitle;
    cout<<"\n Enter book author :";
    cin>>searchauthor;
    cout<<endl;
    for(int i=0; i<3; i++)
    {
        if(searchtitle==stokBook[i].titleavail() && searchauthor==stokBook[i].authoravail())
        {
            found=true;
            stokBook[i].details();
            cout<<"How many book you need :";
            cin>>need;
            if(stokBook[i].availablity(need))
            {
                stokBook[i].priceCalculate(need);
                stokBook[i].stokCalculate(need);
            }
            else
                cout<<need <<" book are not available in stok";
            break;
        }
    }
    if(!found)
    {
        cout<<"Sorry! this book is not available. please search another book";
    }
}
