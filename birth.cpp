#include<iostream>
#include<string>
using namespace std;
struct birth{
   
    int day;
    int month;
    int year;

    
};
int main()
{
    birth b;
    cout<<"Enter your day of birth : "<<endl;
    cin>>b.day;
    cout<<"Enter your month of birth : " <<endl;
    cin>>b.month;
    cout<<"Enter your year of birth : "<<endl;
    cin>>b.year;

    cout<< " Your date of birth is : "<<b.day<<"/"<<b.month<<"/"<<b.year<<endl;
    return 0;
    
}