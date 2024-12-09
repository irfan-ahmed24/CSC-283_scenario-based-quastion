#include<iostream>
using namespace std;

class Book{
    string title,author;
    float price;
public:
    Book();
    Book(string t,string a,float p);
    void display_Details();
};

Book::Book(){
    title="Unknown title";
    author="Unknown Author";
    price=0.0;
}

Book::Book(string t,string a,float p){
    title=t;
    author=a;
    price=p;
}

void Book::display_Details(){
    cout<<"Title ="<<title<<endl;
    cout<<"Author ="<<author<<endl;
    cout<<"Price ="<<price<<endl<<endl;
}

int main(){
    Book ob1;
    Book ob2("Tokijjil","Homaan ahmed",400.00);
    ob1.display_Details();
    ob2.display_Details();
}
