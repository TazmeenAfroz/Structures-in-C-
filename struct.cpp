#include<iostream>
#include<string>
using namespace std;

struct student{
string name;
int roll_no;
};
void func(student s[5]);

int main(){
student s[5];

for(int i=0;i<5;i++)
{
   cout <<"ENTER YOUR NAME AND ROLL NO :"<<endl;
   cin >> s[i].name >> s[i].roll_no;

}
func(s);
return 0;
}

void func(student s[5])
{


for(int i=0;i<5;i++)
{
   cout <<"Your name is "<<s[i].name<<" and roll no is "<<s[i].roll_no <<endl;
  
}


}
