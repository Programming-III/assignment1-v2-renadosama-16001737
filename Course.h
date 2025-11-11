#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here
class Course{

private:
string courseCode;
string courseName;
int maxStudents;
Student* students;
int currentStudents;

public:
Course();
Course( string courseCode, string courseName, int maxStudents, Student* students, int currentStudents);
~Course();
void addStudent(const Student& s);
displayCourseInfo();
string getcourseCode();
string getcourseName();
int getmaxStudents();
int getcurrentStudents();
void setcourseCode();
void setcourseName();
void setmaxStudents();
void setcurrentStudent();








};


#endif
