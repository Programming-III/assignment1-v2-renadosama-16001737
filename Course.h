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
Course(string courseCode, string courseName, int maxStudents, Student* students, int currentStudents);
~Course();
void addStudent(const Student& s);
displayCourseInfo();
string getCourseCode();
string getCourseName();
int getMaxStudents();
int getCurrentStudents();
void setCourseCode();
void setCourseName();
void setMaxStudents();
void setCurrentStudent();








};


#endif
