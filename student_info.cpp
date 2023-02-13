
#include <iostream>
#include <string>

using namespace std;



struct Student {
  string name;
  int marks[3];
};

void DisplayData(Student students[], int numStudents) {
  cout << "Student Data:" << endl;
  for (int i = 0; i < numStudents; i++) {
    cout << "Name: " << students[i].name << endl;
    cout << "Marks: ";
    for (int j = 0; j < 3; j++) {
      cout << students[i].marks[j] << " ";
    }
    cout << endl;
  }
}

void ChangeMarks(Student &student) {
  int courseNo, updatedMarks;
  cout << "Enter course number to update ( 1 - 3 )";
  cin >> courseNo;
  cout << "Enter updated marks: ";
  cin >> updatedMarks;
  student.marks[courseNo-1] = updatedMarks;
}

int CalcAverageMarks(Student &student) {
  int total = 0;
  float result;
  for (int i = 0; i < 3; i++) {
    total += student.marks[i];
  }
result = total /3.0;
  return result;
}

int main() {
  int numStudents, choice, studentNo;

  cout << "Enter number of students: ";
  cin >> numStudents;

  Student students[numStudents];
  for (int i = 0; i < numStudents; i++) {
    cout << "Enter student name: ";
    cin >> students[i].name;
    cout << "Enter marks for " << 3 << " courses: ";
    for (int j = 0; j < 3; j++) {
      cin >> students[i].marks[j];
    }
  }

  do {
    cout << "1. Display Data" << endl;
    cout << "2. Change Marks" << endl;
    cout << "3. Calculate Average Marks" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        DisplayData(students, numStudents);
        break;
      case 2:
        cout << "Enter student number to update marks : ";
        cin >> studentNo;
        ChangeMarks(students[studentNo - 1]);
        break;
      case 3:
        cout << "Enter student number to calculate average marks: ";
        cin >> studentNo;
        cout << "Average marks: " << CalcAverageMarks(students[studentNo-1]) << endl;
        break;
      case 4:
        break;
      default:
        cout << "Invalid choice!" << endl;
    }
  } while (choice != 4);

  return 0;
}
