#include<iostream>
using namespace std;

struct employeeType
{
   int employee_no;
   float employee_comp;

};

int main(){

    employeeType e1,e2,e3;
    
    cout<<"Enter the details of employee 1 : "<<endl;
    cout<<"Employee no : "<<endl;
    cin>>e1.employee_no;
    cout<<"Employee compensation :$ " <<endl;
    cin>>e1.employee_comp;

     cout<<"Enter the details of employee 2 : "<<endl;
    cout<<"Employee no : "<<endl;
    cin>>e2.employee_no;
    cout<<"Employee compensation :$ " <<endl;
    cin>>e2.employee_comp;   

     cout<<"Enter the details of employee 3 : "<<endl;
    cout<<"Employee no : "<<endl;
    cin>>e3.employee_no;
    cout<<"Employee compensation :$ " <<endl;
    cin>>e3.employee_comp;

    cout<<"Employee 1 number : "<<e1.employee_no<<endl;
    cout<<"Employee 1 compensation : "<<e1.employee_comp<<endl;

    cout<<"Employee 2 number : "<<e2.employee_no<<endl;
    cout<<"Employee 2 compensation : "<<e2.employee_comp<<endl;

    cout<<"Employee 3 number : "<<e3.employee_no<<endl;
    cout<<"Employee 3 compensation : "<<e3.employee_comp<<endl;

    return 0;
}

