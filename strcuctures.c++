#include <iostream>

using namespace std;

// we create a structure to store the data of a student
// نقوم بإنشاء بنية لتخزين بيانات الطالب
struct strStudent
{
    int id;
    string name;
    int age;
};



int main()
{
   // we create a variable of type Student
   // نقوم بإنشاء متغير من نوع طالب
   strStudent student;

   //we assign values to the fields of the structure
   // نقوم بتعيين قيم لحقول
   student.id = 1;
   student.name = "Mohammed Daood";
   student.age = 20;

    // we print the values of the fields of the structure
    // نقوم بطباعة قيم حقول 
    cout << "Student ID: " << student.id << endl;
    cout << "Student Name: " << student.name << endl;
    cout << "Student Age: " << student.age << endl;

    return 0;
}



