#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct book{
    int id;
    int pages;
    float price;

};

int main(){
book b1,b2;
cout<<"Enter id , pages and price of book  : "<<endl;
cin>>b1.id>>b1.pages>>b1.price;

cout<<"Enter id , pages and price of book : "<<endl;
cin>>b2.id>>b2.pages>>b2.price;

cout<<"THE MOST COSTLY BOOK IS : "<<endl;

if(b1.price > b2.price){
cout<<"BOOK ID : "<<b1.id<<endl;
cout<<"BOOK PAGES : "<<b1.pages<<endl;
cout<<"BOOK PRICE : "<<b1.price<<endl;
}

else
{
   cout<<"BOOK ID : "<<b2.id<<endl;
cout<<"BOOK PAGES : "<<b2.pages<<endl;
cout<<"BOOK PRICE : "<<b2.price<<endl;
 
}

return 0;
}