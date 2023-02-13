#include<iostream>
#include<cstring>
#include<iomanip>

using namespace std;
 struct studentType {

    string studentFName;
    string studentLName;
    int testScore;
    char grade;

 };
void readStudentData(studentType [],int );
void assignGrades(studentType [],int );
int findHighestScore(studentType [],int );
void studentHighestScore(studentType [],int ,int );

int main()
{
    int n,highest;

 cout<<"Enter the number of students :"<<endl;
 cin>>n;
 studentType student[n];
readStudentData(student,n);
 assignGrades(student,n);
highest = findHighestScore(student,n);
   cout << "The students having the highest test score (" 
        << highest << ") are:" << endl;
 studentHighestScore(student,n,highest);

 return 0 ; 


}

void readStudentData(studentType student[],int num)
{
    for(int i = 0 ; i < num ; i++)
     {
        cout<<"Enter the first name of student"<<(i+1)<<": "<<endl;
        cin>>student[i].studentFName;
        cout<<"Enter the last name of student"<<(i+1) <<": "<<endl;
        cin>>student[i].studentLName;
        cout<< "Enter the testscore of student"<<(i+1)<<": "<<endl;
        cin>>student[i].testScore;
     }
}

void assignGrades(studentType student[],int num ){

  for(int i = 0 ; i < num ; i++)
   {
    if(student[i].testScore >= 90)
      student[i].grade = 'A';
    
    else if(student[i].testScore >= 80)
      student[i].grade = 'B';
    
    else if(student[i].testScore >= 70)
      student[i].grade = 'C';

    else if(student[i].testScore >= 60)
      student[i].grade = 'D';
    
    else if(student[i].testScore >= 50)
      student[i].grade = 'E';

    else 
    student[i].grade = 'F';
}
}

int findHighestScore(studentType student[],int num)
{
    int highest = student[0].testScore;

    for (int i = 1; i < num; i++)
    {
        if (highest < student[i].testScore)
            highest = student[i].testScore;
    }

    return highest;
}

void studentHighestScore(studentType student[],int num , int highest )
{ 
    cout<<left<<setw(15);
 cout << "Name"  << "Test Score" << "  Grade" <<endl;

    for (int i = 0; i < num; i++)
    {
        if (student[i].testScore == highest)
        {
            cout<<left<<setw(15);
            cout << student[i].studentLName + ", " + student[i].studentFName;

           cout<<left<<setw(15);
            cout << student[i].testScore ; 

            cout<<left<<setw(15);
            cout<< student[i].grade << endl;
        }
    }

}